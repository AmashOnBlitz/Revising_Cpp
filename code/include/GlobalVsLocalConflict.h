/*=============================================================
Project    : Revising CPP
file       : GlobalVsLocalConflict.h
Created By : Amash Shafi Jami
On         : 2026-02-21
=============================================================*/

#include <iostream>

#ifndef REVISE_CPP_GLOBALVSLOCALCONFLICT_HEADER
#define REVISE_CPP_GLOBALVSLOCALCONFLICT_HEADER

int var = 100; // Global Variable 

int main_Globalvslocalconflict(int argc, char const *argv[]) {

    int var = 200; // Local Variable

    std::cout << "Accessing Local Var " << var; // Refers to Local Var
    
    std::cout << std::endl;

    std::cout << "Accessing Global Var " << ::var; // Refers to GLOBAL Var

    // :: ---> SRO (Scope Resolution Operator)
    // use SRO when you want to access any function or variable
    // outside the specific funtion or class 

    return 0;
}

#endif //!REVISE_CPP_GLOBALVSLOCALCONFLICT_HEADER