#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double Cal_Cost (double base_cost, double shipping_charges) {
    const double tax_rate (0.06);
    base_cost += (base_cost * tax_rate) + shipping_charges;
    
    return base_cost;
}

int main(){
    double Tot_Cost = Cal_Cost (99.50, 19.53);
    cout << fixed << setprecision (2);
    cout << "The final Price of the product is " << Tot_Cost << endl;
    
    return 0;
}
