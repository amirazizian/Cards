#include <string>
#include <iostream>
#include <algorithm>
#include "deck.h"

Deck::Deck()
{
  for(int i = 0; i < 52; i++)
  {
    cards[i] = Card();
    cards[i].set_value(i % 13 + 1, i / 13);
  }
}
  
Deck::~Deck()
{
  for(int i = 0; i < 52; i++)
  {
    cards[i].~Card();
  }
}
  
void Deck::deal_hand(int sets, int cardsPerSet)
{
  for(int i = 0; i < sets * cardsPerSet; i++)
  {
    cards[i].print();

    if((i + 1) % cardsPerSet == 0)
    {
      cout << endl;
    }
  }
}
  
void Deck::print_deck()
{
  for(int i = 0; i < 52; i++)
  {
    cards[i].print();

    if(i % 13 == 12)
    {
      std::cout << endl;
    }
  }
}

int GenerateRandom(int seed)
{
  srand(time(0));
  return rand() % seed;
}

void Deck::shuffle(int seed)
{
  random_shuffle(std::begin(cards), std::end(cards), GenerateRandom);
}

void Deck::sort()
{
  int size = sizeof(cards) / sizeof(cards[0]);
  sorter.Sort(cards, size);
}