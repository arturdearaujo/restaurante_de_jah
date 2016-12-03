#ifndef SHAREDBILL_H
#define SHAREDBILL_H
#include "client.h"
#include <vector>

using namespace std;

class Client;
class SharedBill
{
public:
    SharedBill();
    vector <Client*> client[];
};

#endif // SHAREDBILL_H
