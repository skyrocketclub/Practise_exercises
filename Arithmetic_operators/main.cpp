#include <iostream>

using namespace std;
 
int main() {
    cout<<"Welcome to the EUR to USD converter"<<endl;
    cout<<"Enter the value in EUR: ";
    double euros {0.0};
    double dollars {0.0};
    double usd_per_eur {1.19};
    cin>>euros;
    dollars = usd_per_eur * euros;
    cout<<euros <<" Euros = "<< "$ "<<dollars<<endl;
    return 0;
}