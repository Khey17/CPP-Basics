#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string S, T;
 
    getline(cin, S);
 
    stringstream X(string S);
 
    while (getline(X, T, ' ')) {
        cout << T << endl;
    }
 
    return 0;
}
