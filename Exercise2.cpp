// See the Q/A forum for more about size_t
// size_t is an unsigned int
// you can replace size_t with int or unsigned int and it will work fine

#include <iostream>
#include <vector>
using namespace std;

int main (){
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    vector<signed int> vec{-100, 90, -95, 94, -99, 92};
    int count {0};
    unsigned int i {0};
    
    while (i < vec.size() && vec.at(i) != -99  ) {
        count = ++i;
        //cout << i << endl;
    }
    cout << count << endl;
        
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    
    return 0;
}
