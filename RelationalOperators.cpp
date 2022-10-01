#include <iostream>

using namespace std;

int main ()
{
    int num1, num2;
    
    //cout << boolalpha;
    cout << "Enter 2 integers seperated by a space: ";
    cin >> num1 >> num2;
    
//    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
//    cout << num1 << " <=> " << num2 << " : " << (num1 <=> num2) << endl;

    const int lower (10);
    const int upper(15);
    
    cout << "\nEnter an integer that is greater than " << lower << ":";
    cout << num1 << " > " << " is " << (num1 > lower) << endl;
    cout << num2 << " > " << " is " << (num2 <= upper) << endl;
    
    return 0;
}