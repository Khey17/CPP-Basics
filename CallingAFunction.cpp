#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Function Prototypes
//double Calc_Volume_Of_Cylinder (double radius, double height);
//double Calc_Area_Of_Circle (double radius);
//void Area_Of_Circle ();
//void Volume_Of_Cylinder ();//ok

const double pi (3.14);
double Calc_Area_Of_Circle (double radius) {
    return pi*(pow(radius, 2));
}

void Area_Of_Circle (){
    double radius (0.0);
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "The Area of the circle with the radius " << radius << " is " << Calc_Area_Of_Circle(radius) << endl;
}

double Calc_Volume_Of_Cylinder (double radius, double height){
    //return pi*(pow(radius, 2))*height;
    return Calc_Area_Of_Circle (radius)*height;
}

void Volume_Of_Cylinder (){
    double radius (0.0);
    double height (0.0);
    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    
    cout << "The Volume of the cylinder with the radius " << radius << " and height " << height << " is " << Calc_Volume_Of_Cylinder (radius, height) << endl;
}

int main ()
{
    Area_Of_Circle ();
    Volume_Of_Cylinder ();
    return 0;
}

double Calc_Area_Of_Circle (double radius) {
    return pi*(pow(radius, 2));
}

void Area_Of_Circle (){
    double radius (0.0);
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "The Area of the circle with the radius " << radius << " is " << Calc_Area_Of_Circle(radius) << endl;
}

double Calc_Volume_Of_Cylinder (double radius, double height){
    //return pi*(pow(radius, 2))*height;
    return Calc_Area_Of_Circle (radius)*height;
}

void Volume_Of_Cylinder (){
    double radius (0.0);
    double height (0.0);
    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    
    cout << "The Volume of the cylinder with the radius " << radius << " and height " << height << " is " << Calc_Volume_Of_Cylinder (radius, height) << endl;
}