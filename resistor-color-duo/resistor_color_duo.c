#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t * p){
    //return 10 * *p + *(p+1);
    return 10 * p[0] + p[1];
}
