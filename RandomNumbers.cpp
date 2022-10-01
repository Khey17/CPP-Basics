#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int random_number (0);
    size_t count (10);   //no. of random numbers to generate
    int min (1);  //lower bound inclusive
    int max (6);  //upper bound inclusive
    
    //seed the random number generator
    //if you don't seed the generator you will get the same sequence of random numbers on every run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for (size_t i(1); i <= count; ++i){
        random_number = rand() % max + min;   //generate a random number [min, max]
        cout << random_number << endl;
        
    }
    
    return 0;
}
