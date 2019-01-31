//
//  ScientificCalculator.cpp
//  calculator
//
//  Created by ShengXiao on 2019-01-30.
//  Copyright © 2019 xiaosheng. All rights reserved.
//

#include "ScientificCalculator.hpp"
#define PI 3.14159265
ScientificCalculator::ScientificCalculator()
{
    
}
double ScientificCalculator::sine(double degree)
{
    BasicCalculator::clear();
    BasicCalculator::setOperandOne(degree);
    BasicCalculator::result =BasicCalculator::formatOneOperandsResult("sine", degree, sin(degree*PI/180));
    return sin(degree*PI/180);
    
}
double ScientificCalculator::cosine(double degree)
{
    BasicCalculator::clear();
    BasicCalculator::setOperandOne(degree);
    BasicCalculator::result =BasicCalculator::formatOneOperandsResult("cosine", degree, cos(degree*PI/180));
    return cos(degree*PI/180);
    
}
double ScientificCalculator::xtan(double degree)
{
    BasicCalculator::clear();
    BasicCalculator::setOperandOne(degree);
    BasicCalculator::result =BasicCalculator::formatOneOperandsResult("tan", degree, tan ( degree * PI / 180.0 ));
    return tan( degree * PI / 180.0 );
}
double ScientificCalculator::xlog(double operand)
{
    BasicCalculator::clear();
    BasicCalculator::setOperandOne(operand);
    BasicCalculator::result =BasicCalculator::formatOneOperandsResult("log", operand, log(operand));
    return log(operand);
}
