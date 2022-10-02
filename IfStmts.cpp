#include <iostream>

using namespace std;

int main ()
{
    int num (0);
    const int min (10);
    const int max (100);
    cout << "Enter an Integer b/w 10 & 100: ";
    cin >> num;
    
    if (num >= min){
        cout << "====== If Statement 1 ======" << endl;
        cout << num << " is an Integer greater than" << min << endl;
        
        int diff (num - min);
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num <= max){
        cout << "====== If Statement 2 ======" << endl;
        cout << num << " is an Integer less than " << max << endl;
        
        int diff (max - num);
        cout << num << " is " << diff << " less than " << max << endl; 
    }
    
    if (num >= min && num <= max){
        cout << "====== If Statement 3 ======" << endl;
        cout << num << " is within the range." << endl;
        cout << "This means Stmt 1 & 2 are True." << endl;
    }
    
    if (num == min || num == max){
        cout << "====== If Statement 4 ======" << endl;
        cout << num << " is either equal to " << min << " or " << max << endl;
        cout << "If Statement 4 is true, then all the Statements are true." << endl;
    }
    
        return 0;
}

