#include <iostream>

using namespace std;

int main ()
{
    char letter_grade {};
    
    cout << "Enter the grade you expect: ";
    cin >> letter_grade;
    
    switch (letter_grade){
        case 'a':
        case 'A':
        cout << "you need to get a 90, work hard!" << endl;
        break;
        case 'b':
        case 'B':
        cout << "you need to score b/w 80-89." << endl;
        break;
        case 'c':
        case 'C':
        cout << "you need to score b/w 70-79." << endl;
        break;
        case 'd':
        case 'D':
        {
            char confirm {};
            cout << "Are you sure, You want a D\n" << "Enter Y for Yes & N for No:";
            cin >> confirm;
            
            if (confirm == 'Y' || confirm == 'y')
                cout << "you do realise, you are a disappointment. right?" << endl;
            
            else if (confirm == 'N' || confirm == 'n')
                cout << "then go & study, asshole..." << endl;
            else
                cout << "What the fuck is wrong with you?" << endl;
        }
        break;
        default:
        cout << "Sorry, that's not a valid grade." << endl;
    }
    
   enum direction {
        Left, Up, Right, Down
    };
    
    direction path {Down};
    //cin >> path;
    
    switch (path){
    case Left:
    cout << "You are going in the right direction." << endl;
    break;
    case Up:
    cout << "You are going in the right direction." << endl;
    break;
    default:
    cout << "Wrong direction, Mf!" << endl;
    break;
    }
    
    return 0;
}