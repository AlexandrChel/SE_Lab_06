/**
\file mycomplex.h
\brief Заголовочный файл класса Complex
*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

/**
\brief Класс комплексного числа
*/

class Complex{
/**
\brief Действительная чать
*/
double Re;
/**
\brief Минимая чать
*/
double Im;

public:
Complex(double aRe = 0, double aIm = 0);
Complex(const Complex &);
@@ -34,7 +51,7 @@ Complex &operator = (const Complex&);
Complex &operator = (const double&);

Complex &operator += (const Complex&);
Complex &operator += (const double&);
Complex &operator += (const double&);

Complex &operator -= (const Complex&);
Complex &operator -= (const double&);
Complex &operator *= (const Complex&);
Complex &operator *= (const double&);
Complex &operator /= (const  double&);
void Set(double aRe, double aIm);
operator double();
double abs();
};
#endif
