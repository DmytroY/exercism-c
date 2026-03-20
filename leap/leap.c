#include "leap.h"

bool leap_year(int year){
    if(year % 4) return false;
    if(year % 100 == 0 && year % 400) return false;
    return true;
}
