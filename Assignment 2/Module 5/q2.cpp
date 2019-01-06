#include <iostream>
using namespace std;
void inputString();
void reverseString(char* str, char* reversed);
void compareStrings(char* str1, char* str2, bool& isSame);
void concatStrings(char* str1, char* str2, char* str3);

int main()
{
      bool run = true;
      int userSelection = 0;
      do{
            cout << "Enter 1 for -> Input a string" << endl;
            cout << "Enter 2 for -> Reverse a string" << endl;
            cout << "Enter 3 for -> Compare two strings" << endl;
            cout << "Enter 4 for -> Concatenate two strings" << endl;
            cout<<"Enter 0 for -> Quit"<<endl;
            cout<<"Enter your choice: ";
            cin>>userSelection;
            switch (userSelection){
                  case 0:
                        run=false;
                        break;
                  case 1:
                        inputString();
                        break;
                  case 2:
                        char userIn[100];
                        char reversed[100];
                        cout<<"Enter your string: ";
                        cin>>userIn;
                        reverseString(userIn, reversed);
                        cout << "Reversed string: " << reversed << endl;
                        break;
                  case 3:
                        bool isSame;
                        char string1[100];
                        char string2[100];
                        cout << "Enter your first string: ";
                        cin>>string1;
                        cout<<"Enter your second string: ";
                        cin>>string2;
                        compareStrings(string1, string2, isSame);
                        cout<<string1<<" == "<<string2<<" ? "<<(isSame?" true ":" false ")<<endl;
                        break;
                  case 4:
                        char str1[100];
                        char str2[100];
                        char str3[200];
                        cout<<"Enter your first string: ";
                        cin>>str1;
                        cout<<"Enter your second string: ";
                        cin>>str2;
                        concatStrings(str1, str2, str3);
                        cout << "Concatenate two string: "<<str3<<endl;
                        break;

            }
      cout<<"-------------------------------------------------"<<endl;
      }while(run);

}
void inputString(){
      char userIn[100];
      cout<<"Enter your string: ";
      cin>> userIn;
      cout<<"You entered: "<<userIn<<endl;
}
void reverseString(char* str, char* reversed){
      char temp;
      int idx = strlen(str) - 1;
      while(idx>=0){
            *reversed = str[idx];
            idx--;
            reversed++;
      }

}
void compareStrings(char* str1, char* str2, bool& isSame){
      isSame = false;
      if(strlen(str1)==strlen(str2)){
            isSame=true;
            while(*str1){
                  if(*str1!=*str2){
                        isSame = false;
                  }
                  str1++;
                  str2++;
            }
      }
      

}
void concatStrings(char* str1, char* str2, char* str3){
      while(*str1){
            *str3 = *str1;
            str1++;
            str3++;
      }
      while(*str2){
            *str3 = *str2;
            str2++;
            str3++;
      }
}