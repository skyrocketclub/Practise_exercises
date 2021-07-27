#include <iostream>

using namespace std;

void doubleten_data (int *int_ptr){
    (*int_ptr) *=20; //The pointer is dereferenced and is multiplied by two....................
}

int main() {
   int value {10};
   int *int_ptr{nullptr};
   
   cout<<"Value: "<<value<<endl;
   doubleten_data (&value); //int_ptr is not used here..
   //the address of value is passed to the function and on arrival, it is dereferenced and utilized.\
   //Its either you pass the address of the variable or you pass the bloody pointer which is also an address...
   cout<<"Value: "<<value<<endl;
   
   
   cout<<"-------------------------------------"<<endl;
   int_ptr = &value;
   doubleten_data (int_ptr);
   cout<<"Value: "<<value<<endl;
    return 0;
}