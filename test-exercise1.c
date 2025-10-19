#include <stdio.h>
#include <math.h>
#include "include/taylor_sine.h"

#define M_PI 3.14159265358979323846

int main() {
    double x_array[] = {0, 0.5, 1, M_PI, M_PI/2, M_PI*3, 10};  
    int n_array[] = {1 ,3, 5, 7, 10};                   

    for (int i = 0; i < 7; i++) {
        double x = x_array[i];

        printf("Test x = %f\n", x);

        for (int j = 0; j < 4; j++) {
            int n = n_array[j];

            double taylor = taylor_sine(x, n);

            double math = sin(x);
            printf("n = %d: Taylor = %f, C sin = %f, Forskel = %f\n", n, taylor, math, taylor - math);
        }
    }
    return 0;
}

// Kopieret fra output
// Test x = 0.000000
// n = 1: Taylor = 0.000000, C sin = 0.000000, Forskel = 0.000000
// n = 3: Taylor = 0.000000, C sin = 0.000000, Forskel = 0.000000
// n = 5: Taylor = 0.000000, C sin = 0.000000, Forskel = 0.000000
// n = 7: Taylor = 0.000000, C sin = 0.000000, Forskel = 0.000000
// Test x = 0.500000
// n = 1: Taylor = 0.500000, C sin = 0.479426, Forskel = 0.020574
// n = 3: Taylor = 0.479427, C sin = 0.479426, Forskel = 0.000002
// n = 5: Taylor = 0.479426, C sin = 0.479426, Forskel = 0.000000
// n = 7: Taylor = 0.479426, C sin = 0.479426, Forskel = 0.000000
// Test x = 1.000000
// n = 1: Taylor = 1.000000, C sin = 0.841471, Forskel = 0.158529
// n = 3: Taylor = 0.841667, C sin = 0.841471, Forskel = 0.000196
// n = 5: Taylor = 0.841471, C sin = 0.841471, Forskel = 0.000000
// n = 7: Taylor = 0.841471, C sin = 0.841471, Forskel = 0.000000
// Test x = 3.141593
// n = 1: Taylor = 3.141593, C sin = 0.000000, Forskel = 3.141593
// n = 3: Taylor = 0.524044, C sin = 0.000000, Forskel = 0.524044
// n = 5: Taylor = 0.006925, C sin = 0.000000, Forskel = 0.006925
// n = 7: Taylor = 0.000021, C sin = 0.000000, Forskel = 0.000021
// Test x = 1.570796
// n = 1: Taylor = 1.570796, C sin = 1.000000, Forskel = 0.570796
// n = 3: Taylor = 1.004525, C sin = 1.000000, Forskel = 0.004525
// n = 5: Taylor = 1.000004, C sin = 1.000000, Forskel = 0.000004
// n = 7: Taylor = 1.000000, C sin = 1.000000, Forskel = 0.000000
// Test x = 9.424778
// n = 1: Taylor = 3.141593, C sin = 0.000000, Forskel = 3.141593
// n = 3: Taylor = 0.524044, C sin = 0.000000, Forskel = 0.524044
// n = 5: Taylor = 0.006925, C sin = 0.000000, Forskel = 0.006925
// n = 7: Taylor = 0.000021, C sin = 0.000000, Forskel = 0.000021
// Test x = 10.000000
// n = 1: Taylor = -2.566371, C sin = -0.544021, Forskel = -2.022350
// n = 3: Taylor = -0.676958, C sin = -0.544021, Forskel = -0.132937
// n = 5: Taylor = -0.544785, C sin = -0.544021, Forskel = -0.000764
// n = 7: Taylor = -0.544022, C sin = -0.544021, Forskel = -0.000001

// Højere værdier af n gør approksimationen markant mere akkurat, hvilket kan ses på
// det følgende print at test programmet. Men generelt med 7 "ittarationer", så er approksimationen
// ekstremt tæt på af ANSI C sin funktionen.
