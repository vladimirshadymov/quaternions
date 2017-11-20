//
// Created by vladimir on 19.11.17.
//

#include <iostream>
#include "qtr_algebra.hpp"
#include "math.h"

int main(){
  Quaternion qtr1(0.25, sqrt(5)/4, sqrt(5)/4, sqrt(5)/4);
  Quaternion qtr2;
  Quaternion qtr5;

  qtr2 = qtr1.getInversed();

  qtr5 = qtr1*qtr2;

  std::cout << qtr1;
  std::cout << qtr2;
  std::cout << qtr5;
}