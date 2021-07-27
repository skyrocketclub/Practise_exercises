#include <iostream>
#include <vector>
#include <cctype>


using namespace std;
/*
 * STEPS TO ACHIEVE THE VECTOR MANIPULATOR PROGRAMME USING FUNCTIONS...
 * 1. Create a function that displays the menu
 * 2. Create another function that reads the selection from the user and returns it in upper case
 * 3. First define the function prototypes...
 * 
F     void display_menu{
F    char user_pick is called in here... 
 * user_pick function returns a value... which is the option chosen by the user...
 * The user pick option returns the value always in upper case...
 * Equate sth to what the user_pick value returns
 * While that sth which is returned is not equals to q, please hit me some more... (A WHILE LOOP)
 * 
 * Then perhaps a nice idea to run a switch case in this place so that you know the exact function to call between:
 * 
 * --Print
 * -- Add a number
 * -- Display the mean of the numbers
 * -- Smallest number
 * -- Largest number
 * -- Clear Vector
 * 
 * For all these functions above, the vector will not be passed copying, they will rather be referenced directly...
 * secondly, after each of these functions have clearly stated their results, they immediately call the display_menu 
 * function afresh...
 * 
 * }
 * 
 * 4. In the main function, the display_menu function will be called
 * the vector that is named: vec is also defined in the main function
 * 5. 
 * 
 * */
 //FUNCTION PROTOTYPES...
 void display_menu ( vector <int> &vec);
 char user_pick ();
 void print_vec (vector <int> &vec);
 void add_vec (vector <int> &vec);
 void average_vec (vector <int> &vec);
 void smallest_vec (vector <int> &vec);
 void largest_vec (vector <int> &vec);
 void clear_vec (vector <int> &vec);
 void default_vec(vector <int> &vec);
 char convert (char &option);
 int quit();
 int quitted {1};
 
 
int main() {
    cout<<"\t\t\tWELCOME TO THE VECTORS MANIPULATOR\n";
    vector <int> vec ;
  
    while (quitted == 1){
    display_menu(vec);
    }
    return 0;
}

void display_menu (vector <int>&vec){
      cout<<"\nP: Print\nA: Add a number\nM: Display the mean of the numbers\nS: Smallest Number\nL: Largest Number\nC: Clear Vector\nQ: Quit"<<endl;
      char option {};
    cout<<"Option: "; 
    cin>>option;
    cout<<endl;
   
  
          switch (option){
              case 'P':
              {
                  print_vec(vec);
              }
              break;
              
              case 'A':
              {
                  add_vec(vec);
              }
              break;
              
              case 'M':
              {
                  average_vec(vec);
              }
              break;
              
              case 'S':
              {
                  smallest_vec(vec);
              }
              break;
              
              case 'L':
              {
                  largest_vec(vec);
              }
              break;
              
              case 'C':
              {
                  clear_vec(vec);
              }
              break;
              
              case 'Q':
              quit();
              break;
              
              default:
                
                 default_vec(vec);
              break;
          }
}

char user_pick(){
    char option {};
    cout<<"Option: "; 
    cin>>option;
    cout<<endl;
    option = convert(option);
    //convert the option to Upper case
    return option;
}

void print_vec (vector <int> &vec){
                    cout<<"[ ";
                     for (int i {0}; i < vec.size(); i++){
                         cout<<vec.at(i)<<" ";
                     }   
                     cout<<" ]"<<endl;
                     display_menu (vec);
}

void add_vec (vector <int> &vec){
                    cout<<"What number do you want to add? : ";
                    int vec_add {};
                    cin>>vec_add;
                    vec.push_back(vec_add);
                    cout<<vec_add<<" was added!"<<endl;
                    display_menu(vec);
}

void average_vec (vector <int> &vec){
                        double sum {}, count{};
                        double average{0.00};
                        for(int i {0}; i < vec.size(); i++){
                            sum+= vec.at(i);
                            count++;
                        }
                        //static_cast<double>(sum);
                        average = sum/count;
                        cout<<"The average is: "<<average<<endl;
                        display_menu(vec);
        
}

void smallest_vec (vector <int> &vec){
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
                     display_menu(vec);
}

void largest_vec (vector <int> &vec){
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
                     display_menu(vec);
}

void clear_vec(vector <int> &vec){
                    vec.clear();
                     cout<<"The vector has been cleared! "<<endl;
                     display_menu(vec);
}

void default_vec(vector <int> &vec){
    cout<<"Unknown selection, Please try again"<<endl;
    
    
}

char convert (char &option){
   option = toupper(option);
   return option;
}

int quit (){
    cout<<"Thank you and goodbye"<<endl;
    quitted=0;
}