#include <iostream>

using namespace std;
int main() {
//    int num {};
//    cout<<"Enter a positive integer - start the countup: ";
//    cin>>num;
//    int i {0};
//    
//    while (i <= num){
//        cout<<i<<endl;
//        i++;
//    }
//    cout<<"Blastoff!"<<endl;
//    int number {};
//    
//    cout<<"Enter an integer less than 100: ";
//    cin >> number;
//    
//    while (number>= 100){
//        cout<<"Enter an integer less than 100: ";
//        cin>>number;
//    }
//    cout<<endl<<"Thanks"<<endl;
    bool done {false};
    int number {0};
    
    while (!done){
        cout<<"Enter an integer between 1 and 5: ";
        cin>> number;
        if (number <=1 || number >=5)
                cout<<"Out of range, try again"<<endl;
        else {
            cout<<"Thanks! "<<endl;
            done = true;
        }
    }
    return 0;
}