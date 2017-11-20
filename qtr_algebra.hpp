//
// Created by vladimir on 13.11.17.
//
/*!
 * \file
 * \brief Header file with class description
 * This file contains the definitions of the main
 * classes used in the library
*/
#ifndef QUATERNIONS_QTR_ALGEBRA_HPP
#define QUATERNIONS_QTR_ALGEBRA_HPP
#include <iostream>

/*!
 * /brief Class Quaternion stands for hypercomlex object quatrenion.
 *
 * Quaternion
 * \todo (detailed description)
 */

class Quaternion{
 private:
  double x0_, x1_, x2_, x3_; ///< Coordinates of the quaternion in the defined basis.
 public:
  /*!
   * Initialize zero quaternion
   * \param[in] Nothing
   * \param[out] Quaternion(0, 0, 0, 0)
   */
  Quaternion();

  /*!
   * Initialize quaternion with defined coordinates
   * \param[in] x0, x1, x2, x3 - coordinates;
   * \param[out] Quaternion(x0, x1, x2, x3)
   */
  Quaternion(double x0, double x1, double x2, double x3);

  ~Quaternion();

  /*!
   * @return x0 - zero coordinate of the quaternion
   */
  double getx0()const;

  /*!
   * @return x1 - first coordinate of the quaternion
   */
  double getx1()const;

  /*!
   * @return x2 - second coordinate of the quaternion
   */
  double getx2()const ;

  /*!
   * @return x3 - third coordinate of the quaternion
   */
  double getx3()const ;

  /*!
   * Overloading of the operator "=" for quaternoin assignment
   */
  Quaternion &operator =(const Quaternion &qtr);


  /*!
   * Overloading of the operator "+" for quaternoin adding
   */
  Quaternion operator +(const Quaternion &qtr);

  /*!
   * Overloading of the operator "-" for quaternoin subtraction
   */
  Quaternion operator -(const Quaternion &qtr);

  /*!
   * Overloading of the operator "+=" for quaternoin adding
   */
  Quaternion &operator +=(const Quaternion &qtr);

  /*!
   * Overloading of the operator "-=" for quaternoin subtraction
   */
  Quaternion &operator -=(const Quaternion &qtr);

  /*!
   * @param Overloading of the operator "==" for quaternoin comparison
   * @return
   */
  bool operator ==(const Quaternion &qtr);

  /*!
   * @param Overloading of the operator "!=" for quaternoin comparison
   * @return
   */
  bool operator !=(const Quaternion &qtr);

  /*!
   *
   * @param k number of double type
   * @return Quaternion multiplied by the number k (qtr*k; only that order in this function)
   */
  Quaternion operator *(double k);

  /*!
   *
   * @param k number of double type
   * @return Quaternion divided by the number k (qtr/k)
   */
  Quaternion operator /(double k);

  /*!
   *
   * @param k number of double type
   * @return Quaternion multiplied by the number k
   */
  Quaternion &operator *=(double k);

  /*!
   *
   * @param k number of double type
   * @return Quaternion divided by the number k
   */
  Quaternion &operator /=(double k);

  /*!
   * @return Norm of the quaternion ||Q||=x0^2+x1^2+x2^2+x3^2
   */
  double getNorm();

  /*!
   * @return Absolute value of the quaternion |Q|=sqrt(x0^2+x1^2+x2^2+x3^2)
   */
  double getAbs();

  /*!
   * @return Conjugated quaternion
   * ATTENTION! The method DOES change quaternion it is applied to.
   */
  void conjugate();

  /*!
   * @return Inversed quaternion [conj(qtr)/||qtr||==qtr^-1]
   * ATTENTION! The method DOES change quaternion it is applied to.
   */
  void inverse();

  /*!
   * @return Conjugated quaternion
   * ATTENTION! The method DOESN'T change quaternion it is applied to.
   */
  Quaternion getConjugated();

  /*!
   * @return Inversed quaternion [conj(qtr)/||qtr||==qtr^-1]
   * ATTENTION! The method DOESN'T change quaternion it is applied to.
   */
  Quaternion getInversed();


  /*!
   * Overloaded operator "*" for quaternion mutiplication, according to the formula
   * X*Y = x0*y0 - (x*y) + x0*y + y0*x + [x*y];
   * Where:
   * Quaternion X = x0+x; x0 : scalar part of the quaternion; x : vector part of the quaternion;
   * Quaternion Y = y0+y; y0 : scalar part of the quaternion; y : vector part of the quaternion;
   * (x*y) : scalar multiplication of vectors;
   * [x*y] : vector multiplication of vectors;
   */
  Quaternion operator*(const Quaternion &qtr);


};

/*!
 *
 * @param stream Stream of output.
 * @param qtr Quaternion to be printed out.
 * @return output of the quaternion
 */
std::ostream &operator<<(std::ostream &stream, const Quaternion& qtr);


/*!
 * @param k number of double type
 * @param qtr : Quaternion multiplied by the number k (k*qtr; only that order in this function)
 * @return
 */
Quaternion operator *(const double k, const Quaternion &qtr);



#endif //QUATERNIONS_QTR_ALGEBRA_HPP
