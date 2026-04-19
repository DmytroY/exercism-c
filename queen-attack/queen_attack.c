#include "queen_attack.h"
#include <stdlib.h>


bool not_in_range(int value, int min, int max){
    if(value < min || value > max) return true;
    return false;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    if(queen_1.row == queen_2.row && queen_1.column == queen_2.column) return INVALID_POSITION;

    if(
        not_in_range(queen_1.row, 0, 7) ||
        not_in_range(queen_1.column, 0, 7) ||
        not_in_range(queen_2.row, 0, 7) ||
        not_in_range(queen_2.column,0, 7)
        ) return INVALID_POSITION;

    if(queen_1.row == queen_2.row || queen_1.column == queen_2.column) return CAN_ATTACK;
    if(abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column)) return CAN_ATTACK;
    return CAN_NOT_ATTACK;
}
