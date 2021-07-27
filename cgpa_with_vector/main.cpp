#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    int no_of_courses {};
    vector <string> courses;
    string course{};
    vector <int> units;
    int unit {}, score {}, grade_point{};
    vector <int> grades;
    int grade {};
    vector <string> grade_letter;
    float total_score {}, gp{}, total_unit{};
    
    cout<<"Enter the number of courses: ";
    cin>>no_of_courses;
//    int i {0};
//    i = no_of_courses;

    for( int i {0}; i<no_of_courses; i++){
       
        cout<<"Course "<<i+1<<": ";
        cin>>course;
        courses.push_back(course);
        cout<<endl<<"Units: ";
        cin>>unit;
        units.push_back(unit);
        cout<<"Score: ";
         cin>>score;
        
        
        if (score >= 70){
            grades.push_back(5);
            grade_letter.push_back("A"); 
        }
        else if (score >=60){
             grades.push_back(4);
            grade_letter.push_back("B"); 
        }
        else if (score >= 50){
             grades.push_back(3);
            grade_letter.push_back("C"); 
        }
        else{
             grades.push_back(0);
            grade_letter.push_back("F"); 
        }
        cout<<"Grade: "<<grade_letter.at(i)<<endl;
        cout<<endl<<endl;
        grade_point = grades.at(i) * units.at(i);
        total_score+= grade_point;
        total_unit+= unit;
        
    }
    cout<<"The GP for n semesters is: "<<total_score/total_unit<<endl;
    
    
    return 0;
}