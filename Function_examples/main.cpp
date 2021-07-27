#include <iostream>
#include <cmath>

using namespace std;
const double pi {3.14159};
//Function prototype

double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_base_circle();
void volume_cylinder ();


int main() {
    //area_base_circle();
   volume_cylinder();
    return 0;
}
double calc_area_circle(double radius){
    return pi*pow(radius,2);
}
double calc_volume_cylinder(double radius, double height){
    return pi*pow(radius,2)*height;
}
void area_base_circle(){
    double radius{};
    cout<<"\nEnter the readius of the circle: ";
    cin>>radius;
    cout<<"The area of the base circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}
void volume_cylinder (){
   double height {};
   double radius {};
    cout<<"Input the height: ";
    cin>>height;
    cout<<endl<<"Input the radius: ";
    cin>>radius;
    cout<<endl;
   cout<<"The volume is : "<< calc_area_circle(radius)*height<<endl;
}
