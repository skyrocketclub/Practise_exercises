#include <iostream>
#include <vector>
using namespace std;
/*
 * The whole Idea is simple
 * 1. You want the options to be displayed first of all...
 * 2. Then you define the vector
 * 3. You then open a switch statement and populate it with the appropriate options
 * */
int main() {

            cout<<"WELCOME TO THE VECTORS MANIPULATOR\n";
            char option {};
            vector <int> vec;
           
 do{
            cout<<"P: Print\nA: Add a number\nM: Display the mean of the numbers\nS: Smallest Number\nL: Largest Number\nC: Clear Vector\nQ: Quit"<<endl;
            cout<<"Option: ";
            cin>>option;
            cout<<endl;
           
            
            switch (option){
                case 'P':
                case 'p' :
                {
                    cout<<"[ ";
                     for (int i {0}; i < vec.size(); i++){
                         cout<<vec.at(i)<<" ";
                     }   
                     cout<<" ]"<<endl;
                }
                     break;
                     
                case 'A':
                case 'a':
                {
                    cout<<"What number do you want to add? : ";
                    int vec_add {};
                    cin>>vec_add;
                    vec.push_back(vec_add);
                    cout<<vec_add<<" was added!"<<endl;
                }
                break;
                
                case 'M':
                case 'm':
                {
                         double sum {}, count{};
                        double average{0.00};
                        for(int i {0}; i < vec.size(); i++){
                            sum+= vec.at(i);
                            count++;
                        }
                        //static_cast<double>(sum);
                        average = sum/count;
                        cout<<"The average is: "<<average<<endl;
                }
                 break;
                 
                 case 'S':
                 case 's':
                 {
                     if (vec.size() == 0){
                         cout<<"[ ] -- The list is empty\n";
                     }
                     else{
                    int smallest_vec {} ;
                    smallest_vec = vec.at(0);
                     for(int i {}; i < vec.size(); i++){
                         if (smallest_vec > vec.at(i)) {
                             smallest_vec = vec.at(i);
                         }
                     }
                      cout<<"The smallest element of the Vector is: "<<smallest_vec<<endl; 
                     }
                 }
                 break;
                 
                 case 'L':
                 case 'l':
                 {
                     if (vec.size() == 0){
                         cout<<"[ ] -- The list is empty\n";
                     }
                     else{
                    int largest_vec {};
                     for(int i {0}; i < vec.size(); i++){
                         if (vec.at(i) > largest_vec){
                          largest_vec = vec.at(i);
                         }
                     }
                      cout<<"The largest element of the Vector is: "<<largest_vec<<endl; 
                     }
                     }
                 
                 break;
                 
                 case 'c':
                 case 'C':
                 {
                     vec.clear();
                     cout<<"The vector has been cleared! "<<endl;
                 }
                 break;
                 
                 default: {
                     if (option !='q' && option != 'Q')
                     cout<<"Unkown selection, Please try again"<<endl;
                 }
            }
            }
             while ( option != 'q' &&  option != 'Q');
            cout<<"Thank you and Goodbye"<<endl;
    return 0;
}