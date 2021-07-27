#include <iostream>
using namespace std;

/*
 * The code will run thus
 * I will ask the user to input the amount in Naira
 * Then I will pass the change in terms of N 1000, N500, N 200, N 100 , N50, N 20, N10 , N5
 * 
 * When the user enters the amount
 * I first divide by 1000, then I output the answer, I pass the balance to 500 who then divides and passes it down to 200 and so on
 * */
int main() {
    int change {};
    int used {0};
    
    cout<<"Enter the sum: ";
    cin>>change;
    
    int N1000 = ( change-used) /1000;
    cout<<" N1000: "<<N1000<<endl; 
    used +=1000*N1000;
    
    int N500 = (change - used)/500;
    cout<<" N500: "<<N500<<endl;
    used+=500*N500;
    
    int N200= (change - used)/200;
    cout<<" N200: "<< N200<<endl;
    used+= 200*N200;
    
    int N100= (change - used)/100;
    cout<<" N100: "<< N100<<endl;
    used+= 100*N100;
    
    int N50= (change - used)/50;
    cout<<" N50: "<< N50<<endl;
    used+= 50*N50;
    
    int N20= (change - used)/20;
    cout<<" N20: "<< N20<<endl;
    used+= 20*N20;
    
    int N10= (change - used)/10;
    cout<<" N10: "<< N10<<endl;
    used+= 10*N10;
    
    int N5= (change - used)/5;
    cout<<" N5: "<< N5<<endl;
    used+= 5*N5;
    
    
    return 0;
}