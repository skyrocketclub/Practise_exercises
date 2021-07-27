#include <iostream>

using namespace std;
/*
 * 1. create a function that prints out the whole factors of any number you input
 * 2. Create a function that checks if the number is prime
 * 3. Create a function that shoots out he prime factors of any number inputed...
 * */
 void factors (int num);
 bool isprime (int n);
 void factordisplay (int num);
     

 
int main() {
    cout<<"\t\t\tWELCOME TO  THE PRIME-FACTORS CALCULATOR"<<endl;
    cout<<"Input number: ";
    int num {};
    cin>>num;
    factors(num);
    return 0;
}

void factors (int num){
    int n {1};
    bool primenumber {};
    factordisplay(num);
    cout<<"\nPRIME FACTORS: ";
    while (n <= num){
        if(num % n == 0){
            primenumber = isprime(n);
                if (primenumber == true){
                cout<<n<<"  ";
                }
            }
            n++;
        }
    }
void factordisplay (int num){
    cout<<"FACTORS: ";
     int n {1};
    while (n <= num){
        if(num % n == 0){
                cout<<n<<"  ";
            }
            n++;
        }
}

bool isprime (int n){
     bool prime {false};
     int m {1}, mod {0};
     if (n == 1){
         prime = true;
     }
    
     else{
         while (m <= n){
             if (n % m == 0){
                 mod++;
             }
             else{
             }
             m++;
         }
     }
      if (mod >2){
             prime = false;
         }
         else {
             prime = true;
         }
       return prime;
}
     
     
 