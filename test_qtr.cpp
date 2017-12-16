//
// Created by vladimir on 19.11.17.
//

#include <iostream>
#include "qtr_algebra.hpp"
#include "math.h"
#include <iomanip>
#include <vector>

int main(){
  Quaternion qtr1(0.25, sqrt(5)/4, sqrt(5)/4, sqrt(5)/4);
  Quaternion qtr2;
  Quaternion qtr5;

  qtr2 = qtr1.getInversed();

  qtr5 = qtr1/qtr1;

  std::cout << qtr1;
  std::cout << qtr2;
  std::cout << qtr5;


  std::vector<double> axis = {0, 1, 0};
  std::vector<double> vec = {1, 0, 0};
  std::vector<double> res_vec;
  double phi = 45;
  res_vec = rotate(axis, phi, vec);
  std::cout << std::setprecision(3) << res_vec[0] << ' ' << res_vec[1] << ' ' << res_vec[2]<<std::endl;
}
