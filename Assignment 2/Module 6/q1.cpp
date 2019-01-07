#include <iostream>
#include "GradeBook.h"

using namespace std;
int main(){
      GradeBook comp("Comp3210");
      comp.displayMessage();
      comp.setCourseName("Discover Canada");
      comp.displayMessage();
      comp.determineClassAverage();
      return 0;
}