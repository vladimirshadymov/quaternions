//
// Created by vladimir on 13.11.17.
//

#include "qtr_algebra.hpp"
#include "math.h"

Quaternion::Quaternion() {
  x0_ = 0;
  x1_ = 0;
  x2_ = 0;
  x3_ = 0;
}

Quaternion::Quaternion(double x0, double x1, double x2, double x3) {
  x0_ = round(x0*pow10(10))/pow10(10);
  x1_ = round(x1*pow10(10))/pow10(10);
  x2_ = round(x2*pow10(10))/pow10(10);
  x3_ = round(x3*pow10(10))/pow10(10);
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

Quaternion Quaternion::operator-() {
  double x0 = -x0_;
  double x1 = -x1_;
  double x2 = -x2_;
  double x3 = -x3_;
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

bool operator ==(const Quaternion &qtr1, const Quaternion &qtr2){
  return ((qtr1.getx0())==qtr2.getx0())
      and ((qtr1.getx1())==qtr2.getx1())
      and ((qtr1.getx2())==qtr2.getx2())
      and ((qtr1.getx3())==qtr2.getx3());
}

bool Quaternion::operator !=(const Quaternion &qtr){
  return (not((x0_==qtr.getx0())
      and (x1_==qtr.getx1())
      and (x2_==qtr.getx2())
      and (x3_==qtr.getx3())));
}

Quaternion Quaternion::operator*(double k) {
  double x0 = k*x0_;
  double x1 = k*x1_;
  double x2 = k*x2_;
  double x3 = k*x3_;
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion operator *(const double k, const Quaternion &qtr){
  double x0 = k*qtr.getx0();
  double x1 = k*qtr.getx1();
  double x2 = k*qtr.getx2();
  double x3 = k*qtr.getx3();
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion Quaternion::operator/(double k) {
  double x0 = x0_/k;
  double x1 = x1_/k;
  double x2 = x2_/k;
  double x3 = x3_/k;
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion &Quaternion::operator*=(double k) {
  x0_ *= k;
  x1_ *= k;
  x2_ *= k;
  x3_ *= k;
  return *this;
}

Quaternion &Quaternion::operator/=(double k) {
  x0_ /= k;
  x1_ /= k;
  x2_ /= k;
  x3_ /= k;
  return *this;
}

double Quaternion::getNorm() {
  return (x0_*x0_+x1_*x1_+x2_*x2_+x3_*x3_);
}

double Quaternion::getAbs() {
  return sqrt(x0_*x0_+x1_*x1_+x2_*x2_+x3_*x3_);
}

void Quaternion::conjugate() {
  x1_*=-1;
  x2_*=-1;
  x3_*=-1;
}

void Quaternion::inverse() {
  this->conjugate();
  *this /= this->getNorm();
}


Quaternion Quaternion::getConjugated() {
  double x0 = x0_;
  double x1 = -x1_;
  double x2 = -x2_;
  double x3 = -x3_;
  Quaternion tmp(x0, x1, x2, x3);
  return tmp;
}

Quaternion Quaternion::getInversed() {
  Quaternion tmp;
  tmp = (*this).getConjugated();
  tmp /= tmp.getNorm();
  return tmp;
}

Quaternion Quaternion::operator*(const Quaternion &qtr) {
  double y0 = qtr.getx0();
  double y1 = qtr.getx1();
  double y2 = qtr.getx2();
  double y3 = qtr.getx3();

  double c0 = x0_*y0 - (x1_*y1+x2_*y2+x3_*y3);
  double c1 = x0_*y1 + y0*x1_ + x2_*y3 - y2*x3_;
  double c2 = x0_*y2 + y0*x2_ - x1_*y3 + y1*x3_;
  double c3 = x0_*y3 + y0*x3_ + x1_*y2 - y1*x2_;

  Quaternion tmp(c0, c1, c2, c3);

  return tmp;
}

Quaternion Quaternion::operator/(const Quaternion &qtr) {
  double y0 = qtr.getx0();
  double y1 = qtr.getx1();
  double y2 = qtr.getx2();
  double y3 = qtr.getx3();
  Quaternion tmp(y0, y1, y2, y3);

  tmp.inverse();
  tmp = (*this)*tmp;
  return tmp;
}

Quaternion Quaternion::transformate(const Quaternion &qtr) {
  Quaternion tmp;
  tmp = *(this)*qtr*(this->getConjugated());
  return tmp;
}


std::vector<double> rotate(const std::vector<double> &axis, const double &phi_deg, const std::vector<double> &v) {

  double len = sqrt(axis[0]*axis[0]+axis[1]*axis[1]+axis[2]*axis[2]);
  double phi_rad = phi_deg/180*M_PI;
  double x0 = cos(phi_rad/2);
  double x1 = axis[0]/len*sin(phi_rad/2);
  double x2 = axis[1]/len*sin(phi_rad/2);
  double x3 = axis[2]/len*sin(phi_rad/2);

  Quaternion qtr_rot(x0, x1, x2, x3);
  Quaternion qtr_vec(0, v[0], v[1], v[2]);

  Quaternion rotated_qtr;
  rotated_qtr = qtr_rot*qtr_vec*qtr_rot.getConjugated();
  std::vector<double> res_vec;
  res_vec.push_back(rotated_qtr.getx1());
  res_vec.push_back(rotated_qtr.getx2());
  res_vec.push_back(rotated_qtr.getx3());
  return res_vec;
}

