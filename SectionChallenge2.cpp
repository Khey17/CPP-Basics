#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main (){
 
    vector <int> vec {};
    char selection {};
  
    do {  
        cout << "P - " << "Print Number" << endl;
        cout << "A - " << "Add Number" << endl;
        cout << "M - " << "Mean of the List" << endl;
        cout << "S - " << "Smallest Number in the List" << endl;
        cout << "L - " << "Largest Number in the List" << endl;
        cout << "Q - " << "Goodbye!" << endl;
        cout << "Enter your Choice: ";
        cin >> selection;

    if(selection == 'P' || selection == 'p'){
        if (vec.size() == 0)
            cout << "[] - List is empty\n" << endl;
        else {
            cout << "[ ";
            for (auto num : vec)
                cout << num << " ";
            cout << " ]\n";
        }
    }
    else if (selection == 'a' || selection == 'A'){
        int r, s, t;
        cin >> r >> s >> t;
        vec.push_back(r);
        vec.push_back(s);
        vec.push_back(t);
        //vec.push_back(7);
        //vec.push_back(6);
        cout << "[ ";
        for (auto num : vec)
            cout << num << " ";
        cout << " ]\n";
    }
    else if (selection == 'm' || selection == 'M'){
        int Sum (0.0);
        double Mean (0.0);
        for (auto num : vec){
            Sum += num;
               // cout << Mean << endl;
            //Mean /= vec.size();
        }
        Mean = static_cast<double>(Sum)/vec.size();
        cout << Sum << endl;
        
        cout << fixed << setprecision(3);
        cout << Mean << endl;
    }
    else if (selection == 's' || selection == 'S'){
        if (vec.size() == 0)
            cout << "unable to print the smallest number." << endl;
        else{
            int smallest = vec.at(0);

           // for (int i (0); i < vec.size(); i++){
                for (auto num : vec){
                    if (num < smallest)
                    smallest = num;
                }
            //}
            cout << "The smallest no. is: " << smallest << endl;
        }
    }
    else if (selection == 'l' || selection == 'L'){
        if (vec.size() == 0)
            cout << "Unable to print the Largest Number." << endl;
        else{
            int largest = vec.at(0);
            //for (int i (0); i < vec.size(); i++){
                for (auto num : vec){
                    if (num >= largest)
                        largest = num;
                }
            //}
            cout << "The largest no. is: " << largest << endl;
        }
        
    }
    
    }while (selection != 'q' && selection != 'Q');
    
    return 0;
}
