#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;
    double area;
    cout<<"Please enter the radius: "<<endl;
    cin>>radius;

    area = M_PI * (radius * radius);
    cout<<"The area of a circle with radius "<<radius<<" is "<<area<<endl;
    return 0; 
}