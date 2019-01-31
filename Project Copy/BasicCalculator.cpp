//
//  BasicCalculator.cpp
//  calculator
//
//  Created by ShengXiao on 2019-01-30.
//  Copyright © 2019 xiaosheng. All rights reserved.
//

#include "BasicCalculator.hpp"
string formatTwoOperandsResult(string opr, double op1, double op2, double res);
string formatOneOperandsResult(string opr, double op, double res);
BasicCalculator::BasicCalculator(){
    
}
void BasicCalculator::setOperandOne(double _oprandOne)
{
    operandOne = _oprandOne;
}
void BasicCalculator::setOperandTwo(double _oprandTwo)
{
    operandTwo = _oprandTwo;
}
double BasicCalculator::getOperandOne()const
{
    return operandOne;
}
double BasicCalculator::getOperandTwo()const
{
    return operandTwo;
}
double BasicCalculator::addition(double _oprandOne,double _oprandTwo)
{
    result=formatTwoOperandsResult("+",_oprandOne,_oprandTwo,(_oprandOne+_oprandTwo));
    return _oprandOne + _oprandTwo;
}
double BasicCalculator::subtraction(double _oprandOne,double _oprandTwo)
{
    result=formatTwoOperandsResult("-",_oprandOne,_oprandTwo,(_oprandOne-_oprandTwo));
    return _oprandOne - _oprandTwo;
}
double BasicCalculator::multiplication(double _oprandOne,double _oprandTwo)
{
    result=formatTwoOperandsResult("*",_oprandOne,_oprandTwo,(_oprandOne*_oprandTwo));
    return _oprandOne * _oprandTwo;
}
double BasicCalculator::division(double _oprandOne,double _oprandTwo)
{
    result=formatTwoOperandsResult("/",_oprandOne,_oprandTwo,(_oprandOne/_oprandTwo));

    return _oprandOne / _oprandTwo;
}
double BasicCalculator::squareRoot(double _oprandOne,double _oprandTwo)
{
    result=formatOneOperandsResult("square root",_oprandOne,sqrt(_oprandOne));
    return sqrt(_oprandOne);
}
double BasicCalculator::square(double _oprandOne,double _oprandTwo)
{
    result=formatOneOperandsResult("square",_oprandOne,pow(_oprandOne, 2));
    return pow(_oprandOne, 2);
}
void BasicCalculator::clear()
{
    operandTwo = 0.0;
    operandOne = 0.0;
}
string BasicCalculator::getResult()const
{
    return result;
}

string BasicCalculator::formatTwoOperandsResult(string opr, double op1, double op2, double res)
{
    string result="";
    result=to_string(op1).erase( to_string(op1).find_last_not_of('0') + 1,  string::npos )+" "+opr+" "+to_string(op2).erase ( to_string(op2).find_last_not_of('0') + 1,  string::npos )+" = "+to_string(res).erase ( to_string(res).find_last_not_of('0') + 1,  string::npos );
    return result;
}

string BasicCalculator::formatOneOperandsResult(string opr, double op, double res)
{
    string result = "";
    result=opr+"( "+ to_string(op).erase( to_string(op).find_last_not_of('0') + 1,  string::npos ) +" ) = "+to_string(res).erase(to_string(res).find_last_not_of('0') + 1,  string::npos );
    return result;
}










