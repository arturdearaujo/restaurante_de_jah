#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include "table.h"
#include "bill.h"
#include <vector>
#include "sharedbill.h"

using namespace std;

class SharedBill;
class Table;
class Client
{
public:
    Client();
    QString username;
    QString password;
    Table *table;
    Bill *bill;
    vector <SharedBill*> sharedBills[];
    void setUsername();
};

#endif // CLIENT_H
