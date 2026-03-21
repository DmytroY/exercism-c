#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number){
    int sum = 0;
    if(number % 2) {
        sum = number * (number / 2) + number;
    } else {
        sum = (number + 1) * (number / 2);
    }
    return sum * sum;
}

unsigned int sum_of_squares(unsigned int number){
    int result = 0;
    for(unsigned i = 1; i <= number; i++){
        result = result + i * i;
    }
    return result;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number) ;
}
