#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void greeting(string name, string prefix = "Mr. ", string suffix = "");

void greeting(string name, string prefix, string suffix){
    cout<<"Hello "<<prefix<<" " + name + " " <<suffix<<endl;
}

int main() {
    greeting("Glenn Jones ","Dr", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller");
    return 0;
}