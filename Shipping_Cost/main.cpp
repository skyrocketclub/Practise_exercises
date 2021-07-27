#include <iostream>
using namespace std;
/*
 * Shipping cost calculator
 * 
 * Ask the user for package dimensions in inches
 * length, width, height- these should be integers
 * 
 * All dimensions must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there,
 is a 10% surcharge
  * 
  * If package volume is greater than 500 cubic inches, there
  * is a 25% sucharge
  * 
  * 1. The first thing is to ask the user to enter the length, width and height.
  * 2. Check if all are less than 10 inches, if not, cast them out to the valley of else
  * 3. If they are less than 10 inches, calculate the volume & output the volume
  * 4. If statement to check if the package volume is greater than 100 cubics or 500 cubics, and output the prices for all these options...
 * */
int main() {
    int length {}, width {}, height {};
    double base_cost { 2.50 };
    double cost {};
    
    cout<<"Enter the length, width and height of the good with space in between: ";
    cin>>length>>width>>height;
    if (length <= 10 && width <= 10 && height <=10)
    {
        int volume {};
        volume = length*width*height;
            if (volume < 100)
                cost = base_cost;
            else if (volume > 100 && volume <= 500)
                cost = (base_cost*0.1)+base_cost;
            else 
                cost = (base_cost*0.25) + base_cost;
                
                cout<<"The volume is: "<< volume<<" cubic inches and the cost is: $"<< cost<<endl;
    }
    else
        cout<<"Sorry, this good is too big for the ship"<<endl;
        
    return 0;
}