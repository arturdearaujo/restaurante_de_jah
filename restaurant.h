#ifndef RESTAURANT_H
#define RESTAURANT_H
#include<vector>
#include"product.h"
#include"table.h"

using namespace std;

class Product;
class Restaurant
{
public:
    Restaurant();
    int maxClient = 16;
    vector<Product*> products[];
    vector<Table*> tables[4];
};

#endif // RESTAURANT_H
