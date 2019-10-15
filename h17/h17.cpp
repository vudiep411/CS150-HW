/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "vdiep8"; // Add your Canvas/occ-email ID

#include "h17.h"

// Write your functions here
string toString(Suit s)
{
    switch(s)
    {
       case Suit::CLUBS: return "Clubs";
       case Suit::SPADES: return "Spades";
       case Suit::DIAMONDS: return "Diamonds";
       case Suit::HEARTS: return "Hearts";



    /*    ACE, TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING */
    }
return "???";
}
string toString(Rank r)
{
    switch(r)
    {
       case Rank::ACE: return "Ace";
       case Rank::TWO: return "2";
       case Rank::THREE: return "3";
       case Rank::FOUR: return "4";
       case Rank::FIVE: return "5";
       case Rank::SIX: return "6";
       case Rank::SEVEN: return "7";
       case Rank::EIGHT: return "8";
       case Rank::NINE: return "9";
       case Rank::TEN: return "10";
       case Rank::JACK: return "Jack";
       case Rank::QUEEN: return "Queen";
       case Rank::KING: return "King";
    }
    return "???";
}
ostream& operator<<(std::ostream& out, const Card& c)
{
    out << toString(c.rank) << " of " << toString(c.suit);
    return out;
}

/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    cout << "toString(Rank)->" << toString(Rank::QUEEN) << endl;
    cout << "toString(Suit)->" << toString(Suit::HEARTS) << endl;
    Card c{Rank::ACE, Suit::SPADES};
    cout << "operator<< for Card->" << c << endl;

    return 0;
}
