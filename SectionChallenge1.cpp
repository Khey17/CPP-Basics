#include <iostream>

using namespace std;

int main ()
{
//     1 Dollar = 100 cents
//     1 Quarter = 25 cents
//     1 Dime = 10 cents
//     1 Nickel = 5 cents
//     1 Penny = 1 cent
/* Declare the variables Dollar, Quarter, Dime, Nickel, Penny respectively.
 * Use Math operators to convert the input into Dollars & cents.
 */
    const int Dollar_Value (100);
    const int Quarter_Value (25);
    const int Dime_Value (10);
    const int Nickel_Value (5);
    const int Penny_Value (1);
    
    int Amount;
    cout << "Enter the Amount in cents: ";
    cin >> Amount;
    
    int Balance, Dollars, Quarters, Dimes, Nickels, Pennies;
    
    Dollars = Amount/Dollar_Value;
    Balance = Amount % Dollar_Value;
    
    Quarters = Balance/Quarter_Value;
    Balance %= Quarter_Value;
    
    Dimes = Balance/Dime_Value;
    Balance %= Dime_Value;
    
    Nickels = Balance/Nickel_Value;
    Balance %= Nickel_Value;
    
    Pennies = Balance/Penny_Value;
    Balance %= Penny_Value;
    
    cout << "Dollars: " << Dollars << endl;
    cout << "Quarters: " << Quarters << endl;
    cout << "Dimes: " << Dimes << endl;
    cout << "Nickels: " << Nickels << endl;
    cout << "Pennies: " << Pennies << endl;
    cout << "Balance: " << Balance << endl;
    
    return 0;
}
