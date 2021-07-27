#include <iostream>
using namespace std;

int main() {
    int num{};
    const int min {10};
    const int max {100};
    
    cout<<"Enter a number between "<<min <<" and " <<max<< ":";
    cin>>num;
    
    if (num >= min)
    {
        cout<<"\n=================== if statement 1 ==============="<<endl;
        cout<<num<<" is greater than " << min <<endl;
        
    }   
    
    if (num <= max)
    {
        cout<<"\n=================== if statement 2 ==============="<<endl;
        cout<<num<<" is less than " << max <<endl;
        
    }
    
    if (num >= min && num <= max)
    {
         cout<<"\n=================== if statement 3 ==============="<<endl;
        cout<<num<<" is between "<<min <<" and " <<max<<endl;
        
    }
 return 0;
    }
