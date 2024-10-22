#include <vector>
#include <stdlib.h>

using namespace std;

class CardDeck {
  public:
    CardDeck(int n = 52);
    void shuffle(int seed);
    int deal();
    void print_hand(vector<int> &a);
    void print_deck();
  
  private:
    int n = 52;
    vector<int> deck;
};
