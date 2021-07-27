#include <iostream>
using namespace std;

int main() {
    int num{};
    const int lower {10};
    const int upper {20};
    
    cout<< boolalpha;
    
    cout<<"Enter an integer - the bounds are "<< lower<< " and " << upper <<" : ";
    cin>> num;
    
    bool on_bounds {false};
    on_bounds = (num==lower || num== upper);
    cout<<num<< " is on the bounds is " <<(on_bounds)<<endl;
        
 return 0;
}