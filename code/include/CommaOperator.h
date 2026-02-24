/*=============================================================
Project    : Revising CPP
file       : CommaOperator.h
Created By : Amash Shafi Jami
On         : 2026-02-24
=============================================================*/

#ifndef REVISE_CPP_COMMAOPERATOR_HEADER
#define REVISE_CPP_COMMAOPERATOR_HEADER
#include <iostream>

/*
var = (count = 19, incr = 10, count+1);
first assigns count the value 19, assigns incr the value 10,
then adds 1 to count, and finally, assigns var the value of the rightmost expression,
count+1, which is 20
*/

int main_Commaoperator(int argc, char const *argv[]) {
    int a, b, c;
    a = (b = 10, c = 20, b+90);
    //assigns 10 to b, 20 to c, and b+90 to a
    std::cout << "Value of a : " << a << "\n";
    std::cout << "Value of b : " << b << "\n";
    std::cout << "Value of c : " << c << "\n";

    //Making i and j loop with comma operator instead of traditional 
    // for (int i ...){
    //      for (int j...){
    //      }
    // }

    for (int i = 0, j = 10; i <= 10; i++, j--){
        std::cout << "i: " << i << ",\tj: " << j << "\n";
    }

    return 0;
}

#endif //!REVISE_CPP_COMMAOPERATOR_HEADER