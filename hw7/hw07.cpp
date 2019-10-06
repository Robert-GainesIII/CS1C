#include <iostream>
#include "Inventory.h"


int main(){
    ManageInventory bob(5);
    bob.addItem("Nike BasketBall Shoes", 22, 145.99);
    bob.addItem("Under Armour T-Shirt", 33, 29.99);
    bob.addItem("Brooks running Shoes", 11, 111.44);
    bob.addItem("Asics Running Shoes", 20, 165.88);
    bob.addItem("Nike Shorts", 77, 45.77);
    bob.purchase();

    ManageInventory newInv(bob);
    
    return 0;
}
