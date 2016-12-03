#ifndef TABLE_H
#define TABLE_H
#include "bill.h"
#include <vector>
#include "client.h"

using namespace std;

class Client;
class Table
{
public:
    Table();
    Bill bill;
    vector<Client*> client[4];
};

#endif // TABLE_H
