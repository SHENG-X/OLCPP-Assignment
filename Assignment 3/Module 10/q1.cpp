#include <iostream>
using namespace std;

template <class T>
T multiply(T a, T b)
{   
    return a * b;
}

template <class T>
T divide(T a, T b)
{
    return a/b;
}

int main()
{
    cout << "--------TEST GENEERIC MULTIPLY--------"<<endl;
    cout << "int 5 * int 2"<< " = " << multiply<int>(5, 2) << endl;
    cout<<"float 5.0 * float 2.0"<<" = "<<multiply<float>(5.0,2.0)<<endl;
    cout<<"double 5.0 * double 2.0"<<" = "<<multiply<double>(5.0,2.0)<<endl;
    cout <<endl<<"--------TEST GENEERIC DIVIDE--------" << endl;
    cout << "int 5 / int 2"<< " = " << divide<int>(5, 2) << endl;
    cout<<"float 5.0 / float 2.0"<<" = "<<divide<float>(5.0,2.0)<<endl;
    cout<<"double 5.0 / double 2.0"<<" = "<<divide<double>(5.0,2.0)<<endl;
}