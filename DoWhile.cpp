#include <iostream>
#include <vector>
using namespace std;

int main (){
    char selection;
    do {
        cout << "----------------" << endl;;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if (selection == '1' )
            cout << "You Chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You Chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You Chose 3 - Do somehting else" << endl;
        else if (selection == 'q' || selection == 'Q')
            cout << "Goodbye Fucker!" << endl;
        else 
            cout << "What the fuck did you type asshole?";
    } while (selection != 'Q' && selection != 'q');

    return 0;
}
