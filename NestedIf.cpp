#include <iostream>

using namespace std;

int main ()
{
    int score (0);
    cout << "Enter a score: ";
    cin >> score;
    char grade {};
    
    if (score >= 0 && score <= 100){
        if (score > 90)
            grade = 'A';
        else if (score > 80)
            grade = 'B';
        else if (score > 70)
            grade = 'C';
        else if (score > 60)
            grade = 'D';
        else if (score > 50)
            grade = 'E';
        else
            grade = 'F';
        cout << grade << endl;
        
        if (grade == 'F')
            cout << "You dissapointment piece of shit" << endl;
        else
            cout << "Congrats, You Passed" << endl;
    }else
        cout << "Sorry, " << score << " is not in range." << endl;
        
    return 0;
}
