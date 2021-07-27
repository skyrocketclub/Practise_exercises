#include <iostream>

using namespace std;

int multiply (int n, int m){
        if (n==1){
            return m;
        }
        else if(n==m){
            return m*m;
        }
        else {
                    return m + multiply(n-1,m);
        }
    }
  

int main() {
    int n,m;
    int result;
    cout<<"Welcome to the multiplication table";
    cout<<"\nEnter the required table: "; 
    cin>>m;
    cout<<"\nEnter the Starting point: ";
    cin>>n;
    while(n<=12){
        cout<<n<<" x "<<m<<" = ";
    result = multiply(n,m);
    cout<<result<<endl;
    n+=1;
    }
   
    return 0;
}