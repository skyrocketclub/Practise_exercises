#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector <string> &v){
    v.clear();
}

void print_vector (const vector<string> &v){
    for (auto s: v){
        cout<<s<<" ";
    }
    cout<<endl;
}


int main() {
    int num {10};
    int another_num {20};
    
    cout<<"num before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"num after calling pass_by_ref1: "<<num<<endl<<endl;
    
    cout<<"num before calling pass_by_ref1: "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"num after calling pass_by_ref1: "<<another_num<<endl;
    
    string name {"Frank"};
    cout<<"\nname before calling pass_by_ref2: "<<name;
    pass_by_ref2(name);
    cout<<"\nname after calling pass_by_ref2: "<<name<<endl;
    
    vector<string> names {"Larry", "Moe", "Curly"};
    cout<<"\nnames before calling pass_by_ref3: ";
    print_vector(names);
    pass_by_ref3(names);
    cout<<"names after calling pass_by_ref3: ";
    print_vector(names);
    
    cout<<endl;
    return 0;
}