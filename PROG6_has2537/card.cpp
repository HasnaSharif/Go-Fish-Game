#include "card.h"
#include <iostream>
#include <string>


//Need to ask and come up with a method to deal with invalid rank and suit entries.

//default constructor for Card object. Will default to Ace of spades.
Card::Card() {
    myRank=1;
    mySuit=spades;
}

//definition for actual card object. Will take in a rank and suit as parameters to make a card.
Card::Card(int rank, Card::Suit s) {
    myRank=rank;
    mySuit=s;
}

//returns the string representation of a suit.
string Card::suitString(Card::Suit s) const {
    string suit;
    if(s==spades)
        suit+="s";
    else if(s==hearts)
        suit+="h";
    else if(s==diamonds)
        suit+="d";
    else
        suit+="c";
    return suit;
}

//Returns the String representation of a rank.
string Card::rankString(int r) const {
    string rank;
    if (r == 1)
        rank += "A";
    else if (r == 11)
        rank += "J";
    else if (r == 12)
        rank += "Q";
    else if (r == 13)
        rank += "K";
    else if (r == 14)
        rank += "2";
    else if (r == 15)
        rank += "3";
    else if (r == 16)
        rank += "3";
    else if (r == 17)
        rank += "4";
    else if (r == 18)
        rank += "5";
    else if (r == 19)
        rank += "6";
    else if (r == 20)
        rank += "7";
    else if (r == 21)
        rank += "8";
    else if (r == 22)
        rank += "9";
    else if (r == 23)
        rank += "10";



    return rank;
}

//toString function will return a string representation of the object for printing.
string Card::toString() const {
    string toReturn = rankString(myRank)+suitString(mySuit);
    return toReturn;
}

//Accessor method just to get a cards rank.
int Card::getRank() const {
    return myRank;
}

//Public function to check if one cards suit matches another cards suit.
bool Card::sameSuitAs(const Card &c) const {
    return mySuit == c.mySuit;
}

// == operator to return true if two Card objects are equal.
bool Card::operator==(const Card &rhs) const {
    return (mySuit==rhs.mySuit && myRank==rhs.getRank());
}

// != operator to return true if two cards are not equal.
bool Card::operator!=(const Card &rhs) const {
    return !(this->operator==(rhs));
}


