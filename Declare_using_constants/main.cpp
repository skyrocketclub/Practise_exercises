#include <iostream>
using namespace std;

int main() {
            const double price_per_room {32.50};
            double  tax {0};
            int no_of_rooms {0};
            float estimate {0};
         
            
            cout<<"How many rooms will you be booking? "<<endl;
            cout<<"Number of rooms: ";
            cin>>no_of_rooms;
            cout<<"Price per room: "<<price_per_room<<endl;
            float cost = no_of_rooms*price_per_room;
            cout<<"Cost: "<<cost<<endl;
            tax=0.06*cost;
            cout<<"Tax: "<<tax;
            estimate= cost+tax;
            cout<<endl<<"Total estimate: "<<estimate<<endl;
            cout<<"This estimate is valid for 30 days"<<endl;
            
    return 0;
}