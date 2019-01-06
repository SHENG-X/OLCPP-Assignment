#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;
int getLength(char *);
void toUpper(char *);
void toLower(char *);
void toProper(char *);
void toPattern(char *);

int main()
{
    char name[80];

    cout << "Enter a name :";
    cin >> name;

    int r= getLength(name);

    cout << "The length of string is :" << r<<endl;
    toUpper(name);
    cout << "The string in Capital Letters is: " << name<<endl;
    toLower(name);
    cout << "The string in lowercase Letters is: " << name << endl;
    toProper(name);
    cout << "The string in lowercase Letters is: " << name << endl;
    toPattern(name);
    cout << "The string in lowercase Letters is: " << name << endl;
    // Arbitrary element processing on the container.


}

void toUpper(char *p)
{

    while (*p)
    {

      *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        p++;

    }


}
int getLength(char *p)
{

    int ctr=0;
    while (*p)
    { cout << *p << " " ;
        ctr++;
        p++;

    }
    return ctr;
}

void toLower(char *p) {
// write code to convert to small cases
 while (*p)
    {

      *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        p++;

    }
}

void toProper(char *p) {
// write code to convert to proper case i.e. firts capital and rest small
      toUpper(p);
      p++;
      while(*p){
            toLower(p);
            p++;
      }
}

void toPattern(char *p) {
// write code to convert to the pattern ... aBcDeFgHiJ...one capital and one small
      while (*p)
      {
            toLower(p);
            p++;
            toUpper(p);
            p++;
      }
}
