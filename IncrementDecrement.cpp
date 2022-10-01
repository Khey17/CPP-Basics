#include <iostream>

using namespace std;

int main ()
{
    int counter (10);
    int result (0);
    
    //Example 1
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;
    
    ++counter ;
    cout << "Counter: " << counter << endl;
    
    cout << "----------------------" << endl;
    
    //Example - Pre-increment
    counter = 10;
    cout << "Counter: " << counter << endl;
    
    result = ++counter; //Before initializing result, counter = counter + 1 
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "----------------------" << endl;
    
    //Example 3 - Post-increment
    counter = 10;
    cout << "Counter: " << counter << endl;
    
    result = counter++; //After initializing result, counter = counter + 1
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "----------------------" << endl;
    
    //Example 4
    counter = 10;
    cout << "Counter: " << counter << endl;
    
    result = ++counter + 10; //First counter = counter + 1, then result = counter + 10
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "----------------------" << endl;
    
    //Example 5
    counter = 10;
    cout << "Counter: " << counter << endl;
   
    result = counter++ + 10; // First result = counter + 10, then counter = counter + 1
    cout << "Counter: " << counter << endl;
    cout << "result: " << result << endl; 
    
    return 0;
}
