#include <iostream>
using namespace std;

int main() {
    int counter {10};
    int result {0};
    
//   cout<<"Counter: "<<counter <<endl;
//   
//   counter = counter + 1;
//   cout<<"Counter: " <<counter<<endl;
//   
//   counter++; //Incrementing it by 1
//   cout<<"Counter: "<<counter<<endl;
//   
//   ++counter;
//   cout<<"Counter: "<<counter<<endl;

//    counter =10;
//    result = 0;
//
//    cout<<"Counter: "<<counter<<endl;
//
//    result=++counter; //counter will be increased before use (i.e result = counter +1)
//     cout<<"Counter: "<<counter<<endl;
//     cout<<"Result: "<<result<<endl;

//counter =10;
//result = 0;
//cout<<"Counter: "<<counter<<endl;
//
//result = counter++;//increase counter after it is used...
//cout<<"Counter: "<<counter<<endl;
//cout<<"Result: "<<result<<endl; 
 
 counter = 10;
 result = 0;
 cout<<"Counter: "<<counter<<endl;
 result=counter++ +10;//(result = 10 +1 + 11)
 cout<<"Counter: "<<counter<<endl;
 cout<<"Result: "<<result<<endl;
   return 0;
}