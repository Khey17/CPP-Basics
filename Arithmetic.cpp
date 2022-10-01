#include <iostream>

using namespace std;

int main ()
{
    int num1 (100);
    int num2 (200);
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n" << endl;
    
    int result;
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    //float result;
    result = num2/num1;
    cout << num2 << "/" << num1 << " = " << result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    return 0;
}
