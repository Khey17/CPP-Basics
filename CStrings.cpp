#include <iostream>
#include <cstring>    //C style String functions
#include <cctype>     //For Character based functions

using namespace std;

int main ()
{
    char first_name [20];
    char last_name [20];
    char full_name [50];
    char temp [50];
    
    //cout << first_name; //most probably it's gonna display a garbage value
    
//    cout << "Please enter your First Name: ";
//    cin >> first_name;
//    
//    cout << "Please enter your Last Name: ";
//    cin >> last_name;
//    
//    cout << "----------------" << endl;
//    cout << "Hello " << first_name << ", your first name has " << strlen(first_name) << " Characters" << endl;
//    cout << "and your last name " << last_name << " has " << strlen(last_name) << " Characters" << endl;
//    
//    strcpy(full_name, first_name);   //Copy first_name to full_name 
//    strcat(full_name," ");  //Concatenate full_name and a space
//    strcat(full_name, last_name);   //Concatenate last_name
//    
//    cout << "Your Full Name is " << full_name << endl;
//    
//    cout << "----------------" << endl;
    
//    cout << "Enter your full name: ";
//    cin >> full_name;
//    
//    cout << "Your full name is " << full_name << endl;
//    
//    cout << "---------------" << endl;
    
    cout << "Enter your Full Name: ";
    cin.getline(full_name, 50);
    cout << "Your Full Name is " << full_name << endl;
    
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are different." << endl;
        
        cout << "-------------------" << endl;
        
    for (size_t i (1); i <= strlen(full_name); ++i){
        if (isalpha(full_name [i]))
            full_name [i] = toupper(full_name [i]);
    }        
    cout << "Your Full Name is " << full_name << endl;
    
    cout << "---------------------" << endl;
    
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are same." << endl;
        
    else
        cout << temp << " and " << full_name << " are different." << endl;
        
        cout << "---------------------" << endl;
        
        cout << "Result of comparing " << temp << " and " << full_name << " : " << strcmp(temp, full_name) << endl;
        cout << "Result of comparing " << full_name << " and " << temp << " : " << strcmp(full_name, temp) << endl;
        
    return 0;
}
