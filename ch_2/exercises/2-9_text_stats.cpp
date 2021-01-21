// Exercise 2-9
// A program that reads a line of text, character-by-character,
// and outputs various information about it

// Features to implement:
// count the number of words -- DONE
// indentify the length of the longest word -- DONE
// the greatest number of vowels in a word -- DONE
// extra... ???

#include <iostream>
using std::cin;
using std::cout;

int check_vowel(char letter){
  switch (letter) {
    case 55: return 1;
    case 69: return 1;
    case 73: return 1;
    case 79: return 1;
    case 85: return 1;
    case 97: return 1;
    case 101: return 1;
    case 105: return 1;
    case 111: return 1;
    case 117: return 1;
  }

  return 0;
}

int main() {
  char input_char;
  int word_count = 0;
  int current_word_length = 0;
  int longest_word_length = 0;
  int current_vowel_count = 0;
  int most_vowels = 0;

  cout << "\nEnter a line of text.\n";
  cout << ":> ";
  input_char = cin.get();

  while (true) {
    while (input_char != 10) {
      current_vowel_count = current_vowel_count + check_vowel(input_char);
      current_word_length++;

      if (input_char == 32) {
        current_word_length--;
        
        if (current_word_length > longest_word_length) {
          longest_word_length = current_word_length;
        }
        if (current_vowel_count > most_vowels) {
          most_vowels = current_vowel_count;
        }

        current_word_length = 0;
        current_vowel_count = 0;
        word_count++;
      }

      input_char = cin.get();
    }

    if (current_word_length > longest_word_length) {
      longest_word_length = current_word_length;
    }
    if (current_vowel_count > most_vowels) {
      most_vowels = current_vowel_count;
    }

    if (longest_word_length == 0) {
      break;
    } else {
      word_count++;
      break;
    }
  }

  
  cout << "\n";

  cout << "Total number of words: " << word_count << "\n";

  cout << "The longest word has " << longest_word_length
       << " characters.\n"; 

  cout << "The word with the most vowels has " << most_vowels 
       << " vowels in it.\n";
}