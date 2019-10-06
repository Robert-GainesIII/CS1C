
#ifndef CARD_CLASS_HEADER
#define CARD_CLASS_HEADER

#include <iostream>
#include <string>
using namespace std;

enum{deck_size = 52};

typedef enum{
    ACE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 11,
    QUEEN = 12,
    KING = 13
}type;

typedef enum{
    HEARTS, SPADES, CLUBS, DIAMONDS
}Suit;

    class Card{
        
    public:
        
        int getValue()const;
        Suit getSuit()const;
        
        void setValue(int);
        void setSuit(Suit);
        
        Card();
        Card(int, Suit);
        
         friend bool operator==(const Card &, const Card &);
        
    private:
        
        int value;
        Suit suit;
        
    };
    


#endif
