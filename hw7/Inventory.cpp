#include "Inventory.h"
using namespace tax;

ManageInventory::~ManageInventory(){
    for(int i = 0; i < size; i++){
        delete p_pInventoryItems[i];
    }
    delete [] p_pInventoryItems;

    cout<<"Pointed to Data and pointer have been deleted." << endl;
}
    
void ManageInventory::addItem(string name, int quantity, float cost){
    if(count < size){
        p_pInventoryItems[count] = new Item{name, quantity, cost};
        count++;
        cout << "Item Added to Dynamic Array." << endl;
    }
    else{
        cout << "Dynamic Array is Full." << endl;
    }
}

ManageInventory::ManageInventory(const ManageInventory & copy)
{
    size = copy.size;
    count = 0;
    p_pInventoryItems = new Item *[size];
    for(int i = 0; i< size; i++){
        
        p_pInventoryItems[i] = new Item{copy.p_pInventoryItems[i]->name, copy.p_pInventoryItems[i]->quantity, copy.p_pInventoryItems[i]->cost};
    }
}

void ManageInventory::purchase(){
    int quantities[size];
    string names[size];
    double costs[size];
    bool quit = false;

    double total = 0;

    for(int i = 0; i < size; i++){
        cout<<"Inventory Index: " << i << endl;
        cout<<"Product Name:" << p_pInventoryItems[i]->name << endl;
        cout<<"Product Cost:" << p_pInventoryItems[i]->cost << endl;
        cout<<"Qty in Stock:" << p_pInventoryItems[i]->quantity << endl;
    }
    cout << "=========================================" << endl;
    //loop through and prompt user for data
    while(quit == false){
        cout << "Enter Index of Product: ";
        int choice; 
        cin >> choice;
        if(choice < size && choice >= 0){
            cout << "Enter the Quantity of " << p_pInventoryItems[choice]->name <<" desired." << endl;
            int qty;
            cin >> qty;
            if(qty >= 0 && qty < p_pInventoryItems[choice]->quantity){
                names[choice] = p_pInventoryItems[choice]->name;
                quantities[choice] = qty;
                costs[choice] = p_pInventoryItems[choice]->cost;
            }
        }
        cout << "Would you like to make another purchase (1)yes (2)no?" << endl;
        cin >> choice;
        if(choice == 2)quit = true;
    }
    
    //loop through parellel arrays and add up and print receipt
    for(int i = 0; i< size; i++){
        if(names[i].length() > 1){
            cout << names[i] << " QTY Purchased: " << quantities[i] << "    :$" << costs[i]*quantities[i] << endl;
            total += costs[i] * quantities[i];
        }
    }
    cout << endl << "======================================" << endl;
    cout << "Subtotal: $" << total + (total * TAX) << endl << endl;
}