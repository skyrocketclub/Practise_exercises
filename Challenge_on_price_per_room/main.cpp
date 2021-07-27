#include <iostream>
using namespace std;
int main() {
   cout<<"Estimate for carpet cleaning service"<<endl;
   cout<<"Number of small rooms: ";
   int no_smallroom {0};
   cin>>no_smallroom;
   
   cout<<endl<<"Number of large rooms: ";
    int no_largerooms {0};
    cin>>no_largerooms;
     
     cout<<"Price per small room: ";
     const float price_smallroom {25.0};
     const float  price_largeroom {35};
     cout<< price_smallroom<<endl;
     cout<<"Price per large room: "<<price_largeroom<<endl;
     
     float cost {0};
     cost = (no_smallroom*price_smallroom)+(no_largerooms*price_largeroom);
     cout<<"Cost: "<<cost<<endl;
     
     float tax {0};
     tax= 0.06 *cost;
     cout<<"Tax: "<<tax;
     
     cout<<endl<<"============================"<<endl;
     float estimate {0};
     estimate = cost + tax;
     cout<<"Total estimate: "<<estimate<<endl;
     cout<<"This estimate is valid for 30 days."<<endl;
    return 0;
}