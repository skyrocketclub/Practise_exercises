#include <iostream>
#include <string>


using namespace std;

int main() {
    
    string course {};
    int units {0}, unit{0}, grade{0},score{0}, mega_units{0};
   double cgpa {0};
   double totalScore {0}, mega_total {0};
    int j {0};
    
    while(j<2){
cout<<"Welcome to Ugonna's GP Calculator\nHow many courses are you doing?: ";
    int no_of_courses {};
    cin>>no_of_courses;
    int i = no_of_courses;    

        while(i>0){
                cout<<"Enter Course: ";
                cin>>course;
                cout<<"\nUnits: ";
                cin>>unit;
                units+=unit;//each inputed unit is added
                cout<<"\nScore: ";
                cin>>score;
                
                if(score >= 70){
                    grade = 5;
                }
                else if (score >= 60){
                    grade = 4;
                }
                else if(score >= 50){
                    grade = 3;
                }
                score =unit*grade;
                totalScore += score;
                i--;
                
            }
            mega_total += totalScore;
            cout<<mega_total<<endl;
            mega_units += units;
            j++;
    }
    
    
   cgpa = mega_total / mega_units;
   cout<<cgpa<<endl;
//    
    return 0;
}