//
//  main.cpp
//  calculator
//
//  Created by ShengXiao on 2019-01-30.
//  Copyright © 2019 xiaosheng. All rights reserved.
//
//  KEY Pressed-> " > " Ascii Value =  62
//  KEY Pressed-> " < " Ascii Value =  60
//
//
#include <iostream>
#include <string>
#include <stdio.h>
#include "colormod.h"
#include "BasicCalculator.cpp"
#include "ScientificCalculator.cpp"
string usingBasicCalculator(BasicCalculator _basicCalCulator, int operatorIdx, double _operandA, double _operandB);
string usingScientificCalculator(ScientificCalculator _scientificCalCulator, int operatorIdx, double _operandA, double _operandB);

using namespace std;
int main()
{
    /*setting color and background color for the cmd application*/
    Color::Modifier green(Color::FG_GREEN);
    Color::Modifier greenb(Color::BG_GREEN);
    Color::Modifier red(Color::FG_RED);
    Color::Modifier redb(Color::BG_RED);
    Color::Modifier blue(Color::FG_BLUE);
    Color::Modifier blueb(Color::BG_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);
    Color::Modifier defb(Color::BG_DEFAULT);
    //contains all operations that basic and scientific calculator
    const string operations[] = {"Addition","Subtraction","Multiplication","Division","Square Root", "Square","Sine","Cosine","Tan","Log"};
    const string calculatorTypes[] = {"Basic","Scientific"};
    const int calculatorSize = 2;
    const int operationsSize =sizeof(operations)/sizeof(*operations);
    int selectedCalculatorTypeIdx = 0;
    int selectedOperationIdx = 0;
    char key_press;
    int ascii_value;
    double Operand_A, Operand_B;
    BasicCalculator basicCalculator;
    ScientificCalculator scientificaCalculator;
    cout<<greenb<<"Press [a, w, d, s] or [<, >] to change mode and opeartions; Press ESC to EXIT"<<defb<<endl<<endl;
    while(1){//start using calculator, promote user which calculator to use
        cout<<blueb<<"Select Calculator Type:"<<defb<<endl;
        for (int i=0;i<calculatorSize;i++){
            cout<<" ";
            if(selectedCalculatorTypeIdx == i){
                cout<<green<<calculatorTypes[i]<<def;
            }
            else{
                cout<<calculatorTypes[i];
            }
            cout<<" ";
        }
        cout<<endl;
        system("stty raw");
        key_press=getchar();
        system("stty cooked");
        ascii_value=key_press;
        if(ascii_value==13){
            while(1){//start of choosing calculator operations
                if(selectedCalculatorTypeIdx==0){
                    if(selectedOperationIdx>5){
                        selectedOperationIdx=0;
                    }
                    for (int i=0;i<6;i++){
                        cout<<" ";
                        if(selectedOperationIdx == i){
                            cout<<green<<"<"<<operations[i]<<">"<<def;
                        }
                        else{
                            cout<<operations[i];
                        }
                        cout<<" ";
                    }
                    cout<<defb<<endl;
                    system("stty raw");
                    key_press=getchar();
                    system("stty cooked");
                    ascii_value=key_press;
                    if(ascii_value==13){
                        if(selectedOperationIdx>3){
                            cout<<blueb<<"Enter your oprand: "<<defb;
                            cin>>Operand_A;
                        }else{
                            cout<<blueb<<"Enter your oprands (A and B):"<<red<<defb<<" Seperate by space  "<<def;
                            cin>>Operand_A >>Operand_B;
                            
                        }
                    cout<<redb<<usingBasicCalculator(basicCalculator,selectedOperationIdx,Operand_A, Operand_B)<<defb<<endl<<endl;
                        cout<<greenb<<"Press < , > to change mode and opeartions; Press ESC to EXIT"<<defb<<endl<<endl;
                        
                    }
                    else if(ascii_value==60||ascii_value==65||ascii_value==83||ascii_value==97||ascii_value==119){
                        if(selectedOperationIdx>0){
                            selectedOperationIdx--;
                        }else{
                            selectedOperationIdx=5;
                        }
                    }
                    else if(ascii_value==62||ascii_value==68||ascii_value==87||ascii_value==100||ascii_value==115){
                        if(selectedOperationIdx<6){
                            selectedOperationIdx++;
                        }else{
                            selectedOperationIdx=0;
                        }
                    }
                    else if(ascii_value==27){
                        break;
                    } // For ESC
                    cout<<endl;
                }
                else{
                    for (int i=0;i<operationsSize;i++){
                        cout<<" ";
                        if(selectedOperationIdx == i){
                            cout<<green<<"<"<<operations[i]<<">"<<def;
                        }
                        else{
                            cout<<operations[i];
                        }
                        cout<<" ";
                        if((i+1)%6==0){
                            cout<<endl;
                        }
                    }
                    cout<<defb<<endl;
                    system("stty raw"); //take user input as keydown event
                    key_press=getchar();
                    system("stty cooked");
                    ascii_value=key_press;
                    if(ascii_value==13){
                        if(selectedOperationIdx>3){
                            cout<<blueb<<"Enter your oprand: "<<defb;
                            cin>>Operand_A;
                        }else{
                            cout<<blueb<<"Enter your oprands (A and B):"<<red<<defb<<" Seperate by space  "<<def;
                            cin>>Operand_A >>Operand_B;
                            
                        }
                        cout<<redb<<usingScientificCalculator(scientificaCalculator,selectedOperationIdx,Operand_A, Operand_B)<<defb<<endl<<endl;
                        cout<<greenb<<"Press < , > to change mode and opeartions; Press ESC to EXIT"<<defb<<endl<<endl;
                        
                    }
                    else if(ascii_value==60||ascii_value==65||ascii_value==83||ascii_value==97||ascii_value==119){
                        if(selectedOperationIdx>0){
                            selectedOperationIdx--;
                        }else{
                            selectedOperationIdx=operationsSize-1;
                        }
                    }
                    else if(ascii_value==62||ascii_value==68||ascii_value==87||ascii_value==100||ascii_value==115){
                        if(selectedOperationIdx<operationsSize-1){
                            selectedOperationIdx++;
                        }else{
                            selectedOperationIdx=0;
                        }
                    }
                    else if(ascii_value==27){
                        break;
                    } // For ESC
                    cout<<endl;
                }
            }//end of select operations
        }
        else if(ascii_value==60||ascii_value==65||ascii_value==83||ascii_value==97||ascii_value==119){
            if(selectedCalculatorTypeIdx>0){
                selectedCalculatorTypeIdx--;
            }else{
                selectedCalculatorTypeIdx=calculatorSize-1;
            }
        }
        else if(ascii_value==62||ascii_value==68||ascii_value==87||ascii_value==100||ascii_value==115){
            if(selectedCalculatorTypeIdx<calculatorSize-1){
                selectedCalculatorTypeIdx++;
            }else{
                selectedCalculatorTypeIdx=0;
            }
        }
        else if(ascii_value==27) // For ESC
            break;
        }//end of promote user for calculator type, jump out of using calculator
    return 0;
}

//function to generate calculation result for basic calculator
string usingBasicCalculator(BasicCalculator _basicCalCulator, int operatorIdx, double _operandA, double _operandB=0.0){
    switch (operatorIdx) {
        case 0:
            _basicCalCulator.addition(_operandA,_operandB);
            break;
        case 1:
            _basicCalCulator.subtraction(_operandA,_operandB);
            break;
        case 2:
            _basicCalCulator.multiplication(_operandA,_operandB);
            break;
        case 3:
            _basicCalCulator.division(_operandA,_operandB);
            break;
        case 4:
            _basicCalCulator.squareRoot(_operandA);
            break;
        case 5:
            _basicCalCulator.square(_operandA);
            break;
        default:
            break;
    }
    string result =_basicCalCulator.getResult();
    _basicCalCulator.clear();
    return result;
    }

//function to generate calculation result for scientific calculator
string usingScientificCalculator(ScientificCalculator _scientificCalCulator, int operatorIdx, double _operandA, double _operandB=0.0){
    if(operatorIdx<6){
       return usingBasicCalculator(_scientificCalCulator,operatorIdx,_operandA,_operandB);
    }
    else{
        switch (operatorIdx) {
            case 6:
                _scientificCalCulator.sine(_operandA);
                break;
            case 7:
                _scientificCalCulator.cosine(_operandA);
                break;
            case 8:
                _scientificCalCulator.xtan(_operandA);
                break;
            case 9:
                _scientificCalCulator.xlog(_operandA);
                break;
            default:
                break;
        }
    }
    string result =_scientificCalCulator.getResult();
    _scientificCalCulator.clear();
    return result;
}
