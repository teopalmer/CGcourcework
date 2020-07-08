// Copyright (c) 2020 Meh. All rights reserved.

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float xa, ya, k = 1;
    int res = 1;
    int ch = 6;
    // ch = scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &xa, &ya);
    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 9;
    if (ch != 6) {
        printf("Input error");
        return 11;
    }
    if ((x1 == x2) && (y1 == y2)) {
        printf("Input error");
        return 22;
    } else {
        k = (x1 - xa) * (y2 - y1) - (x2 - x1) * (y1 - ya);
        if (k > 0) {
            res = 0;
        }
        if (k < 0) {
            res = 2;
        }
        printf("%d", res);
        return 0;
    }
}
