#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
    int size (0);
    cin >> size;
    
    int arr[size];
    int s;
    
    for (int i = 0; i < size; ++i){
        cin >> arr[i];
      //  cout << "-" << endl;
    }
    cout << endl;
//    s = arr[2];
    
    for (int i (0); i < size; ++i){
        if (s > arr[i])
            s = arr[i];
    }
    
    cout << "The Smallest Number in the Array is " << s << endl;
    
    return 0;
}
