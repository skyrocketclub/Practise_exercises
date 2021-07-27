#include <iostream>
#include <vector>
using namespace std;

int main() {
//    vector <char> vowels {'a','e','i','o','u'};
//   cout<<vowels[0]<<endl;
//   cout<< vowels[4]<<endl;
    vector <int> test_scores {100, 98,89};
    cout<<endl<<"Test scores using array syntax"<<endl;
    cout<<test_scores.at(0)<<endl; //using vector syntax
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<endl<<"There are "<<test_scores.size()<<" scores in the vector"<<endl;
  
    cout<<endl<<endl<<"Enter Three test scores: ";
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);
    
    cout<<"updated test scores: "<<endl;
    cout<<test_scores.at(0)<<endl; //using vector syntax
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    
    cout<<"Enter score to add: "<<endl;
    int score_to_add {0};
    cin>> score_to_add;
    test_scores.push_back(score_to_add);
    
    cout<<"Enter one  more score to add: "<<endl;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    
    cout<<endl<<"The scores are now: ";
    cout<<endl<<test_scores.at(0)<<endl; //using vector syntax
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;
    cout<<"There are now "<<test_scores.size()<<" scores in this vector"<<endl;

    vector < vector <int>> movie_ratings {
        {2,3,3,1},
        {1,2,2,4},
        {1,0,3,4}
    };
    
    cout<<" Here are the movie ratings for reviewer #1 using vector syntax: "<<endl;
    cout<< movie_ratings.at(0).at(0)<<endl;
    cout<< movie_ratings.at(0).at(1)<<endl;
    cout<< movie_ratings.at(0).at(2)<<endl;
    cout<< movie_ratings.at(0).at(3)<<endl;
    
    cout<<" Here are the movie ratings for reviewer #1 using array syntax: "<<endl;
    cout<< movie_ratings[0][0]<<endl;
    cout<< movie_ratings[0][1]<<endl;
    cout<< movie_ratings[0][2]<<endl;
    cout<< movie_ratings[0][3]<<endl;
    
    return 0;
}