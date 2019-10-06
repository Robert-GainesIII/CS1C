//
//  Card.cpp
//  
//
//  Created by Robert Gaines on 6/5/19.
//

#include "Deck.h"


Deck::Deck(){
    Suit type;
    int value = 0;
    for(int i =0; i < deck_size; i++){
        
        if(value%13 == 0 && i!= 0)value = 0;
        
        switch(i/13){
            case 0:
                type = HEARTS;
                break;
            case 1:
                type = CLUBS;
                break;
            case 2:
                type = SPADES;
                break;
            case 3:
                type = DIAMONDS;
                break;
                
        }
        
        deck[i].setSuit(type);
        deck[i].setValue(value+1);
        value ++;
    }
}

Card Deck::getCard(int index) const{
    return deck[index];
}

bool operator==(const Deck &left, const Deck &right){
    bool isEqual = false;
    for(int i = 0; i < deck_size; i++){
        if((left.getCard(i)) == (right.getCard(i))){
            isEqual = true;
            break;
        }
        else{
           isEqual = false;
            break;
        }
    }
    return isEqual;
}

void Deck::print()const{
    string var;

    for(int i = 0; i < deck_size; i++){
        switch(deck[i].getSuit()){
            case HEARTS:
                var = "♥";
                break;
            case CLUBS:
                var = "♣";
                break;
            case SPADES:
                var = "♠";
                break;
            case DIAMONDS:
                var = "♦";
                break;
        }
        cout << " ----- " << endl;
        cout << "|";
        cout << var;
        cout << "    |" << endl;
        cout << "|     |" << endl;
        cout << "| ";
        if(deck[i].getValue() >=10) cout <<  deck[i].getValue() << "  |" << endl;
        else cout << deck[i].getValue() << "   |" << endl;
        cout << " ----- " << endl;
        if(i%13 == 0)cout << endl;
    }
}

void Deck::setDeck(Card (&newDeck)[deck_size]){
    for(int i = 0; i < deck_size; i++){
        deck[i] = newDeck[i];
    }
}



void Deck::shuffle(){
   
    Card firstHalf[deck_size/2];
    Card secondHalf[deck_size/2];
    
    int count = 0;
    
    for(int i= 0; i < deck_size/2; i++){
        firstHalf[i] = deck[count];
        count ++;
    }
    for(int i= 0; i < deck_size/2; i++){
        secondHalf[i] = deck[count];
        count ++;
    }
     
    int cardCount = 0;
    
    for(int i= 0; i < deck_size/2; i++){
        deck[cardCount] = firstHalf[i];
        cardCount++;
        deck[cardCount] = secondHalf[i];
        cardCount++;
    }

    print();
}
                  
  Deck Deck::getDeck() const{
      return *this;
  }
