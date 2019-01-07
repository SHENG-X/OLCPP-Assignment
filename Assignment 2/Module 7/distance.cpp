#include <iostream>
using namespace std;
class Distance
{
      bool isTrue;
      public:
        int distance;
        void getdata();
        Distance operator+(const Distance &);
        Distance operator-(const Distance &);
        bool operator==(const Distance &)const;
        bool operator<(const Distance &)const;
        bool operator>(const Distance &)const;
        void display();
};

void Distance::getdata()
{
      int _distance;
      cout<<"Enter your integer distance: ";
      cin>>_distance;
      distance  = _distance;
}


Distance Distance::operator + (const Distance &d){
      Distance tempDistance;
      tempDistance.distance = distance + d.distance;
      return tempDistance;
}
Distance Distance::operator - (const Distance &d)
{
      Distance tempDistance;
      tempDistance.distance = distance - d.distance;
      return tempDistance;
}
Distance operator*( int data,const Distance& d )
{
      Distance tempDistance;
      tempDistance.distance=data*d.distance;
      return tempDistance;
}

bool Distance::operator==(const Distance &d)const 
{
      return (distance == d.distance ? true : false);
}
bool Distance::operator<(const Distance &d)const
{
      return (distance<d.distance ? true : false);
}
bool Distance::operator>(const Distance &d)const
{
      return (distance > d.distance ? true : false);
}

void Distance::display(){
      cout<<"The distance is: "<<distance<<endl;
}