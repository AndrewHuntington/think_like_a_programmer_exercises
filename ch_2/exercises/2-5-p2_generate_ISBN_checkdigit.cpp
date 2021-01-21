// Exercise 2-5 (Part 2)
// This program will take a 12-digit ISBN and generate the check-digit
// This program processes each inputed character individually

#include <iostream>
using namespace std;

int createCheckDigit(int checksum)
{
  int checkDigit;
  checkDigit = 10 - (checksum % 10);
  if (checkDigit == 10)
  {
    return 0;
  } else 
  {
    return checkDigit;
  }
}

int main()
{
  // Take a 12 digit number from the user
  // Convert each character to its integer equivalant
  // Calculate and store the checksum:
  //    1. If the position is even, multiple the numberby 3, else leave alone
  //      -Counting begins from 12 from the left
  //    2. Add the result to the checksum
  //    3. The final checksum % 10 should equal 0 if valid

  char digit;
  int checksum = 0;
  int characterPosition = 12;

  cout << "Enter the first 12 digits of an ISBN (anything after the 12th digit will be ignored): ";

  while (characterPosition >= 1)
  {
    cin >> digit;
    
    if ((characterPosition + 1) % 2 == 0)
    {
      checksum += (digit - '0') * 3;
    } else 
    {
      checksum += digit - '0';
    }

    characterPosition--;
  }

  cout << "The checksum of the value you entered is: " << checksum << ".\n";
  cout << "The check digit is: " << createCheckDigit(checksum) << ".\n";
}
