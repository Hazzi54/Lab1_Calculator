#ifndef FUNC
#define FUNC

#include <stdio.h>

struct comp_num {
    float real;
    float image;
};

struct comp_num Add(struct comp_num, struct comp_num);
struct comp_num Sub(struct comp_num, struct comp_num);
struct comp_num Mul(struct comp_num, struct comp_num);
struct comp_num Div(struct comp_num, struct comp_num);

#endif
