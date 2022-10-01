#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> vector1 {};
    
    int vec_to_add_1 (10);
    int vec_to_add_2 (20);
    
    vector1.push_back(vec_to_add_1);
    vector1.push_back(vec_to_add_2);
    
    cout << vector1.at(0) << "\n" << vector1.at(1) << endl;
    cout << vector1.size() << endl;
    
    vector <int> vector2 {};
    
    int vec_to_add_3 (100);
    int vec_to_add_4 (200);
    
    vector2.push_back(vec_to_add_3);
    vector2.push_back(vec_to_add_4);
    
    cout << vector2.at(0) << "\n" << vector2.at(1) << endl;
    cout << vector2.size() << endl;
    
    vector <vector <int>> vector_2D;

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);
    
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
//    cout << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;
//    cout << vector_2D.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    cout << vector_2D.at(0).at(0) << " " << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << " " << vector_2D.at(1).at(1) << endl;
    
    cout << vector1.at(0) << "\n" << vector1.at(1) << endl;
    return 0;
}