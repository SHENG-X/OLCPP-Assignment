#include<iostream>
#include <string>
using namespace std;
class Card{
      int face, suit;
      public:
            string suits[4]={"Clubs","Diamonds","Heart","Spade"};
            string faces[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
            Card();
            Card(int _face, int _suit);
            string toString();
};
Card::Card(){
      
}
Card::Card(int _face, int _suit){
      face=_face;
      suit=_suit;
}
string Card::toString(){
      return faces[face]+" of "+suits[suit];
}