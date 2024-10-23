


shuffled deck

int current_card = deck.pop_back();

int suit;

if (current_card >= 0 && current_card < 13) {
  suit = 0;
}

int card_value = current_card % 13;
