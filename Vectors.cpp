#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  //  int test_scores;
    vector <int> test_scores {100, 95, 92, 97, 99};

    cout << test_scores [0] << endl;
    cout << test_scores [1] << endl;
    cout << test_scores [2] << endl;
    cout << test_scores [3] << endl;
    cout << test_scores [4] << endl;
    
   int score_to_add1 {0};
   int score_to_add2 {0};
      cin >> score_to_add1 >> score_to_add2;
   test_scores.push_back(score_to_add1);
   test_scores.push_back(score_to_add2);

    
    cout << test_scores [4] << endl;
    cout << test_scores.size() << endl;
    /*cout << test_scores[5] << endl;*/
    cout << test_scores.at(6) << endl;
    
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 2, 4},
        {1, 3, 4, 5}
    };
    cout << movie_ratings [0][0] << endl;
return 0; 
}