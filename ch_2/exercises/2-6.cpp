// Exercise 2-6
// Covert a number (of indeterminate length) from decimal to binary & vice versa

#include <iostream>
using std::cin;
using std::cout;

int main()
{
  // TODO: Start with converting a single digit decimal number to binary
  char digitChar;
  cout << "Please enter a number (0-9): ";
  cin >> digitChar;
  int digit = digitChar - '0';

  cout << "The number " << digitChar << " in binary is: ";

  // Produces the number in binary, but reversed
  // TODO: Figure out how to correct
  while (digit >= 1)
  {
    if (digit % 2 == 0)
    {
      cout << "0";
    } else
    {
      cout << "1";
    }
    digit = digit / 2;
  }
  cout << "\n";
}