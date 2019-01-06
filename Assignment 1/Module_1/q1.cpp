#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    float diameter, area, circumference, r;
    cout<<"Enter radius of the circle: ";
    cin>>r;
    diameter = 2*r;
    area = 2*3.14*pow(r,2);
    circumference = 2*3.14*r;
    cout<<"Diameter: "<<diameter<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<circumference<<endl;
    return 0;
}

