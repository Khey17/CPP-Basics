#include <iostream>
using namespace std;

int main (){
    int count (1);
    int size (0);
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; ++i){
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; ++i){
        for (int j = i + 1; j < size; ++j){
            if (arr[i] == arr[j])
            cout << arr[j] << " ";
        }
    }
    
    for (int i = 0; i < size; ++i){
        for (int j = i + 1; j < size; ++j){
            if (arr[i] == arr[j])
            count++;
        }
    }
    
    for (int i = 1; i < count; ++i){
        cout << "is/are repeating for " << count << " times." << endl;
    }
    
    return 0;
}