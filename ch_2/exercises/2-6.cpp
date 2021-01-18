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

int convertDecimalToBinary()
{
  cout << "Please enter a decimal number to convert to binary: ";
  int digit;
  cin >> digit;

  int originalDigit = digit;

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

  cout << "The number " << originalDigit << " in binary is: ";

  while (count >= 0) {
    cout << binaryNumber[count];
    count--;
  } 

  cout << "\n";

  return 0;
}

int processBinaryToDecimal(int currentBinaryNumber) {
  int sum = 0;
  char binaryDigitChar;

  while (true) 
  {
    // Provides minimum error handling by ending on non-binary 
    // input or "enter"/"return"
    if (currentBinaryNumber != 0 && currentBinaryNumber != 1) 
    {
      break;
    } else 
    {
      sum = sum * 2 + currentBinaryNumber;
      binaryDigitChar = cin.get();
      currentBinaryNumber = binaryDigitChar - '0';
    }
  }

  return sum;
}

void convertBinaryToDecimal()
{
  char binaryDigitChar;
  int currentBinaryNumber;

  cout << "Enter a binary number to convert to decimal: ";

  cin >> binaryDigitChar;
  currentBinaryNumber = binaryDigitChar - '0';

  int sum = processBinaryToDecimal(currentBinaryNumber);

  cout << "\n";

  cout << "The decimal number is: " << sum << "\n";
}

int main()
{
  char choice;

  cout << "\nPlease enter 'b' to convert from binary to decimal.\n";
  cout << "Please enter 'd' to covert from decimal to binary.\n";
  cout << "\nYour selection:> ";
 
  cin >> choice;

  if (choice == 'b' || choice == 'B')
  {
    convertBinaryToDecimal();
  } else if (choice == 'd' || choice == 'D') 
  {
    convertDecimalToBinary();
  } else 
  {
    cout << "Invalid selection. Please try again.\n";
    main();
  }
}