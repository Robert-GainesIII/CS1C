
#ifndef DECK_CLASS_HEADER
#define DECK_CLASS_HEADER
#include "Card.h"

class Deck{
    
    
    Card deck[deck_size];
    
    public:
    
    friend bool operator==(const Deck &, const Deck &);
    
    void setDeck(Card (&)[deck_size]);
    
    void print() const;
    void shuffle();
    
    Card getCard(int) const;
    Deck getDeck() const;
    
    Deck();
    
};

#endif
