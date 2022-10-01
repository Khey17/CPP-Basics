#include <iostream>

using std::cout;   // use only what you need
using std::cin;     
using std::endl;

int main ()
{
    cout << "Enter the Length of the Rectangle: ";
    int Length;
    cin >> Length;
    
    cout << "Enter the Breadth of the Rectangle: \n";
    int Breadth;
    cin >> Breadth;
    
    cout << Length * Breadth << endl;
    return 0;
}
    