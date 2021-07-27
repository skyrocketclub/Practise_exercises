#include <iostream>

using namespace std;
int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int; //Storage allocated on the Heap and not in the stack...
    cout<<int_ptr<<endl;
    delete int_ptr; //The dynamic memory is deleted immediately after it is used...
    
    size_t size {0};
    double *temp_ptr {nullptr}; //A new pointer is defined and initialised to null
    cout<<"temp_ptr = "<<temp_ptr<<endl;
    cout<<"How many temps? ";
    cin>>size;
    
    //An array of size double is being used dynamically here... 
    //A pointer pointing to an array of double located in the Heap and not the stock.
    //The temp_ptr is now equals to the value of the first element in the dynamically created array
    temp_ptr = new double [size]; 
    cout<<temp_ptr<<endl; 
    //When an array has been dynamically created and has been used. It should then be deleted...
    delete [] temp_ptr;
    
    return 0;
}