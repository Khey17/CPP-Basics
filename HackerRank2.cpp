#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    vector <int> v {a, b, c, d};
    int max;
    for (size_t i; i < v.size(); ++i){
        for (auto n : v){
            if (n > v.at(i))
                max = n;
        }
    }
  //  cout << max << endl;
    return max;
}

int main (){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    cout << endl;
    
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}
