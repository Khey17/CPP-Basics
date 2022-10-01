#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    double num (0.0);
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "Cubed root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "Sine of " << num << " is: " << sin(num) << endl;
    cout << "Cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "floor of " << num << " is: " << floor(num) << endl;
    cout << "round of " << num << " is: " << round(num) << endl;
    
    double power (0.0);
    
    cout << "Enter a power to raise " << num << " : ";
    cin >> power;
    
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
    return 0;
}