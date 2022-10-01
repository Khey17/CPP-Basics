#include <iostream>

using std::cout;   // use only what you need
using std::cin;     
using std::endl;

int main ()
{
    int a;
    int b;
    
    cout << "Enter a: \n" << "Enter b: \n";
    cin >> a >> b;
 /*   
    cout << "Enter b: ";
    cin >> b;
*/    
    cout << "You enterd a, b as " << a << " and " << b << " respectively" << endl;
    
    return 0;
}
