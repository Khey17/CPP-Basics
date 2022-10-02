/* Calculate the sum of Odd Natural numbers b/w 1 and 100 (inclusive) */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int sum (0);
    
    for (int i(1); i <= 100; ++i){
        if (i % 2 != 0)
            sum += i;
    }
    cout << sum << endl;
    
    vector <double> temps {87.9, 77.9, 80.0, 72.5};
    
    double avg_temp (0.0);
    double sum_temp (0.0);
    
    for (auto temp : temps){
        sum_temp += temp;
        avg_temp = sum_temp/temps.size();
    }    
    cout << fixed << setprecision(2);
    cout << avg_temp << endl;
    
    for (auto c: "We enjoyed a lot, Sir!"){
        if (c != ' ' && c != ',' && c != '!')
            cout << c;
    }        
    cout << endl;
    
    for (auto c: "We enjoyed a lot, Sir!")
        if (c == ' ')
            cout << "\t";
        else 
            cout << c;
    
    return 0;
}