#include "CardDeck.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
  CardDeck *deck = new CardDeck();
  deck->print_deck();
}
