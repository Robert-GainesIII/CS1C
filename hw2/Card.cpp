//
//  Card.cpp
//  
//
//  Created by Robert Gaines on 6/5/19.
//

#include "Card.h"

Card::Card(){
    
    value = 0;
}

Card::Card(int value, Suit suit){
    this->value = value;
    this->suit = suit;
}

int Card::getValue()const{
    return value;
}

Suit Card::getSuit()const{
    return suit;
}

void Card::setValue(int value){
    this->value = value;
}

void Card::setSuit(Suit suit){
    this->suit = suit;
}

bool operator==(const Card &left, const Card &right){
    if(left.getValue() == right.getValue() && left.getSuit() == right.getSuit())return true;
    else return false;
}
