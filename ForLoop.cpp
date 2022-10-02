#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    for (int i(0); i <= 17; i++){
        cout << i << endl;
    }
    
    cout << "----------------" << endl;
    
    for (int i(0); i <= 17; i+=2){
        cout << i << endl;
    }
    
    cout << "----------------" << endl;
    
    for (int i(17); i > 0; --i){
        cout << i << endl;
    }
    
    cout << "----------------" << endl;
    
    for (int i(10); i <= 100; i+=10){
        if (i % 3 == 0)
            cout << i << endl;
    }
    
    cout << "----------------" << endl;
    
    for (int i(1), j(3); i <= 5 && j <=8; ++i, ++j){   
        // If you use comma then you might get a warning, instead use && Or || Operator.
        cout << i << " + " << j << " = " << (i + j) << endl;
    }
    
    cout << "----------------" << endl;
    
    for (int i(1); i <= 100; ++i){
        cout << i;
        if (i % 20 == 0)
            cout << endl;
        else
            cout << " ";
    }
    
    cout << "----------------" << endl;
    
    for (int i(1); i <= 100; ++i){
        cout << i << ((i % 20 == 0)?"\n":" ");
    }
    
    cout << "----------------" << endl;
    
    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned int i(0); i < nums.size(); i += 3){
        cout << nums[i] << endl;
    }
    
    return 0;
}
