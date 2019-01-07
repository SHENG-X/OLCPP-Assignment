#include <iostream>
#include "DeckOfCards.h"
int main()
{ 
      DeckOfCard deckCard_one;
      DeckOfCard deckCard_two;
      cout<<"Print first cards without shuffle:"<<endl;
      cout<<deckCard_one.dealCard().toString()<<endl;
      cout<<deckCard_one.dealCard().toString()<<endl;
      cout<<deckCard_one.dealCard().toString()<<endl;
      cout<<deckCard_one.dealCard().toString()<<endl;
      cout<<deckCard_one.dealCard().toString()<<endl;
      //----------------------------------------------
      cout<<"Shuffle and print first five cards"<<endl;
      deckCard_two.shuffle();
      cout<<deckCard_two.dealCard().toString()<<endl;
      cout<<deckCard_two.dealCard().toString()<<endl;
      cout<<deckCard_two.dealCard().toString()<<endl;
      cout<<deckCard_two.dealCard().toString()<<endl;
      cout<<deckCard_two.dealCard().toString()<<endl;
      //------------------------------------------
      cout<<"Check if more card, if more keep dealing card"<<endl;
      cout<<"More card?? "<<(deckCard_two.moreCard()?"true":"false")<<endl;
      while(deckCard_two.moreCard()){
            deckCard_two.dealCard();
      }
      cout<<"More card?? "<<(deckCard_two.moreCard()?"true":"false")<<endl;
}

