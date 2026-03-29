#include "collatz_conjecture.h"
#include <stdlib.h>

int steps(int start){
    if(start < 1) return -1;
    unsigned counter = 0;
    div_t result;
    while(start > 1){
        counter++;
        result = div(start, 2);
        if(result.rem) {
            start = start * 3 + 1;
        } else {
            start = result.quot;
        }
    }
    return counter;
}
