#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () 
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {s1};
    string s5 {s1, 0, 3};
    string s6 (10, 'x');
    
    cout << s0 << endl;
    cout << s0.length() << endl;
//initialization 
    cout << "----------------------" << endl;

    cout << "s1 is initialized to " << s1 << endl;
    cout << "s2 is initialized to " << s2 << endl;
    cout << "s3 is initialized to " << s3 << endl;
    cout << "s4 is initialized to " << s4 << endl;
    cout << "s5 is initialized to " << s5 << endl;
    cout << "s6 is initialized to " << s6 << endl;
    
    cout << "----------------------" << endl;
//Compare
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s4 << " > " << s5 << ": " << (s4 > s5) << endl;
    
    cout << "-----------------------" << endl;
//Assignment    
    s1 = "Sick";
    cout << "s1 is now: " << s1 << endl;
    
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;
    
    s2[0] = 'P';
    cout << "s2 change the first letter to p: " << s2 << endl;
    
    cout << "-------------------------" << endl;
//Concatenation
    s3 = "sick";
    s4 = "tired";
    s5 = s3 + s4;
    cout << s5 << endl;

    cout << "------------------------" << endl;
//for loop
    s1 = "Apple";
    for (size_t i (0); i < s1.length(); ++i)
        cout << s1.at(i);
    cout << endl;
        
    for (auto c : s1)
        cout << c;
    cout << endl;
    cout << "-----------------------" << endl;
//Substrings
    s1 = "This is a Test";
    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl << s1.substr(8, 1) << endl;
    cout << s1.substr(10, 4) << endl;
    cout << "-----------------------" << endl;
    
//erase
    cout << s1.erase(0, 10) << endl;
//clear
    s1.clear();
    cout << s1 << endl;
    
//getline
    string s7;
//    cin >> s7;
//    
//    cout << s7 << endl;
//    
    getline(cin, s7);
    cout << s7 << endl;;
    
//limiter
//    string s8;
//    getline(cin, s8, 'e');
//    cout << s8 << endl;

//find    
    string word;
    cout << "enter a word: ";
    cin >> word;
    
    size_t position = s7.find(word);
    if (position != string::npos)
        cout << "Ahaa Found ya " << word << " at " << position << endl;
        
    else
        cout << "Sorry not found!" << endl;
    cout <<  endl;
    
    return 0;
}
