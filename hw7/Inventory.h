
#ifndef INVENTORY_CLASS_HEADER
#define INVENTORY_CLASS_HEADER

#include <string>
#include <iostream>
using namespace std;

struct Item
{
    string name;
    int quantity;
    float cost;
};

namespace tax{
    const double TAX = .825;
}

const int MAX_SIZE = 50;

class ManageInventory
{
    public:
    ManageInventory() : size(MAX_SIZE), count(0), p_pInventoryItems (new Item *[size])
    { 

    }
    ManageInventory(int size) : size(size), count(0), p_pInventoryItems (new Item *[size]) 
    {

    }
    ManageInventory(const ManageInventory &);
    ~ManageInventory();

    void addItem(string name, int quantity, float cost);
    void purchase();

    private:

    int size;
    int count;
    Item ** p_pInventoryItems;

};

#endif