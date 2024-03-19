//
// Created by tudor on 3/19/2024.
//

#ifndef PB3_DATE_H
#define PB3_DATE_H

#include <iostream>
class Date {
private:
    int Day,Month,Year;
public:
    Date();

    Date(int year,int month,int day);

    friend std::ostream& operator>>(std::ostream& os,Date& d);

    bool operator ==(const Date& d) const;

    bool operator !=(const Date& d) const;

    bool operator <(const Date& d) const;

    bool operator <=(const Date& d) const;

    bool operator >(const Date& d) const;

    bool operator >=(const Date& d) const;

    void add_to_date(int days);

    static bool isValidDate(int year, int month, int day);

};


#endif //PB3_DATE_H
