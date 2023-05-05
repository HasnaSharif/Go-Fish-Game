//
// Created by Hasna Sharif on 11/9/20.
//

#include "deck.h"

//only has a default constructor. Constructs a pristine sorted deck.
//Did not really know what sorted means in this regard so I put all spades in order, A,1...Q,K
//followed by all hearts, then diamonds, then clubs.
Deck::Deck() {
    myIndex=0;
    for (int i = 0; i < 4; ++i) {
        Card::Suit suitToAdd = Card::spades;
        if(i==1)
            suitToAdd=Card::hearts;
        if(i==2)
            suitToAdd=Card::diamonds;
        if(i==3)
            suitToAdd=Card::clubs;
        for (int j = 1; j <= 23; ++j) {
            myCards[myIndex]=Card(j,suitToAdd);
            myIndex++;
        }
    }

    //Set index to top of desk.
    myIndex=0;
    //Set random num generator seed
    currentTime = (unsigned)time(0);
    srand(currentTime);
}

//Function will replenish the Deck with all 52 cards and than randomize them.
//In our case, this means it will randomize the order of the deck and than reset myIndex to 0,
//the "top"(first) card in deck.
void Deck::shuffle() {

    //Will move 1 random card in the deck to beginning 100 times.
    for (int i = 0; i < 100; ++i) {
        //move card at random index specified by randomNum to beginning of deck. Do this 52 times.
        int randomNum = rand()%SIZE;
        Card temp = myCards[0];
        myCards[0]=myCards[randomNum];
        myCards[randomNum]=temp;
    }

    //Reset myIndex for drawing cards to 0(top of deck). This "repopulates" the deck with all 52 cards.
    myIndex=0;
}

// dealCard() returns the top card from the deck and decreases the
// number of cards in the deck returned by size(). (Increments myIndex)
Card Deck::dealCard() {
    if(myIndex>SIZE-1){
        cout<<"Can't deal anymore Cards! Deck is empty!"<<endl;
        exit(1);
    }
    else{
        Card temp = myCards[myIndex];
        myIndex++;
        return temp;
    }

}

//returns the number of cards left in the deck.
int Deck::size() const {
    return SIZE-myIndex;
}
