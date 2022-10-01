#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> vec {10, 20, 30, 40, 50};
    vec [0] = 100;
    vec [4] = 1000;
    
    cout << vec [0] << endl;
    cout << vec [1] << endl;
    cout << vec [2] << endl;
    cout << vec [3] << endl;
    cout << vec [4] << endl;
    
    return 0;
}