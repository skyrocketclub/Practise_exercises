#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
    int score {100};
    int *score_ptr {&score}; //A score pointer is defined and it is pointing at the address of score
    //The value of score is printed since the pointer is being dereferenced...
    cout<< *score_ptr<<endl; 
    *score_ptr = 200;
    
    cout<< *score_ptr <<endl;
    cout<<score<<endl;
    
    cout<<"\n======================================="<<endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    
    cout<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr <<endl;
    
    string name{"Frank"};
    string surname{"Obi"};
    string *string_ptr {&name};
    string *surname_ptr {&surname};
    //Dereferencing is taking place here
    cout<<*string_ptr<<endl;
    *string_ptr = *surname_ptr; // The name is now Obi...
    cout<<endl<<name;
    
    cout<<"\n======================================="<<endl;
    vector <string> stooges {"Larry ", "Moe", "Curly"};
    vector <string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    //Dereferencing happens here where you use the pointer to output the stuff the pointer is pointing to...
    cout<<"First stooge: "<<(*vector_ptr).at(0)<<endl;
    
    cout<<"Stooges: ";
    //range-based for loop
    for (auto stooges: *vector_ptr){
        cout<<stooges<<" ";
    }
    cout<<endl;
    
    cout<<endl;
    return 0;
}