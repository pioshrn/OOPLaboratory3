
#include "Date.h"

Date::Date() {this->Day=1;
this->Month=1;
this->Year = 1970;}
Date::Date(int year, int month, int day){
    this->Month = month;
    this->Day = day;
    this->Year = year;
}
bool Date::operator==(const Date &d) const {
    return(this->Year == d.Year and this->Month == d.Month and this->Day == d.Day);
}
bool Date::operator!=(const Date &d) const {
    return !(this->Year == d.Year and this->Month == d.Month and this->Day == d.Day);
}

bool Date::operator<(const Date &d) const {
    if (this->Year < d.Year) {
        return true;
    } else if (this->Year > d.Year) {
        return false;
    } else { // Years are equal
        if (this->Month < d.Month) {
            return true;
        } else if (this->Month > d.Month) {
            return false;
        } else { // Months are equal
            if (this->Day < d.Day) {
                return true;
            } else {
                return false;
            }
        }
    }



    bool Date::operator>(const Date &d) const {
        if (this->Year > d.Year) {
            return true;
        } else if (this->Year < d.Year) {
            return false;
        } else { // Years are equal
            if (this->Month > d.Month) {
                return true;
            } else if (this->Month < d.Month) {
                return false;
            } else { // Months are equal
                if (this->Day > d.Day) {
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
