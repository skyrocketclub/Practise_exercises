#include <iostream>

using namespace std;
/*
 * 3^3 = 3 * 3 * 3 * 1
 * f(0)= 1
 * f(1) = 
 * f(2) = 
 * f(3) =
 * 
 * */
int power ( int num, int index){
    if (index == 0){
        return 1;
    }
    else
        return power( num, index-1) * num;
}

int main() {
    int num {}, index {};
    cout<<"Enter the number and the power: ";
    cin>> num >> index;
    cout<<power(num,index)<<endl; 
    return 0;
}