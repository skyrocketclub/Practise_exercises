#include <iostream>

using namespace std;

int main() {
    int scores[] {100, 95, 89};
    int i {};
    //The Name of Array is the address of the first element in that array
    cout<<"Value of scores: "<<scores <<endl;
   
    int *score_ptr {scores};//scores as you recall is the address of the first element in that array called scores...
    cout<<"Value of score_ptr: "<<score_ptr<<endl;
    
    cout<<"\nArray subscript notation-----------------------------"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores [2]<<endl;
    
    return 0;
}