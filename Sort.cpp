#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> vec{};
    size_t i;
    cin >> i;
    
    for(size_t j; j < i; ++j){
        cin >> vec[j];
    }
    
    cout << "[";
    
    for(size_t j; j < i; ++j){
        if(vec[j]%2 == 0)
            cout << vec[j] << " "; 
    }
    
    cout << "]";
    
    return 0;
}