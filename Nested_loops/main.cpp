#include <iostream>

using namespace std;

int main() {
    // int inner_val {1}, outer_val {1};
     for (int outer_val {1}; outer_val <= 12; outer_val++)
     {
         cout<<outer_val<<" times table"<<endl;
         for ( int inner_val {1}; inner_val <= 12; inner_val++)
         {
             cout<<outer_val<<" x "<<inner_val<<" = ";
             cout<<outer_val*inner_val<<endl;
         }
         cout<<"--------------------------------------------------------"<<endl;
         
     }
    return 0;
}