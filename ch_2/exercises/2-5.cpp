// Exercise 2-5 (Another check-digit system)
// This program will verify a 13-digit ISBN code (including check-digit)
// This program processes each inputed character individually

#include <iostream>
using namespace std;

int main()
{
  // Take a 13 digit number from the user
  // Convert each character to its integer equivalant
  // Calculate and store the checksum:
  //    1. If the position is even, multiple the numberby 3, else leave alone
  //      -Counting begins from 13 from the left
  //    2. Add the result to the checksum
  //    3. The final checksum % 10 should equal 0 if valid

  char digit;
  int checksum = 0;
  int characterPosition = 13;

  cout << "Enter a 13 digit number (anything after the 13th digit will be ignored): ";

  while(characterPosition >= 1)
  {
    cin >> digit;
    
    if (characterPosition % 2 == 0)
    {
      checksum += (digit - '0') * 3;
    } else 
    {
      checksum += digit - '0';
    }

    characterPosition--;
  }
  cout << "The checksum of the value you entered is: " << checksum << ".\n";

  if (checksum % 10 == 0)
  {
    cout << "This is a valid 13-digit ISBN.\n";
  } else {
    cout << "This is not a valid 13-digit ISBN.\n";
  }
}
