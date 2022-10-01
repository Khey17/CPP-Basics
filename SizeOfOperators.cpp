#include <iostream>

using std::cout;   // use only what you need
using std::cin;     
using std::endl;

int main ()
{
    cout << "int : " << sizeof(int) << " Bytes" << endl;
    cout << "char : " << sizeof(char) << " Bytes" << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << " Bytes" << endl;
    cout << "short int : " << sizeof(short int) << " Bytes" << endl;
    cout << "long int : " << sizeof(long int) << " Bytes" << endl;
    cout <<"long long int : " << sizeof(long long int) << " Bytes" << endl;
    cout << "Float : " << sizeof(float) << " Bytes" << endl;
    cout << "Double : " << sizeof(double) << " Bytes" << endl;
    
    cout << "---------------------------------------------------------" << endl;
    
    cout << "Minimum Value" << endl;
    cout << "Char : " << CHAR_MIN << endl;
    cout << "Int : " << INT_MIN << endl;
    cout << "Short Int : " << SHRT_MIN << endl;
    cout << "Long Int : " << LONG_MIN << endl;
    cout << "Long Long Int : " << LLONG_MIN << endl;
    
    cout << "---------------------------------------------------------" << endl;
    
        cout << "Minimum Value" << endl;
    cout << "Char : " << CHAR_MAX << endl;
    cout << "Int : " << INT_MAX << endl;
    cout << "Short Int : " << SHRT_MAX << endl;
    cout << "Long Int : " << LONG_MAX << endl;
    cout << "Long Long Int : " << LLONG_MAX << endl;
}
