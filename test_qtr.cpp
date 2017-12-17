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

//TODO: need more tests.

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}