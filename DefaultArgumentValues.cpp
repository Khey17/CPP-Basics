#include <iostream>
#include <cmath>
using namespace std;

double Cal_Total_Bill (double MRP = 999.00, double Tax_Rate = 0.07);

double Cal_Total_Bill (double MRP, double Tax_Rate){
    double Tot_Bill = MRP + (MRP * Tax_Rate);
    return Tot_Bill;
}

void Total_Price () {
    double MRP;
    cout << "Enter the price: ";
    cin >> MRP;
    
//    double Tax_Rate;
//    cout << "GST: ";
//    cin >> Tax_Rate;
    
    cout << "Final_Price: " << Cal_Total_Bill(MRP) << endl;
}

void greeting(string name, string prefix = "Mr.", string suffix = ""){
    cout << "Thank You, " << prefix + " " + name + " " + suffix << endl;
}

int main (){
//    double Final_Price = Cal_Total_Bill (1000.00);
//   // double Final_Price2 = Cal_Total_Bill (1000.00, 0.08);
//    
//    cout << "The Final Price in Case 1: " << Final_Price1 << endl;
//    cout << "The Final Price in Case 2: " << Final_Price2 << endl;
Total_Price();
greeting("Peter Parker", "Prof.");
    return 0;
}