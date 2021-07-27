#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print (int);
        void print (double);
        void print (string);
//        void print (string, string);
//        void print(vector<string>);
        
        void print (int num){
            cout<<"Printing int: "<<num<<endl;
        }
        
        void print (double num){
            cout<<"Printing double: "<<num<<endl;
        }
        
        void print (string name){
            cout<<"Printing string  : "<<name<<endl;
        }
        
        void print(vector <string> v){
            cout<<"Printing vector of strings: ";
            for(auto s : v)
                cout<< s + " ";
                cout<<endl;
        }
int main() {
//    string "ugochukwu";    
    print("ugochukwu");
    print (100);
    print (125.45);
    string names {"Ebube"};
    print (names);
    
    vector <string> named {"larry", "Ebube", "Idowu", "Sodiq"};
    print(named);
    
    return 0;
}