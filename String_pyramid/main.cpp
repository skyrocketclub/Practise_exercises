#include <iostream>
#include <string>

using namespace std;
/*
 * */
int main() {
    string word {};
//    size_t m {0};
//    size_t j {};
    
   
    cout<<"Welcome to the string pyramid generator\nEnter the string (W/O Space): ";
    getline(cin,word);
            for(size_t i {0}; i<word.size(); i++){
             for(int j {0}; j<=word.size() -(i+1); j++){
                 cout<<" ";
             }   
             for(size_t m {0}; m<=i; m++){
                 cout<<word.at(m);
             }
             if(i>0){
                 for(size_t n {i-1}; n>0; n--){
                     cout<<word.at(n);
                 }
             }
             if(i>0)
                 cout<<word.at(0);
                 cout<<endl;
            }
    return 0;
}