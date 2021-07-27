#include <iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter the grade that you expect in the exam: ";
    cin>>grade;
    
    switch(grade){
        case 'a':
        case 'A':
            cout<<endl<<"You need 90 and above, study hard!"<<endl;
            break;
            
        case 'b':
        case 'B':
            cout<<"You need 80 - 89 for a B, go study!" <<endl;
            break;
        
        case 'c':
        case 'C':
            cout<<"You need 70 - 79 for an average grade"<<endl;
            break;
            
        case 'd':
        case 'D': 
        cout<<"Hmm, you should strive for a better grade. All you need is 60 - 69"<<endl;
        break;
        
        case'f':
        case 'F':
        {
            char confirm{};
            cout<<"Are you sure (Y/N)? ";
            cin>>confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout<<"OK, I guess you didn't study..."<<endl;
            else if (confirm == 'n' || confirm == 'N')
                cout<<"Good - go study! "<<endl;
            else
                cout<<"Illegal choice"<<endl;
            break;
        }
        break;
        
        default:
        cout<<"Sorry, not a valid grade"<<endl;
    }
    return 0;
}