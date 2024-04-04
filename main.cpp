#include <iostream>
#include "date.h"
using namespace std;

int main() {
    Date date1(3, 1, 2020);
    Date date2(15, 14, 2019);
    Date date3(20, 12, 1500);

    cout << "Fecha 1: ";
    date1.displayDate();
    cout << "Fecha 2: ";
    date2.displayDate();
    cout << "Fecha 3: ";
    date3.displayDate();

    return 0;
}
