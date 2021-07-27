#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Pointer has a specials medicine on arrivale to any function
//That Medicine is dereferencing
void swap(int *a, int *b){ // you will pass address of the variables here because the function dereferences them...
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x {100}, y{200};
    cout<<"\nx: "<<x <<endl;
    cout<<"y: "<<y<<endl;
    int *x_ptr{&x}, *y_ptr{&y};
    swap(x_ptr,y_ptr);
    
    cout<<"\nx: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<endl;
    
    return 0;
}