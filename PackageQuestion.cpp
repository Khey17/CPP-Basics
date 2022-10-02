/*
 * Shipping cost calculator
 * 
 * Ask the user for package dimensions 
 * i.e: length, width, height (Integers)
 * 
 * All the dimensions must be less than 
 * 10 inches or we cannot ship it
 * 
 * Base cost 2.50$
 * If the package volume is greater than 100 cubic centimeter 
 * then there is a 10% subcharge
 * If the package volume is greater than 500 cubic centimeter then 
 * there is a 25% subcharge 
*/

#include <iostream>

using namespace std;

int main ()
{
    int length (0), width (0), height (0), volume (0);
    double base_cost (2.50); //Dollars
    const double initial_subcharge (0.0);
    
    const int threshold_volume_1 (100); //cubic centimeters
    const int threshold_volume_2 (500);
    
    double const sub_charge_1 (0.10);
    double const sub_charge_2 (0.25);
    
    cout << "Enter the dimensions of the package: ";
    cin >> length >> width >> height; //inches
    
    volume = length * width * height;
    
    if (length < 10 && width < 10 && height < 10){
        cout << "The volume of the package is: " << volume << endl;
        if (volume > threshold_volume_1 && volume < threshold_volume_2){
            cout << "10% sub charge has been added." << endl;
            base_cost += base_cost * sub_charge_1;
        }else if (volume > threshold_volume_2){
            cout << "25% sub charge has been added." << endl;
            base_cost += base_cost * sub_charge_2;
        }else
            base_cost += base_cost * initial_subcharge; 
        cout << "The base cost for shipping is " << base_cost << "$" << endl;
    }else
        cout << "Sorry, Your Package dimension exceeded, cannot be shipped." << endl;
 
    return 0;
}
