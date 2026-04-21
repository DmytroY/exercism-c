#include "darts.h"

uint8_t score(const coordinate_t landing_position){
    float distance = sqrt(pow(landing_position.x, 2) + pow(landing_position.y, 2));
    if (distance <= 1) return 10;
    if (distance <= 5) return 5;
    if (distance <= 10) return 1;
    return 0;
}
