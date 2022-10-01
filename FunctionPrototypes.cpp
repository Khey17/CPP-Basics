#include <iostream>
#include <cmath>
using namespace std;

//Convert Temperatue (F) to Celsius (C) & Kelvin (K)

double FC (double temperature){
    double temp = temperature - 32.0;
return round((temp)*static_cast<double> (5)/9);
    //that was a typing mistake i didn
}
double FK (double temperature) {
    double temp = temperature - 32.0;//once run
    return round(((temp)*static_cast<double> (5)/9) + 273);
}

void Temperature_Conversion (){
    double temperature;//wait im comparing
    cout << "Enter the Temperature (F): ";
    cin >> temperature;
    
//    double C = FC (temperature);//yo this two lines weren't there in the previous ones what is their significance
//    double K = FK (temperature);
    cout << temperature << " Fahrenheit degrees is equivalent to " << FC (temperature) << " Celsius degrees and " << FK (temperature) << " Kelvin" << endl;
}

int main (){
    Temperature_Conversion();
//    double f = 5/9;
//    cout << f << endl;
    return 0;
}


