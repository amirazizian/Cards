#include <string>
#include <iostream>
#include "deck.h"

Deck::Deck()
{
  for(int i = 0; i < 52; i++){
    cards[i] = Card();
    cards[i].set_value(i % 13 + 1, i / 13);
  }
}
  
Deck::~Deck()
{
  for(int i = 0; i < 52; i++){
    cards[i].~Card();
  }
}
  
void Deck::deal_hand(int sets, int cards)
{
}
  
void Deck::print_deck()
{
  for(int i = 0; i < 52; i++){
    cards[i].print();

    if(i % 13 == 12){
      std::cout << "\n";
    }
  }
}

void Deck::shuffle(int seed)
{
}

void Deck::sort()
{
}
