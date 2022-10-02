#include <iostream>

using namespace std;

int main ()
{
//    int num (0);
//    cout << "enter a positive integer to start a countdown: ";
//    cin >> num;
//    
//    while (num > 0){
//        cout << num << endl;
//        --num;
//    }
//    
//    cout << "Fuck Off" << endl;
    
//    int num (0);
//    cout << "enter a positive integer to count upto: ";
//    cin >> num;
//    
//    int i (1);
//    while (num >= i){
//        cout << i << endl;
//        ++i;
//    }

//      double num (0);
//      cout << "Enter a number less than 100: ";
//      cin >> num;
//      
//      while (num >= 100){
//          cout << "Enter a number less than 100: ";
//          cin >> num;
//      }
//      cout << "thanks!" << endl;
      
      bool done(false);
      double num (0);
      cout << "Enter a number less than 100: ";
      cin >> num;
      
      while (!done){ // !done = true
          if (num > 100){
              cout << "Enter a number less than 100: ";
              cin >> num;
              cout << "The number you entered is invalid." << endl;
          }
          else{
              cout << "thanks!" << endl;
              done = true;
          }
          
      }
      
    return 0;
}