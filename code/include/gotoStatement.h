/*=============================================================
Project    : Revising CPP
file       : gotoStatement.h
Created By : Amash Shafi Jami
On         : 2026-02-27
=============================================================*/

#ifndef REVISE_CPP_GOTOSTATEMENT_HEADER
#define REVISE_CPP_GOTOSTATEMENT_HEADER
#include <iostream>

int main_Gotostatement(int argc, char const *argv[]) {
    int a = 1;

    LOOP1: // Decl A Loop 
    do {
        (a % 2 == 0) ? std::cout << "Even\n" : std::cout << "Odd\n";

        if (a % 20 == 0)
            goto AnotherLoop;

        a++; 
    } while (a <= 50);

    return 0;

    AnotherLoop: // Another Loop
    do {
        if (a == 20) std::cout << "Entered new loop\n";
        (a % 2 == 0) ? std::cout << "Even\n" : std::cout << "Odd\n";
        a++;
    } while (a <= 70);


    return 0;
}

#endif //!REVISE_CPP_GOTOSTATEMENT_HEADER