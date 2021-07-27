#include <iostream>

using namespace std;
//A perfect number is a number that has the sum of all its factors equal to the number itself...
int main() {
    int sum {0}, i {1}, m {1};
    cout<<"\t\t\tFUNCTION THAT CHECKS A PERFECT NUMBER "<<endl;
    while ( i<= 100000){
        int n {1};
        while ( n <= i/2){
            if ( i % n == 0){
                sum+=n;
            }
            n++;
        }
        if (sum == i){
            cout<<endl<<i<<": ";
            while ( m <= i/2){
                if (i % m == 0){
                    cout<< m<<"  ";
                }
                m++;
            }
        }
        m = 1;
        sum=0;
        i++;
    }
    return 0;
}