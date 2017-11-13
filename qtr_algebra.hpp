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

};

/*!
   *
   * @param stream Stream of output.
   * @param qtr Quaternion to be printed out.
   * @return output of the quaternion
   */
template <typename DataType>
std::ostream &operator<<(std::ostream &stream, const Quaternion& qtr);

#endif //QUATERNIONS_QTR_ALGEBRA_HPP
