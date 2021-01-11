// Exercise 2-3
// Creates the following shape (14 cols, 8 rows):
// #            #
//  ##        ## 
//   ###    ###  
//    ########   
//    ########
//   ###    ###
//  ##        ##
// #            #


#include <iostream>
using std::cout;
using std::cin;

int main() 
{
  // Top half
  for(int row = 1; row <= 4; row++) 
  {
    for(int col = 1; col <= 14; col++)
    {
      if ((col >= row && col < row * 2) ||
          (col <= 14 - row + 1 && col >= 14 - row * 2 + 2))
      {
        cout << "#";
      } else 
      {
        cout << " ";
      }
    }
    cout << "\n";
  }

  // Bottom half
  for(int row = 4; row >= 1; row--) 
  {
    for(int col = 1; col <= 14; col++)
    {
      if ((col >= row && col < row * 2) ||
          (col <= 14 - row + 1 && col >= 14 - row * 2 + 2))
      {
        cout << "#";
      } else 
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}