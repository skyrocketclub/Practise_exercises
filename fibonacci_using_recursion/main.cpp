#include <iostream>

using namespace std;
/*
 * Steps to solve the fibonacci question with recursion
 *  0 1 1 2 3 5 8 13 21 34
 * 
 * f(0) = 0
 * f(1) = 1
 * f(2) =1
 * f(3)= 2
 * f(4) = 3...
 * */
 
 int fibonacci (int num){
     if (num == 0 || num == 1){
         return num;
     }
     else {
         return fibonacci(num-1) + fibonacci(num-2);
     }
 }
 
int main() {
    int num {}, n{0};
    cout<<"How many terms of the fibonacci do you want to print out?: ";
    cin>>num;
    cout<<endl;
    
    while(n<=num){
    cout<<fibonacci(n)<<"  ";
    n++;
    }
    
    return 0;
}