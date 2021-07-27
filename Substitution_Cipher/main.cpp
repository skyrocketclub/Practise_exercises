#include <iostream>
#include <string>


using namespace std;

int main() {
        string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
        string key {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};
        string message {};
        string encryption {};
        size_t i {0};
        cout<<"Enter the message: ";
        getline(cin, message);
        cout<<"Encrypting........."<<endl;
        
        for(auto code : message){
            if ( isalpha(code)){
            size_t at = alphabet.find(code);
            cout<<key.at(alphabet.find(code));
            encryption += key.at(alphabet.find(code));
            }
            else{
                cout<<code;
                encryption+=code;
            }
            }
            cout<<endl;
       
            
     cout<<"Decrypting  "<<encryption<<endl;
         for(auto decode : encryption){
            if ( isalpha(decode)){
            key.find(decode);
            cout<<alphabet.at( key.find(decode));
           }
            else{
                cout<<decode;
            }
            }
            cout<<endl;
        
    return 0;
}