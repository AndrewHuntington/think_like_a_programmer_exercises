// Exercise 2-7
// Convert between binary, decimal, and hexadecimal numbers

// TODO: Create menu
// TODO: handle decimal <-> hexadecimal (0-9 A-F) conversions
// TODO: handle binary <-> hex conversions
// TODO: Move code from 2-6 to handle binary <-> decimal

#include <iostream>
using std::cin;
using std::cout;

int findArrayLength(int number)
{
  int arrayLength = 0;
  while (number >= 1) {
    number = number / 16;
    arrayLength++;
  }
  return arrayLength;
}

int convertHexToDecimal() {
  char hexDigitChar;
  int decDigit;
  int sum = 0;

  cout << "Enter a number in hexadecimal format to convert to decimal: ";
  hexDigitChar = cin.get();

  cout << "The hexadecimal number ";
  
  while (hexDigitChar != 10) {
    cout << hexDigitChar;

    if (hexDigitChar - '0' >= 0 && hexDigitChar - '0' < 10) {
      decDigit = hexDigitChar - '0';
    } else if (hexDigitChar > 64 && hexDigitChar < 71) {
      decDigit = hexDigitChar - 55;
    } else {
      cout << "\nInvalid hexadecimal number. Please try again.\n";
      break;
    }

    sum = sum * 16 + decDigit;

    hexDigitChar = cin.get();
  }

  cout << " converted to decimal: " << sum << "\n";

  return 0;
}

int convertDecimalToHex() {
  int numInDecimal = 0;
  int remainder;
  char hexDigitChar;

  cout << "Enter a number in decimal format to convert to hexadecimal: ";
  cin >> numInDecimal;

  char hexDigits[findArrayLength(numInDecimal)];
  int count = -1;

  cout << "\nThe decimal number " << numInDecimal 
       << " coverted to hexadecimal: ";

  while (numInDecimal > 0) {
    count++;
    remainder = numInDecimal % 16;

    switch (remainder) {
      case 0: hexDigitChar = '0'; break;
      case 1: hexDigitChar = '1'; break;
      case 2: hexDigitChar = '2'; break;
      case 3: hexDigitChar = '3'; break;
      case 4: hexDigitChar = '4'; break;
      case 5: hexDigitChar = '5'; break;
      case 6: hexDigitChar = '6'; break;
      case 7: hexDigitChar = '7'; break;
      case 8: hexDigitChar = '8'; break;
      case 9: hexDigitChar = '9'; break;
      case 10: hexDigitChar = 'A'; break;
      case 11: hexDigitChar = 'B'; break;
      case 12: hexDigitChar = 'C'; break;
      case 13: hexDigitChar = 'D'; break;
      case 14: hexDigitChar = 'E'; break;
      case 15: hexDigitChar = 'F'; break;
    }
    
    hexDigits[count] = hexDigitChar;

    numInDecimal = numInDecimal / 16;
  }

  while (count >= 0) {
    cout << hexDigits[count];
    count--;
  }

  cout << "\n";
  
  return 0;
}

int main() {
  convertHexToDecimal();
  // convertDecimalToHex();
}