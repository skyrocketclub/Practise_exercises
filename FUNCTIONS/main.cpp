#include <iostream>
#include <string>

using namespace std;

void say_hello (){
    cout<<"Hello ";
}

void say_world (){
    cout<<"World ";
}
int main() {
    for(int i{0}; i<=10; i++){
        cout<<i<<". ";
        say_hello();
        say_world();
        cout<<endl;
    }
    return 0;
}