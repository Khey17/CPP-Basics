#include <iostream>

using namespace std;

int main ()
{
    int num (0);
    cout << "Enter an Integer: ";
    cin >> num;
    
    cout << num << " is an " << ((num % 2 == 0)?"Even Number":"Odd Number") << endl;
    
    int num1 (0), num2 (0);
    cout << "Enter two Integers: ";
    cin >> num1 >> num2;
    
    if (num1 != num2){
        cout << "largest: " << ((num1 > num2)?num1:num2) << endl;
        cout << "smallest: " << ((num2 > num1)?num1:num2) << endl;
    }else
        cout << num1 << " and " << num2 << " are the same." << endl;
    
    return 0;
}