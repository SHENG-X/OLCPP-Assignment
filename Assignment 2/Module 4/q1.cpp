#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
void display(int mark[10][5], char studentNames[10][20] );
string getGrade(int percent);

int main() {
    char studentNames[10][20] = {"Alpha","Beta","Cindy","Danny","Steven","James","Emma","Nora","Lee","Woody"};
    int ranking[10];
    int marks[10][5] = {
        {90, 93, 92, 95, 87},
        {88, 84, 87, 89, 93},
        {85, 97, 78, 83, 86},
        {78, 77, 88, 79, 82},
        {88, 90, 75, 67, 90},
        {91, 94, 92, 83, 70},
        {83, 95, 88, 92, 86},
        {73, 81, 80, 90, 78},
        {71, 73, 86, 79, 84},
        {92, 75, 74, 73, 97}
        };
    display(marks, studentNames);
    return 0;
}

void display(int marks[10][5], char studentNames[10][20] ) {
    int total=0, percent=0;
    //grade table
    /*
      A+    90-100
      A     85-89 
      A-    80-84	
      B+    77-79 
      B     73-76 
      B-    70-72	
      F     0-69	
    */
    printf("%7s  %s\n","name","mark 1     mark 2    mark 3    mark 4    mark 5  total  percentage  Grade");
    for (int i = 0; i <10; ++i) {
          printf("%7s ",studentNames[i]);
          for(int j=0; j<5; ++j){
                printf("     %d   ",marks[i][j]);
                total+=marks[i][j];
          }
          const string grade = getGrade(total/5);
          printf(" %d     %2.1f%%      %s \n",total, (float)total/5,grade.c_str());
          total=0, percent=0;
    }
}

string getGrade(int percent){
      if(percent<=100 && percent>=90){
            return "A+";
      }
      else if(percent<=89 && percent>=85){
            return "A";
      }
      else if(percent<=84 && percent>=80){
            return "A-";
      }
      else if(percent<=79 && percent>=77){
            return "B+";
      }
      else if(percent<=76 && percent>=73){
            return "B";
      }
      else if(percent<=72 && percent>=70){
            return "B-";
      }
      else if(percent<=69 && percent>=0){
            return "D";
      }
}


// Make a caracter array to store the names of ten students
// make another int marks[10][5] array to store three marks for ten students
// extend the display function to display the name of every student, followed by 5 marks, total , percentage and Grade obtained by the students.
// display() should be called ten time from the loop in the main body of the program

