// Exercise 2-4 (Create your own shape)
// Creates the following shape infinitely (10 cols, 20 rows):
// #
//  #      
//   #  
//    #
//     #
//      #
//       #
//        #
//         #
//          #
//          #
//         #
//        #
//       #
//      #
//     #
//    #
//   #
//  #
// #

#include <iostream>
using std::cout;
using std::cin;

int main()
{
  while (true) 
  {
    // Top half
    for(int row = 1; row <= 10; row++)
    {
      for(int col = 1; col <= 10; col++)
      {
        if (col == row)
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
    for(int row = 10; row >= 1; row--)
    {
      for(int col = 1; col <= 10; col++)
      {
        if (col == row)
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
}