//
// Created by tudor on 3/19/2024.
//
#include <iostream>
#ifndef PB2_COMPLEXNUMBER_H
#define PB2_COMPLEXNUMBER_H


class ComplexNumber {
private:
    double real,imaginary;

public:
    enum DISPLAY_TYPE { RECTANGULAR_FORM, POLAR_FORM };

    static DISPLAY_TYPE displayType;

    ComplexNumber(); // default constructor

    ComplexNumber(double real, double imaginary); // constructor

    bool operator== (const ComplexNumber& c1) const;// overload operator ==

    bool operator !=(const ComplexNumber& c1) const; // overload operator !=

    [[nodiscard]] double magnitude() const;// magnitude

    [[nodiscard]] double phase() const;//phase

    static DISPLAY_TYPE get_display_type();//??

    static void set_display_type(DISPLAY_TYPE type);//??

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);//overload stream insertion

    friend std::istream& operator>>(std::istream& is, ComplexNumber& c);// overload output operatii pe biti

    ComplexNumber operator+(const ComplexNumber& c) const;//add

    ComplexNumber operator-(const ComplexNumber& c) const;//diff

    ComplexNumber operator*(const ComplexNumber& c) const;//overload * to multiply 2 imaginary no's

    ComplexNumber operator*(double scalar) const;//overload scalar with imaginary


};


#endif //PB2_COMPLEXNUMBER_H
