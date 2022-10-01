#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const double Rupees_per_Dollar (75.72);
    double Rupees(0.0);
    double USD(0.0);
    cout << "Enter the amount in Dollars: ";
    cin >> USD;
    
    Rupees = USD * Rupees_per_Dollar;
    cout << setprecision(6);
    
    cout << USD << "$ " << "is " << Rupees << " Indian Rupees" << endl;
    return 0;
}