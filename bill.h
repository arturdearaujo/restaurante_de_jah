#ifndef BILL_H
#define BILL_H
#include<vector>
#include"product.h"
#include"billitem.h"

using namespace std;

class Bill
{
public:
    Bill();
    vector<BillItem*> billItems[];
};

#endif // BILL_H
