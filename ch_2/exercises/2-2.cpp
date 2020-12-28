// Exercise 2-2
// Creates the following shape:
//    ##  
//   ####  
//  ###### 
// ########
// ########
//  ###### 
//   ####  
//    ##   

#include <iostream>
using std::cout;
using std::cin;

int main() {
  // Top half
  for (int row = 1; row <= 4; row++) {
    for (int hashNum = 1; hashNum <= 8; hashNum++) {
      if (hashNum <= 4 - row || hashNum >= row + 5) {
        cout << " ";
      } else {
        cout << "#";
      }
    }
    cout << "\n";
  }

  // Bottom half
  for (int row = 1; row <= 4; row++){
    for (int hashNum = 1; hashNum <=8; hashNum++) {
      if (hashNum >= row && hashNum <= 8 - (row - 1)) {
        cout << "#";
      } else {
        cout << " ";
      } 
    }
    cout << "\n";
  }
}