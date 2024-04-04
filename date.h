#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
public:
    explicit Date(int d, int m, int y) : day(d), month(m), year(y) {
        setMonth(m);
        setYear(y);
        setDay(d);
    }

    void setDay(int d) {
        if (isValidDay(d, month, year)) {
            day = d;
        }
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        }
    }

    void setYear(int y) {
        if (isValidYear(y)) {
            year = y;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void displayDate() const {
        std::cout << day << " / " << month << " / " << year << std::endl;
    }

    bool isLeapYear() const {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

private:
    int day;
    int year;
    int month{1};

    bool isValidYear(int y) const {
        return (y >= 1900 && y <= 2050);
    }

    bool isValidDay(int d, int m, int y) const {
        if (m == 2) {
            if (isLeapYear()) {
                return (d >= 1 && d <= 29);
            } else {
                return (d >= 1 && d <= 28);
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return (d >= 1 && d <= 30);
        } else {
            return (d >= 1 && d <= 31);
        }
    }
};

#endif
