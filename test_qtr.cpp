//
// Created by vladimir on 19.11.17.
//

#include <gtest/gtest.h>
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "qtr_algebra.hpp"

TEST (Quaternion__Test, Creation) {
  Quaternion qtr1;
  ASSERT_EQ(qtr1.getx0(), 0);
  ASSERT_EQ(qtr1.getx1(), 0);
  ASSERT_EQ(qtr1.getx2(), 0);
  ASSERT_EQ(qtr1.getx3(), 0);

  Quaternion qtr2(1, 3, 5, 17);
  ASSERT_EQ(qtr2.getx0(), 1);
  ASSERT_EQ(qtr2.getx1(), 3);
  ASSERT_EQ(qtr2.getx2(), 5);
  ASSERT_EQ(qtr2.getx3(), 17);

  Quaternion qtr3(4, 5, 3, -4);
  ASSERT_EQ(qtr3.getx0(), 4);
  ASSERT_EQ(qtr3.getx1(), 5);
  ASSERT_EQ(qtr3.getx2(), 3);
  ASSERT_EQ(qtr3.getx3(), -4);
}

TEST (Quaternion__Test, Equality) {
  Quaternion qtr1;
  Quaternion qtr2;
  ASSERT_TRUE(qtr1==qtr2);
  Quaternion qtr3(1,2,3,4);
  Quaternion qtr4(1.0,2.0,3.0,4.0);
  ASSERT_TRUE(qtr3==qtr4);
  ASSERT_TRUE(qtr1!=qtr4);
}

TEST(Quaternion__Test, Addition) {
  Quaternion qtr0;
  Quaternion qtr1(1,2,3,4);
  Quaternion qtr2(-5,16,14,31);
  Quaternion qtr3(31, 0, 15, 5);
  Quaternion qtr4(0, 2, 4, 7);
  Quaternion qtr5(4, 17, 0, 6);
  Quaternion qtr6(3, 12, 10, 0);

  qtr0 = qtr1+qtr2;
  ASSERT_EQ(qtr0.getx0(), -4);
  ASSERT_EQ(qtr0.getx1(), 18);
  ASSERT_EQ(qtr0.getx2(), 17);
  ASSERT_EQ(qtr0.getx3(), 35);
}

TEST (Quaternion__Test, Subtraction) {
  Quaternion qtr0;
  Quaternion qtr1(1,2,3,4);
  Quaternion qtr2(-5,16,14,31);
  Quaternion qtr3(31, 0, 15, 5);
  Quaternion qtr4(0, 2, 4, 7);
  Quaternion qtr5(4, 17, 0, 6);
  Quaternion qtr6(3, 12, 10, 0);

  qtr0 = qtr1-qtr2;
  ASSERT_EQ(qtr0.getx0(), 6);
  ASSERT_EQ(qtr0.getx1(), -14);
  ASSERT_EQ(qtr0.getx2(), -11);
  ASSERT_EQ(qtr0.getx3(), -27);
}

TEST(Quaternion__Test, Assignment) {
  Quaternion qtr0;
  Quaternion qtr1(1,2,3,4);
  Quaternion qtr2(-5,16,14,31);
  Quaternion qtr3(31, 0, 15, 5);
  Quaternion qtr4(0, 2, 4, 7);
  Quaternion qtr5(4, sqrt(17)/2, 0, cos(6));
  Quaternion qtr6(3, 12, tan(10), 0);

  qtr0 = qtr1;
  ASSERT_EQ(qtr0, qtr1);

  qtr0 = qtr2;
  ASSERT_EQ(qtr0, qtr2);

  qtr0 = qtr3;
  ASSERT_EQ(qtr0, qtr3);

  qtr0 = qtr4;
  ASSERT_EQ(qtr0, qtr4);

  qtr0 = qtr5;
  ASSERT_EQ(qtr0, qtr5);

  qtr0 = qtr6;
  ASSERT_EQ(qtr0, qtr6);
}

TEST (Quaternion__Test, Multiplication){
  Quaternion qtr0;
  Quaternion qtr1(1,2,3,4);
  Quaternion qtr2(-5,16,14,31);
  Quaternion qtr3(31, 0, 15, 5);
  Quaternion qtr4(0, 2, 4, 7);
  Quaternion qtr5(4, 17, 0, 6);
  Quaternion qtr6(3, 12, 10, 0);

  qtr0 = qtr1*qtr2;
  ASSERT_EQ(qtr0.getx0(), -203);
  ASSERT_EQ(qtr0.getx1(), 43);
  ASSERT_EQ(qtr0.getx2(), 1);
  ASSERT_EQ(qtr0.getx3(), -9);
}

TEST (Quaternion__Test, Rotation) {
  std::vector<double> axis_ox={1,0,0};
  std::vector<double> axis_oy={0,1,0};
  std::vector<double> axis_oz={0,0,1};

  std::vector<double> res_vec;
  std::vector<double> expected_vec;
  res_vec = rotate(axis_ox, 90, axis_oy);
  expected_vec = {0, 0, 1};
  ASSERT_EQ(res_vec, expected_vec);
}


int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}