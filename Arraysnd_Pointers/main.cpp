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
    
    cout<<"\nPointer subscript notation-------------------------------"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;
    
    cout<<"\nPointer offset notation----------------------------------"<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr +1)<<endl;
    cout<<*(score_ptr + 2)<<endl;
    
    cout<<"n\Array offset notation---------------------------------"<<endl;
    cout<<*scores<<endl;
    cout<<*(scores + 1)<<endl;
    cout<<*(scores + 2)<<endl;

    int harray [] {20, 3, 45, 6, 9 };
    int *point_harray {harray}; // A pointer u=is defined and it is equals to the address of the first element in the array...
       cout<<harray<<endl; 
       cout<<point_harray<<endl;
    int n {0};
    
    //using the array offset notation
    while(n<=4){
    cout<< *(harray +n)<<" ";
    n++;
    }
    n=0;
    cout<<endl;
    
    //using the pointer offset notation
      while(n<=4){
        cout<< *(point_harray +n)<<" ";
        n++;
    }
    
    //using the array subscript notation
    n=0;
    cout<<endl;
    while(n<=4){
    cout<< harray[n]<<" ";
    n++;
    }
    
    //using the pointer subscript notation
     n=0;
    cout<<endl;
    while(n<=4){
    cout<< point_harray[n]<<" ";
    n++;
    }
    
    cout<<endl;
    return 0;
}