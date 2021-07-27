#include <iostream>
using  namespace std;

//The return type of the function is a pointer to an integer...
// The size of the array required as well as the value is passed into the function
int *create_array(size_t size, int init_value = 0){
    //A pointer named new storage is defined and initiialised to be pointing nowhere...
    int *new_storage {nullptr};
    //the pointer address is now to the heap at an array of integers wich has been dynamically created...
    new_storage = new int [size];
    
for (size_t i{0}; i< size; i++){
        *(new_storage + i) = init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size){
for (size_t i {0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main() {
    //A pointer called my_array is defined and initialised to be pointing nowhere.................
    int *my_array {nullptr}; 
    //size_t is used for arrays most times
    size_t size;
    int init_value {};
    
    cout<<"\nHow many integers would you like to allocate? ";
    cin>>size;
    cout<<"What value would you like them initialized to? ";
    cin>>init_value;
    //My array is equals to the pointer from this function..... 
    my_array = create_array(size, init_value);
    cout<<"\n-------------------------------------------------"<<endl;
    
    display(my_array, size);
    delete [] my_array;
    
    return 0;
}