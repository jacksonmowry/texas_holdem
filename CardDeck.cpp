#include "CardDeck.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

//Contructor
CardDeck::CardDeck(int n) {
  this->n = n;
  deck = vector<int> (n);
  for (int i = 0; i < n; i++) {
    deck[i] = i;
  }
}


void CardDeck::print_deck() {
  for (size_t i = 0; i < deck.size(); i++) {
    cout << deck[i] << ' ';
  }
  cout <<endl;
}

