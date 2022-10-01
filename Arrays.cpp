#include "iostream"
 
using namespace std;

int main ()
{
    char vowels[5] {'a', 'e', 'i', 'o', 'u'};
  //  cout << "\nThe First vowel: " << vowels[0] << endl;
  //  cout << "The Last vowel: " << vowels[4] << endl;  
    
    cout << "The vowel is: " << vowels[6] << endl;
    
    int num[5] {};
    
    cout << num[1] << endl;
    cout << num[4] << endl;
    
    cout << "\nNotice what the value of the array name is: " << num << endl;
    
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;
    
    cout << arr[0] << endl;
    cout << arr[9] << endl;
    cout << arr[7] << endl;
    
    return 0;
}
