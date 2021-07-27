#include <iostream>
using namespace std;

int main() {
    char num{};
    do {
    
    cout<<"--------------------------------"<<endl;
    cout<<"1. Do this\n2. Do that\n3.Do Something else\nQ: Quit"<<endl;
    cout<<"Enter your selection: ";
    cin>>num;
   
    if (num =='1'){
        cout<<"You chose 1 -- Doing this"<<endl;
    }
    else if (num =='2'){
        cout<<"You chose 2 -- Doing that"<<endl;
    }
    else if (num=='3') {
        cout<<"You chose 3 -- Doing something else"<<endl;
    }
    else if (num !='q' && num != 'Q'){
        cout<<"Please Input a valid option"<<endl;
    }
     
    } 
    
    while (num !='q' && num != 'Q');
    cout<<"Thanks and Goodbye"<<endl;
    return 0;
}