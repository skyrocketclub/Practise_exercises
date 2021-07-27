#include <iostream>
#include <string>
#include <vector>

using namespace std;
void display (int *array, int ender){
    while *array != ender){
        cout<<*array<<" ";
        array++;
    }
        cout<<endl;
}

 void display (const vector<string> *const v){
     for(auto str: *v)
         cout<<str<<" ";
    cout<<endl;
   // (*v).at(0) = "Funny";
    
 }

int main() {
//    cout<<"---------------------------------------------"<<endl;
//    vector<string> stooges {"larry" , "Moe", "Curly"};
//    display(&stooges);

        cout<<"\n----------------------------------------"<<endl;
        int scores [] {100, 98, 97, 79 ,49, -1};
        display (scores, -1);
    return 0;
}