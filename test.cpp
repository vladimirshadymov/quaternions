//
// Created by vladimir on 19.11.17.
//

#include <iostream>
#include "qtr_algebra.hpp"


int main(){
  Quaternion qtr1;
  Quaternion qtr2(1,5,3,4);
  Quaternion qtr5(2,3,7,11);
  std::cout << qtr1;
  std::cout << qtr2;
  std::cout << qtr5;
}