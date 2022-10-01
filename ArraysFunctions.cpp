#include <iostream>
using namespace std;

void print_array (int arr[], size_t size);
void set_array (int arr[], size_t size, int value);

int main () {
    int scores[] {94, 98, 99, 92, 95};
    print_array(scores, 5);
    set_array(scores, 5, 100);
    print_array(scores, 5);
    
    return 0;
}

void print_array (int arr[], size_t size) {
    for (size_t i (0); i < size; ++i)
        cout << arr [i] << " "; 
    cout << endl;
}

void set_array (int arr[], size_t size, int value) {
    for (size_t i (0); i < size; ++i)
        arr[i] = value;
}
