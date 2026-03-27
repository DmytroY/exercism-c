#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#define LIST_OF_COLORS \
    X(BLACK) \
    X(BROWN) \
    X(RED) \
    X(ORANGE) \
    X(YELLOW) \
    X(GREEN) \
    X(BLUE) \
    X(VIOLET) \
    X(GREY) \
    X(WHITE)

#define X(name) name,

typedef enum {
    LIST_OF_COLORS
}resistor_band_t;

#undef X
#define X(name) [name] = name,

static const resistor_band_t all_colors[] = {
    LIST_OF_COLORS
};

int color_code(resistor_band_t);
const resistor_band_t *colors();

#endif
