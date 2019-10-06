#include <iostream>
#include "Deck.h"


int main(){
    Deck myDeck;
    Deck secondDeck;
    bool quit = false;
    int count = 0;
    while(!quit){
        
        myDeck.shuffle();
        count++;
        if(myDeck == secondDeck){
            cout << "Full shuffle complete decks are equal again." << endl;
            quit = true;
        }
    }
    cout << "The deck was shuffled " << count << " times before returning to original config." <<                             endl;
}
