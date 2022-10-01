#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    int n (1);
    int a (1);
    int b (1);
    cout << "Enter an Integer: ";
    cin >> a;
    cin >> b;
    
    for (int i = a; i <= b; ++i) {
        if (n >= 1 && n <= 9){
            if (i == 1){
                cout << "one" << endl;
            }else if (i == 2){
                cout << "two" << endl;
            }else if (i == 3){
                cout << "three" << endl;
            }else if (i == 4){
                cout << "four" << endl;
            }else if (i == 5){
                cout << "five" << endl;
            }else if (i == 6){
                cout << "six" << endl;
            }else if (i == 7){
                cout << "seven" << endl;
            }else if (i == 8){
                cout << "eight" << endl;
            }else if (i == 9){
                cout << "nine" << endl;
            }else if (i > 9 && i % 2 == 0){
                cout << "even" << endl;
            }else
                cout << "odd" << endl;
        }
    }
    return 0;
}
