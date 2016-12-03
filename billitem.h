#ifndef BILLITEM_H
#define BILLITEM_H
#include "product.h"

class BillItem
{
public:
    BillItem();
    Product *product;
    int quantity;
};

#endif // BILLITEM_H
