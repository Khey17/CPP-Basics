/* Frank's carpet cleaning service charges $40 per room Sales tax rate 6% Estimates
     * are valid for 40 days
     * 
     * Prompt the user for the number of rooms they would like cleaned and provide an
     * estimate such as:
Estimate for carpet cleaning service:
Price per small room : $25
Price per large room : $35
No. of small rooms : 3
No. of large rooms : 1
Cost : $110
Tax : $6.60
Total Estimate : $116.60
The estimate is valid for 30 Days */
     
     /* Pseudocode:
      * Prompt the user to enter the no. of rooms
      * Display number of rooms
      * Display price per room 
       
      * Display cost: (number of rooms * price per room)
      * Display total estimate = (no. of rooms * price per room) + tax rate
      * Display estimate expiration time */

#include <iostream>

using namespace std;

int main ()
{
    cout << "Hello, Welcome to Frank's Cleaning Service." << endl;
    cout << "How many rooms would you like cleaned? ";
    
    const double Price_per_small_room (25.00);
    const double Price_per_large_room (35.00);
    
    int num_of_small_rooms, num_of_large_rooms;
    cin >> num_of_small_rooms;
    cin >> num_of_large_rooms;
    
    cout << "Price per small room: $" << Price_per_small_room << endl;
    cout << "Price per large room: $" << Price_per_large_room << endl;
    cout << "No. of small rooms: " << num_of_small_rooms << endl;
    cout << "No. of large rooms: " << num_of_large_rooms << endl;
    
    const double tax (0.06);
    cout << "Cost: $" << num_of_small_rooms * Price_per_small_room + num_of_large_rooms * Price_per_large_room << endl;
    cout << "Tax: $" << (num_of_small_rooms * Price_per_small_room + num_of_large_rooms * Price_per_large_room) * tax << endl;
    
    cout << "----------------------------------" << endl;
    
    cout << "Total Estimate: $" << num_of_small_rooms * Price_per_small_room + num_of_large_rooms * Price_per_large_room + (num_of_small_rooms * Price_per_small_room + num_of_large_rooms * Price_per_large_room) * tax << endl;
    cout << "This estimate is valid for 30 Days" << endl;
    
    return 0;
}