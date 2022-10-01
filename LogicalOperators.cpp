#include <iostream>

using namespace std;

int main ()
{
    int num;
    const int lower (10);
    const int upper (20);
    
    cout << boolalpha;
    
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":";
    cin >> num;
    
    bool stmt (num >= lower && num <= upper);
    
   // within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << stmt << endl;
    
    
    double temp;
    int wind_speed;
    
    const int wind_speed_for_coat (25);
    const double temp_for_coat (45);
    
    bool wear_coat;
    cout << "Enter the current temp (F): ";
    cin >> temp;
    cout << "Enter the windspeed (Mph): ";
    cin >> wind_speed;
    
    wear_coat = temp < temp_for_coat || wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat OR? " << wear_coat << endl;
    
    wear_coat = temp < temp_for_coat && wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat AND? " << wear_coat << endl;
    return 0;
 
}

