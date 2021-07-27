#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    
//    double num {};
//    
//    cout<<"Enter a number (double): ";
//    cin>>num;
//    
//    cout<<"The Sqrt of "<<num<< " is: "<<sqrt(num)<<endl;
//    cout<<"The Cubed root of "<<num<< " is: "<<cbrt(num)<<endl;
//    cout<<"The Sine of "<<num<< " is: "<<sin(num)<<endl;
//    cout<<"The Cosine of "<<num<< " is: "<<cos(num)<<endl;
//    cout<<"The floor of "<<num<< " is: "<<floor(num)<<endl;
//    cout<<"The ceil of "<<num<< " is: "<<ceil(num)<<endl;
//    cout<<"The round of "<<num<< " is: "<<round(num)<<endl;
//    
//    cout<<"Enter a power to raise "<<num<<" to: ";
//    double power {};
//    cin>>power;
//    cout<<endl<<num<< " raised to the "<<power<<" is: "<<pow(num, power)<<endl;
    
    int random_numbers {};
    size_t count {10};
    int min {1};
    int max {6};
    
    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));//seeding the random numbers
    //nullptr is 0
    for(size_t i {1}; i <= count; i++){
        random_numbers = rand() % max + min ;
        cout<< random_numbers<<endl;
    }
    cout<<endl;
    
    return 0;
}