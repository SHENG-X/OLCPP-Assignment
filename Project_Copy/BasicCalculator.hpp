//
//  BasicCalculator.hpp
//  calculator
//
//  Created by ShengXiao on 2019-01-30.
//  Copyright © 2019 xiaosheng. All rights reserved.
//

#ifndef BasicCalculator_hpp
#define BasicCalculator_hpp

#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
class BasicCalculator
{
    private:
        double operandOne;
        double operandTwo;
    
    protected:
        string result;
    public:
        BasicCalculator();
        void setOperandOne(double);
        void setOperandTwo(double);
        double getOperandOne()const;
        double getOperandTwo()const;
        double addition(double,double);
        double subtraction(double,double);
        double multiplication(double,double);
        double division(double,double);
        double squareRoot(double,double=0.0);
        double square(double,double=0.0);
        void clear();
        string getResult()const;
        string formatTwoOperandsResult(string opr, double op1, double op2, double res);
        string formatOneOperandsResult(string opr, double op, double res);

};

#endif /* BasicCalculator_hpp */
