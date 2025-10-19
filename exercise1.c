/*
 * Exercise 1: Taylor Series Approximation for Sine Function
 * Assignment 7 - IPFCE 2025
 * 
 * Implement the taylor_sine function that calculates the sine of x
 * using Taylor series approximation with n terms.
 * 
 * Taylor series for sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
 */

#include "include/taylor_sine.h"
#include <math.h>
#include <stdio.h>

/* 
 * Calculate sine using Taylor series approximation
 * x: input value in radians
 * n: number of terms in the series
 * Returns: approximation of sin(x)
 */
int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}


double taylor_sine(double x, int n) {
    double result = 0;
    // TODO: Implement the Taylor series approximation for sine
    // Hint: The series is: x - x^3/3! + x^5/5! - x^7/7! + ...
    // Use a loop to calculate n terms of the series

    for (int i = 0; i < n; i++)
    {
      int antal = 2 * i + 1;
      result = result + pow(-1, i) * pow(x, antal) / factorial(antal);
    }
    
    return result; 
}
