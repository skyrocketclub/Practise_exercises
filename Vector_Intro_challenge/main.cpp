#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vector1 {};
    vector <int> vector2 {};
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"The elements in Vector1 are: "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"The Vector1 has "<<vector1.size()<<" vectors"<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<endl<<"The elements in Vector2 are: "<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"The Vector2 has "<<vector2.size()<<" vectors"<<endl;
    
    vector<vector<int>>vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<endl<<"The elements in Vector2d are: "<<endl;
    cout<<"Vector1: "<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<"Vector2: "<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    
    vector1.at(0)=1000;
    
     cout<<endl<<"The elements in Vector2d now are: "<<endl;
    cout<<"Vector1: "<<endl;
    cout<<vector_2d.at(0).at(0)<<endl;
    cout<<vector_2d.at(0).at(1)<<endl;
    cout<<"Vector2: "<<endl;
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    
    cout<<"The elements in Vector1 are: "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    
    
    
    return 0;
}