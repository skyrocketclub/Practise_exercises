#include <iostream>
using namespace std;

int main() {
    
//    char vowels[] {'a','e','i','o','u'};
//    cout<<endl<<"The first vowel is: "<<vowels[0]<<endl;
//    cout<<"The last vowel is: "<<vowels[4]<<endl;
        float test_array [5] {1,2,3,4,5};
        cout<<"The updated array is: "<<endl;
        cout<<"First score at Index 0 is "<<test_array[0]<<endl;
        cout<<"Fifth score at Index 4 is "<<test_array[4]<<endl;
        
        cout<<"Enter your replacements: "<<endl;
        cin>>test_array[0]>>test_array[4];
        cout<<"First score at Index 0 is "<<test_array[0]<<endl;
        cout<<"Fifth score at Index 4 is "<<test_array[4]<<endl;
        
        cout<<"The address of the array is : "<<test_array<<endl;
    return 0;
}