#include <iostream>
#include <vector>

using namespace std;

//Defining the fibonacci function prototype...
void fibo ( int x);

int main() {
    int length {0};
    cout<<"Enter your desired length of the fibonacci series: ";
    cin>>length;
    fibo(length);
    return 0;
}

void fibo (int x){
    int n {0}, newterm{0}, fibonacci {0};
    vector<int> fibo;
    while (n < x){
        if(n<=1){
            fibo.push_back(n);
        }
        else{
            newterm = fibo.at(n-1) + fibo.at(n-2);
            fibo.push_back(newterm);
        }
        cout<<fibo.at(n)<<" ";
         fibonacci += fibo.at(n);
        n++;
        }
        cout<<"\nThe Fibonacci sum of series: "<<fibonacci<<endl;
    }
