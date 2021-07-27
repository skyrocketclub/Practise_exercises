#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s0; //s0 is an object
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');
    
//    cout<<s0<<endl;
//    cout<<s0.length()<<endl;
//        cout<<"s0 is initialized to: "<<s0<<endl;
//        cout<<"s1 is initialized to: "<<s1<<endl;
//        cout<<"s2 is initialized to: "<<s2<<endl;
//        cout<<"s3 is initialized to: "<<s3<<endl;
//        cout<<"s4 is initialized to: "<<s4<<endl;
//        cout<<"s5 is initialized to: "<<s5<<endl;
//        cout<<"s6 is initialized to: "<<s6<<endl;
//        cout<<"\nComparison"<<"\n-------------------------------------------------------------------------"<<endl;
//        cout<<boolalpha;
//        cout<<s1<<" == "<<s5<<" is "<<(s1==s5)<<endl;
//        cout<<s1<<" == "<<s2<<" is "<<(s1==s2)<<endl;
//        cout<<s1<<" != "<<s2<<" is "<<(s1!=s2)<<endl;
//        cout<<s1<<" < "<<s2<<" is "<<(s1<s2)<<endl;
//        cout<<s2<<" > "<<s1<<" is "<<(s2>s1)<<endl;
//        cout<<s4<<" < "<<s5<<" is " << (s4 < s5 )<<endl;
//        cout<<s1<<" == "<<"Apple" <<" is " << (s1 == "Apple")<<endl;
//            cout<<"\nAssignment"<<"\n--------------------------------------------------------"<<endl;
//            
//            s1 = "Watermelon";
//            cout<< "s1 is now "<< s1<<endl;
//            s2 = s1;
//            cout<<"s2 is now: "<< s2 <<endl;
//            
//            s3 = "Frank ";
//            cout<<" s3 is now: "<<s3<<endl;
//            
//            s3 [0] ='C';
//            cout<<"s3 change first letter to 'C': " <<s3 <<endl;
//            s3.at(0)='P';
//            cout<<"s3 change first letter to 'P' : "<<s3<<endl;
//                cout<<"\nConcatenation ---------------------------------"<<endl;
//                s3 = "Watermelon ";
//                s4 ={s3, 5,5};
//                s5 = " is ";
//                s6 = " the ";
//                s7 = " best ";
//                string s8 = s4 + s5 + s6 + s7;
//                cout<<s8<<endl;
//                    s1 = "Apple";
//                    for(size_t i {0}; i<s1.length(); i++){
//                        cout<<s1.at(i);
//                        cout<<endl;
//                    }
//                    cout<<endl;
//                    for(auto word : "Apple"){
//                        cout<<word;
//                        cout<<endl;
//                    }
                    s1= "This is a test";
                    
                    cout<< s1.substr(5,2)<<endl;
                    cout<<"\t"s1.erase(0,2);
                    
                    
    return 0;
}