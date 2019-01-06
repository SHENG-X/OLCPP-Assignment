#include<iostream>
using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl
float circleArea(float r);
float triangleArea(float height, float base);
float rectangleArea(float length, float breadth);
float squareArea(float length);
float rhombusArea(float diagonalP, float diagonalQ);
int main()
{
      //clear the screen.
      //declare variable type float and char
      float a,b,area;
      char ch;
      while (ch!='x')
      {
            //Input the choice.
            cout <<endl<<endl;
            cout<<"Enter c for circle"<<endl;
            cout<<"Enter s for square"<<endl;
            cout<<"Enter r for rectangle"<<endl;
            cout<<"Enter t for triangle"<<endl;
            cout << "Enter h for rhombusArea"<<endl;
            cout << "Enter x to exit" << endl;
            cin>>ch;
            //conditional switch statement.
            switch(ch){
                  case 'c':
                        cout << "Enter radius" << endl;
                        cin>>a;
                        area=circleArea(a);
                        break;
                  case 's':
                        cout << "Enter the side" << endl;
                        cin >> a;
                        area=squareArea(a);
                        break;
                  case 'r':
                        cout << "Enter the length" << endl;
                        cin >> a;
                        cout << "Enter the breadth" << endl;
                        cin >> b;
                        area=rectangleArea(a,b);
                        break;
                  case 't':
                        cout << "Enter the height" << endl;
                        cin >> a;
                        cout << "Enter the base" << endl;
                        cin >> b;
                        area=triangleArea(a, b);
                        break;
                  case 'h':
                        cout<<"Enter diagonal P"<<endl;
                        cin>>a;
                        cout<<"Enter diagonal Q"<<endl;
                        cin>>b;
                        area=rhombusArea(a,b); 
                        break;
                  case 'x':
                        cout<<"Quit"<<endl;
                        break;      
                  default:
                        cout << "Syntax Error"<<endl;
                        continue;
            }
            cout << "Area is " << area;
      }
system("pause");

}
//@ convert the program using a switch statement
//@ add one more option to calculate the area of rhombus

float circleArea(float r)
{
      return 3.14*r*r;
}

float triangleArea(float height, float base)
{
      return height*base*0.5;
}
float rectangleArea(float length, float breadth)
{
      return length*breadth;
}
float squareArea(float length)
{
      return length*length;
}
float rhombusArea(float diagonalP, float diagonalQ)
{
      return 0.5*diagonalP * diagonalQ;
}