#define CTEST_MAIN

#include "func.h"
#include "../thirdparty/ctest.h"

CTEST(add, first) {
    struct comp_num a, b, c;
    a.real = 1.0;
    a.image = 2.0;
    b.real = 3.0;
    b.image = 4.0;
    c = Add(a, b);
    ASSERT_EQUAL(4, (int)c.real);
}

CTEST(add, second) {
    struct comp_num a, b, c;
    a.real = 5.0;
    a.image = 5.0;
    b.real = 7.0;
    b.image = 7.0;
    c = Add(a, b);
    ASSERT_EQUAL(12, (int)c.real);
}

int main(int argc, const char *argv[]){
    return ctest_main(argc, argv);
}

