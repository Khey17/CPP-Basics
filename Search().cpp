#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void Search (){
    int x (0);
    
    vector <int> v {95, 97, 99, 100, 110, 115, 119, 130};
    int p (0);
    int n (0);
    int y (0);

    cout << "Insert a Number: ";
    cin >> y;
    v.push_back(y);
    
    do{
        cout << "Enter a Number: ";
        cin >> x;
        //v.push_back(x);
            for (size_t i (0); i < v.size(); ++i){
                if (x == v.at(i)){
                    p = v.at(i);
                    n = i;
                }
            }
        if (x != p)
            cout << "Number not Found" << endl;
        else
            cout << "Number " << p << " at index " << n << endl;
    }while (x == p);
//    else
//        cout << "Number not Found" << endl;
}

int main (){
    Search();

    return 0;
}