#include<iostream>
#include <vector> 
#include <algorithm>
#include "Card.h"
class DeckOfCard{
      vector<Card> deck;
      int currentCard;
      public:
            DeckOfCard();
            void shuffle();
            Card dealCard();
            bool moreCard();
};

DeckOfCard::DeckOfCard(){
      for(int idx =0 ;idx<52;idx++){
            for(int i=0;i<4;i++){
                  for(int j=0;j<13;j++){
                        deck.push_back(Card(j,i));
                  }
            }  
      }
}
void DeckOfCard::shuffle(){
      random_shuffle(deck.begin(),deck.end());
}
Card DeckOfCard::dealCard(){
      Card nextCard = deck.at(currentCard);
      currentCard++;
      return nextCard;
}
bool DeckOfCard::moreCard(){
      return(currentCard>=52?false:true);
}