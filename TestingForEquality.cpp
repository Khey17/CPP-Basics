#include <iostream>

using namespace std;

int main ()
{
    bool equal_result;
    bool not_equal_result;
    
//    int num1, num2;
    cout << boolalpha;
    
//    cout << "Enter two integers seperated by spaces: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout << "Comparision result (equals): " << equal_result <<  endl;
//    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
//    char char1, char2;
//    
//    cout << "Enter two characters seperated by spaces: " << endl;
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparision result (equals): " << equal_result << endl;
//    cout << "Comparision result (not equals): " << not_equal_result << endl;
    
    int num1;
    double num2;
    
    cout << "Enter an integer & a double seperated by spaces: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equals): " << equal_result <<  endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl;
    return 0;
    
}