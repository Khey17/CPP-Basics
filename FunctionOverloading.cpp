#include <iostream>
#include <cstring>
#include <vector>
#include <string>
using namespace std;

void print (int=10);
void print (double);
void print (string);
void print (string, string);
void print (vector <string>);

void print (int num){
    cout << "Printing int: " << num << endl;
}

void print (double num){
    cout << "Printing double: " << num << endl;
}

void print (string s){
    cout << "Printing string: " << s << endl;
}

void print (vector <string> v){
    for (auto c : v){
        cout << c + " ";
    }
    cout << endl;
}

void print (string s1, string s2){
    cout << "Printing 2 strings: " << s1 + " " << s2 << endl;
}

int main (){
    print ();
    print (100);
    print (125.50);
    print ("C-Style String");
    string s {"Superman"};
    print (s);
    print ("C-Style String", s);
    vector <string> v {"Homelander", "Superman", "Omni-Man"};
    print (v);
    
    return 0;
}