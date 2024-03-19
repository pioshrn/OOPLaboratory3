//
// Created by tudor on 3/19/2024.
//
#include <cmath>
#include "ComplexNumber.h"

static ComplexNumber::DISPLAY_TYPE displayType;

static ComplexNumber:: DISPLAY_TYPE getDisplayType() { return displayType; }

void ComplexNumber::set_display_type(DISPLAY_TYPE type) { displayType = type; }

ComplexNumber::ComplexNumber():real(0.0),imaginary(0.0){};

ComplexNumber::ComplexNumber(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

bool ComplexNumber::operator== (const ComplexNumber& c1) const{
    if(this->real == c1.real and this->imaginary == c1.imaginary)
        return true;
    else return false;
}

bool ComplexNumber::operator!=(const ComplexNumber &c1) const {
    if(this->real != c1.real or this->imaginary != c1.imaginary)
        return true;
    else return false;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &c) const {
    return ComplexNumber(this->real*c.real-this->imaginary*c.imaginary, this->real*c.imaginary+ this->imaginary*c.real);

}
ComplexNumber ComplexNumber::operator*(double scalar) const {
    return ComplexNumber(this->real*scalar, this->imaginary*scalar);
}

double ComplexNumber::magnitude() const {
    return sqrt(this->real* this->real+this->imaginary*this->imaginary);
}

double ComplexNumber::phase() const {
    return atan2(this->imaginary, this->real);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &c) const {
    return ComplexNumber(this->real+c.real, this->imaginary+c.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &c) const {
    return ComplexNumber(this->real-c.real, this->imaginary-c.imaginary);
}

/*static ComplexNumber::DISPLAY_TYPE getDisplayType() { return displayType; }
static void setDisplayType(ComplexNumber::DISPLAY_TYPE type) { displayType = type; }
 */
std::ostream& operator<<(std::ostream& os, const ComplexNumber& c){
    if(displayType == ComplexNumber::RECTANGULAR_FORM)
        os<<c.real<<"+"<<c.imaginary<<"i";
    else{
        double mag=c.magnitude();
        double ph=c.phase();
        os << mag << "*(cos(" << ph << ") + i*sin(" << ph << "))";
    }
    return os;
}
std::istream& operator>>(std::istream& is, ComplexNumber& c) {
    is >> c.real >> c.imaginary;
    return is;}