#include <iostream>
#include <vector>
using namespace std;

void pass_by_ref1 (int &num);
void pass_by_ref2 (string &s);
void pass_by_ref3 (vector <string> &v);
void print_vector (const vector <string> &v); //const

void pass_by_ref1 (int &num){
    num = 100;
}

void pass_by_ref2 (string &s){
    s = "Peaches";
}

void pass_by_ref3 (vector <string> &v){
    v.clear();
}

void print_vector (const vector<string> &v){
    for (auto s: v){
        cout << s << " ";
    }
    cout << endl;
}

int main (){
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_ref1: " << num << endl;
    
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;
    
    cout << "______________________________________________" << endl << endl;
    
    string s = "Uptown Funk";
    string s0 = "One Direction";
    cout << "s before calling the pass_by_ref2: " << s << endl;
    cout << "s0 before calling the pass_by_ref2: " << s0 << endl;
    
    pass_by_ref2 (s);
    cout << "s after calling pass_by_ref2: " << s << endl;
    
    pass_by_ref2 (s0);
    cout << "s after calling pass_by_ref2: " << s0 << endl;
    
    cout << "______________________________________" << endl << endl;
    
    vector <string> v {"Peter Parker", "Bruce Banner", "Reed Richards"};
    cout << "v before calling pass_by_ref3: " << " ";
    print_vector (v);
    
    pass_by_ref3 (v);
    cout << "v after calling pass_by_ref3: " << " ";
    print_vector (v);
    
    v.push_back("Lex Luthor");
    print_vector (v);
}