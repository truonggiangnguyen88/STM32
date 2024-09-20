/*
 * ex10.c
 *
 *  Created on: Sep 20, 2024
 *      Author: ASUS
 */
#include "ex10.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"

void ex10_run(int *hour, int *minute, int *second) {
    setNumberOnClock(*hour % 12);
    setNumberOnClock(*minute / 5);
    setNumberOnClock(*second / 5);

    (*second)++;

    if (*second >= 60) {
        *second = 0;
        (*minute)++;
    }
    if (*minute >= 60) {
        *minute = 0;
        (*hour)++;
    }
    if (*hour >= 12) {
        *hour = 0;
    }
}


