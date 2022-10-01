#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int total;
    int num1, num2, num3;
    const int count (3);
    
    cout << "Enter 3 integers separated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average (0.0);
    
    average = total/count;
    average = static_cast<double>(total)/count;
    cout << setprecision(3);
    
    cout << "The 3 numbers were: " << num1<< num2 << num3 << endl;
    cout << "The sum of 3 numbers: " << total << endl;
    cout << "Average of the numbers: " << average << endl;
    
    cout << endl;
    return 0;
}
