/*=============================================================
Project    : Revising CPP
file       : constexpr.h
Created By : Amash Shafi Jami
On         : 2026-02-21
=============================================================*/

#ifndef REVISE_CPP_CONSTEXPR_HEADER
#define REVISE_CPP_CONSTEXPR_HEADER
#include <iostream>

// Constexpr ---> It calculates the value of a variable or the return 
// value of a function at compile time

constexpr int add(int x, int y){ 
    // If the given parameters are declared at compile time then the return 
    // value will be computed at compile time otherwise constexpr will be ignored; 
    return x + y;
}

constexpr long long int factorial(int n) {
   return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main_Constexpr(int argc, char const *argv[]) {
    const int a = 99;
    int b = 101;
    int c = add(a,b);
    std::cout << "Computed Integer : " << c << std::endl; 
    // constexpr int d = (8576 * b); --> wrong a must be a const value
    constexpr int d = (100 * a) ;
    std::cout << "Constexpr Integer : " << d << std::endl;

    // Another Nice Real World Usage Of Constexpr 
    long long int f = factorial(20); 
    // Factorial calculation for such large number will be expensive (answer is 2432902008176640000)
    // Thats why we use costexpr here to make our program fast
    std::cout << "Factorial : " << f << std::endl;

    return 0;
}

#endif //!REVISE_CPP_CONSTEXPR_HEADER

/*

Difference : 

    Without contexpr : 
    Milliseconds      : 447
    Ticks             : 4473911
    TotalDays         : 5.17813773148148E-06
    TotalHours        : 0.000124275305555556
    TotalMinutes      : 0.00745651833333333
    TotalSeconds      : 0.4473911
    TotalMilliseconds : 447.3911

    Without contexpr: 
    Milliseconds      : 31
    Ticks             : 315350
    TotalDays         : 3.64988425925926E-07
    TotalHours        : 8.75972222222222E-06
    TotalMinutes      : 0.000525583333333333
    TotalSeconds      : 0.031535
    TotalMilliseconds : 31.535


    There is a visible difference of 416 ms, which is quite large amount of time!
*/