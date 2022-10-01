#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

void pass_by_value_1 (int num);
void pass_by_value_2 (string s);
void pass_by_value_3 (vector <string> v);
void print_vector (vector <string> v);

void pass_by_value_1 (int num){
    num = 1000;
}

void pass_by_value_2 (string s){
    s = "Changed";
}

void pass_by_value_3 (vector <string> v) {
    v.clear(); //delete all vector elements
}

void print_vector (vector <string> v){
    for (auto s : v)
        cout << s << endl;
}

int main ()
{
    int num (10);
    int another_num (20);
    
    cout << "num before calling pass_by_value_1 " << num << endl;
    pass_by_value_1 (num);
    cout << "num After calling pass_by_value_1 " << num << endl;
    
    cout << "------------------------------------------" << endl;
    
    cout << "num before calling pass_by_value_1 " << another_num << endl;
    pass_by_value_1 (num);
    cout << "num before calling pass_by_value_1 " << another_num << endl;
    
    cout << "------------------------------------------" << endl;
    
    string name {"Khey"};
    
    cout << "name before calling pass_by_value_2 " << name << endl;
    pass_by_value_2 (name);
    cout << "name after calling pass_by_value_2 " << name << endl;
    
    cout << "------------------------------------------" << endl;
    
    vector <string> names {"Peter", "Bruce", "Miles"};
    cout << "names before calling pass_by_value_3: \n";
    print_vector (names);
    pass_by_value_3 (names);
    cout << "names after calling pass_by_value_3: \n";
    print_vector (names);
    
    return 0;
}