//
//  ScientificCalculator.hpp
//  calculator
//
//  Created by ShengXiao on 2019-01-30.
//  Copyright © 2019 xiaosheng. All rights reserved.
//

#ifndef ScientificCalculator_hpp
#define ScientificCalculator_hpp
#include "BasicCalculator.hpp"
#include <cmath>
class ScientificCalculator : public BasicCalculator
{
    public:
        ScientificCalculator();
        double sine(double);
        double cosine(double);
        double xtan(double);
        double xlog(double);
};

#endif /* ScientificCalculator_hpp */
