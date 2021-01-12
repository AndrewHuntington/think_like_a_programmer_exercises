// Exercise 2-6
// Covert a number (of indeterminate length) from decimal to binary & vice versa

#include <iostream>
using std::cin;
using std::cout;

int findArrayLength(int digit)
{
  int arrayLength = 0;
  while (digit >= 1) {
    digit = digit / 2;
    arrayLength++;
  }
  return arrayLength;
}

int convertDecimalToBinary(int digit)
{
  // Guard against 0
  if (digit == 0)
  {
    cout << "0\n";
    return 0;
  }

  int count = -1;
  int binaryNumber[findArrayLength(digit)];

  while (digit >= 1)
  {
    count++;
    if (digit % 2 == 0)
    {
      binaryNumber[count] = 0;
    } else
    {
      binaryNumber[count] = 1;
    }
    digit = digit / 2;
  }

  while (count >= 0) {
    cout << binaryNumber[count];
    count--;
  }

  return 0;
}

int main()
{
  // TODO: enum with two choices: decimal or binary

  // TODO: Allow user to choose to convert from dec to bin or vice versa
  cout << "Please enter a decimal number: ";
  int digit;
  cin >> digit;

  cout << "The number " << digit << " in binary is: ";

  // TODO: Use switch statement with enum to select dectobin or bintodec
  convertDecimalToBinary(digit);

  cout << "\n";
}