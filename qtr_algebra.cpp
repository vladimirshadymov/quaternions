//
// Created by vladimir on 13.11.17.
//

#include "qtr_algebra.hpp"

Quaternion::Quaternion() {
  x0_ = 0;
  x1_ = 0;
  x2_ = 0;
  x3_ = 0;
}

Quaternion::Quaternion(double x0, double x1, double x2, double x3) {
  x0_ = x0;
  x1_ = x1;
  x2_ = x2;
  x3_ = x3;
}

Quaternion::~Quaternion() {}

double Quaternion::getx0() const {
  return x0_;
}


double Quaternion::getx1() const {
  return x1_;
}


double Quaternion::getx2() const {
  return x2_;
}

double Quaternion::getx3() const {
  return x3_;
}

Quaternion &Quaternion::operator=(const Quaternion &qtr){
  x0_ = qtr.getx0();
  x1_ = qtr.getx1();
  x2_ = qtr.getx2();
  x3_ = qtr.getx3();
  return *this;
}

Quaternion Quaternion::operator +(const Quaternion &qtr) {
  double x0 = x0_ + qtr.getx0();
  double x1 = x1_ + qtr.getx1();
  double x2 = x2_ + qtr.getx2();
  double x3 = x3_ + qtr.getx3();
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion Quaternion::operator -(const Quaternion &qtr) {
  double x0 = x0_ - qtr.getx0();
  double x1 = x1_ - qtr.getx1();
  double x2 = x2_ - qtr.getx2();
  double x3 = x3_ - qtr.getx3();
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion &Quaternion::operator +=(const Quaternion &qtr) {
  x0_ += qtr.getx0();
  x1_ += qtr.getx1();
  x2_ += qtr.getx2();
  x3_ += qtr.getx3();
  return *this;
}

Quaternion &Quaternion::operator -=(const Quaternion &qtr){
  x0_ -= qtr.getx0();
  x1_ -= qtr.getx1();
  x2_ -= qtr.getx2();
  x3_ -= qtr.getx3();
  return *this;
}


std::ostream &operator<<(std::ostream &stream, const Quaternion& qtr){
  return stream << "quaternion("<<qtr.getx0()<<", "
                <<qtr.getx1()<<", "<<qtr.getx2()<<", "
                <<qtr.getx3()<<")\n";
}

bool Quaternion::operator ==(const Quaternion &qtr){
  return ((x0_==qtr.getx0())
      and (x1_==qtr.getx1())
      and (x2_==qtr.getx2())
      and (x3_==qtr.getx3()));
}

bool Quaternion::operator !=(const Quaternion &qtr){
  return (not((x0_==qtr.getx0())
      and (x1_==qtr.getx1())
      and (x2_==qtr.getx2())
      and (x3_==qtr.getx3())));
}