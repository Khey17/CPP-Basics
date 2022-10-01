#include <iostream>
#include <string>
using namespace std;

string guest_list[] = {"Peter  Parker", "Bruce Banner", "Reed Richards"};
size_t guest_list_size = 3;

void print_guest_list (string, size_t);
 
void print_guest_list ()
{
    for (auto name : guest_list){
        cout << name << endl;
    }
    cout << "Number of guests: " << guest_list_size << endl;
}
 
int main()
{
    print_guest_list();
 
    return 0;
}

