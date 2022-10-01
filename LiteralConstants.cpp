#include "iostream"

using namespace std;

int main ()
{
    /* Frank's carpet cleaning service charges $40 per room Sales tax rate 6% Estimates
     * are valid for 40 days
     * 
     * Prompt the user for the number of rooms they would like cleaned and provide an
     * estimate such as:
Estimate for carpet cleaning service:
No. of room : 2
Price per room : $40
Cost : $60
Tax : $3.60
Total Estimate : $63.60
The estimate is valid for 40 Days */
     
     /* Pseudocode:
      * Prompt the user to enter the no. of rooms
      * Display number of rooms
      * Display price per room 
       
      * Display cost: (number of rooms * price per room)
      * Display total estimate = (no. of rooms * price per room) + tax rate
      * Display estimate expiration time */
      
      cout << "Hello, Welcome to Frank's cleaning service." << endl;
      cout << "\nHow many rooms would you like cleaned?\n";
      
      int num_of_rooms;
      cin >> num_of_rooms;
      
      cout << "\nEstimate for carpet cleaning service" << endl;
      cout << "Number of rooms:  " << num_of_rooms << endl;
      
      cout << "Price per room: $40" << endl;
      
      const double price_per_room (40);
      
      cout << "Cost: " << "$" <<num_of_rooms * price_per_room << endl;
      
      const double tax (0.06);
      
      cout << "Tax: $" << num_of_rooms * price_per_room * tax << endl;
      
      cout << "--------------------------------------------------------------" << endl;
      
      cout << "total estimate: " << "$" << (num_of_rooms * price_per_room) + num_of_rooms * price_per_room * tax << endl;
      cout << "This estimate is valid for 30 Days" << endl;
      
      return 0;
}
