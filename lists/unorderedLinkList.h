//
//  unorderedLinkList.h
//  
//
//  Created by Robert Gaines on 5/6/19.
//

#ifndef unorderedLinkList_h
#define unorderedLinkList_h

#include "linkedList.h"

template <class Type>
class unorderedLinkedList: public linkedListType<Type> {
public:
    bool search(const Type& searchItem) const;
    //Function to determine whether searchItem is in the list. //Postcondition: Returns
    void insertFirst(const Type& newItem);
    
    void insertLast(const Type& newItem);

    void deleteNode(const Type& deleteItem); //Function to delete deleteItem from the list. //Postcondition: If found, the node containing

};


template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const
{
    nodeType<Type> *current; //pointer to traverse the list
    bool found = false;
    current = first;
    while (current != nullptr && !found) //search the list
        if (current->info == searchItem) //searchItem is found
            found = true;
        else
            current = current->link; //make current point to //the next node
    return found;
    
}//end search

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type& newItem) {
    nodeType<Type> *newNode; //pointer to create the new node
    newNode = new nodeType<Type>; //create the new node
    newNode->info = newItem;
    newNode->link = first;
    first = newNode;
    
    count++;
    
    if (last == nullptr)
        last = newNode;
}


template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type& newItem) {
    nodeType<Type> *newNode; //pointer to create the new node
    newNode = new nodeType<Type>; //create the new node
    newNode->info = newItem; //store the new item in the node
    newNode->link = nullptr; //set the link field of newNode
    //to nullptr
    if (first == nullptr)
    {
        first = newNode;
        last = newNode;
        count++;
    }
  
    //increment count
    else{ //the list is not empty, insert {
        last->link = newNode; //insert newNode after last
        last = newNode; //make last point to the actual
    //last node in the list
        count++; //increment count
    }
}

template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem) {
    nodeType<Type> *current; //pointer to traverse the list
    nodeType<Type> *trailCurrent; //pointer just before current bool found;
    if (first == nullptr) //Case 1; the list is empty
    cout << "Cannot delete from an empty list." << endl;
        else
        {
            
            if (first->info == deleteItem) {
                current = first;
            first = first->link;
            count--;
            if (first == nullptr) last = nullptr;
            delete current; }
    else {
    found = false;
    trailCurrent = first;
    current = first->link;
    //the list has only one node
    the node with the given info
    //set trailCurrent to point
    //to the first node
    //set current to point to
    //the second node
    while (current != nullptr && !found) {
        if (current->info != deleteItem) {
            trailCurrent = current;
            current = current-> link;
        }
        else
            found = true;
    }//end while
    }
    }
}
#endif
/* unorderedLinkList_h */
