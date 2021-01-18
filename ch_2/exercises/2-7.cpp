// Exercise 2-7
// Convert between binary, decimal, and hexadecimal numbers

// TODO: Create menu
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

void processDecimalToBinary(int number) {
  // Guard against 0
  if (number == 0)
  {
    cout << "0\n";
  }

  int count = -1;
  int binaryNumber[findArrayLength(number)];

  while (number >= 1)
  {
    count++;
    if (number % 2 == 0)
    {
      binaryNumber[count] = 0;
    } else
    {
      binaryNumber[count] = 1;
    }
    number = number / 2;
  }

  cout << "Your number converted to binary is: ";

  while (count >= 0) {
    cout << binaryNumber[count];
    count--;
  }

  cout << "\n";
}

void convertDecimalToBinary()
{
  cout << "Please enter a decimal number to convert to binary: ";
  int number;
  cin >> number;

  processDecimalToBinary(number);
}

int processHexToDecimal(char hexDigitChar) {
  int decDigit;
  int sum = 0;

  while (hexDigitChar != 10) {
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

  return sum;
}

void convertHexToDecimal() {
  char hexDigitChar;

  cout << "Enter a number in hexadecimal format to convert to decimal: ";
  hexDigitChar = cin.get();

  cout << "Your number converted to decimal: " 
       << processHexToDecimal(hexDigitChar)  << "\n";
}

void processDecimalToHex(int numInDecimal) {
  int remainder;
  char hexDigitChar;
  char hexDigits[findArrayLength(numInDecimal)];
  int count = -1;

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
}

void convertDecimalToHex() {
  int numInDecimal = 0;

  cout << "Enter a number in decimal format to convert to hexadecimal: ";
  cin >> numInDecimal;

  cout << "\nThe decimal number " << numInDecimal 
       << " coverted to hexadecimal: ";

  processDecimalToHex(numInDecimal);

  cout << "\n";
}

int processBinaryToDecimal(int currentBinaryNumber) {
  int sum = 0;
  char binaryDigitChar;

  while (true) {
    // Provides minimum error handling by ending on non-binary 
    // input or "enter"/"return"
    if (currentBinaryNumber != 0 && currentBinaryNumber != 1) 
    {
      break;
    } else {
      sum = sum * 2 + currentBinaryNumber;
      binaryDigitChar = cin.get();
      currentBinaryNumber = binaryDigitChar - '0';
    }
  }

  return sum;
}

void convertBinaryToDecimal() {
  char binaryDigitChar;
  int currentBinaryNumber;

  cout << "Enter a number in binary format to convert to decimal: ";
  cin >> binaryDigitChar;
  currentBinaryNumber = binaryDigitChar - '0';

  

  cout << "Your number converted to decimal: " 
       << processBinaryToDecimal(currentBinaryNumber) << "\n";

  cout << "\n";
}

void convertBinaryToHex() {
  char binaryDigitChar;
  int currentBinaryNumber;
  
  cout << "Enter a number in binary format to convert to hexadecimal: ";
  cin >> binaryDigitChar;
  currentBinaryNumber = binaryDigitChar - '0';

  int numInDecimal = processBinaryToDecimal(currentBinaryNumber);

  cout << "\nYour number coverted to hexadecimal: ";

  processDecimalToHex(numInDecimal);

  cout << "\n";
}

void convertHexToBinary() {
  char hexDigitChar;
  int numInDec = 0;

  // convert hex to dec
  // convert dec to bin
  cout << "Enter a number in hexadecimal format to convert to binary: ";
  hexDigitChar = cin.get();
  numInDec = processHexToDecimal(hexDigitChar);
  processDecimalToBinary(numInDec);
}

int main() {
  // convertBinaryToDecimal();
  // convertBinaryToHex();
  // convertHexToBinary();
  // convertHexToDecimal();
  // convertDecimalToHex();
  convertDecimalToBinary();
}