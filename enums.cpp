#include <iostream>

using namespace std;

int main ()
{
   enum direction {
        Left, Up, Right, Down
    };
    
    direction path {Down};
    //cin >> path;
    
    switch (path){
    case Left:
    cout << "You are going in the right direction." << endl;
    break;
    case Up:
    cout << "You are going in the right direction." << endl;
    break;
    default:
    cout << "Wrong direction, Mf!" << endl;
    break;
    }
    
    return 0;
}   