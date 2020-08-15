#include <string>
#include <iostream>
#include <algorithm>
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

int GenerateRandom(int seed){
  return rand() % seed;
}

void Deck::shuffle(int seed)
{
  random_shuffle(std::begin(cards), std::end(cards), GenerateRandom);
}

void Deck::sort()
{
}
