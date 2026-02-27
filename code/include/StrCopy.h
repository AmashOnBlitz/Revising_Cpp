/*=============================================================
Project    : Revising CPP
file       : StrCopy.h
Created By : Amash Shafi Jami
On         : 2026-02-27
=============================================================*/

#ifndef REVISE_CPP_STRCOPY_HEADER
#define REVISE_CPP_STRCOPY_HEADER
#include <iostream>
#include <cstring>
struct Employee{
    char name[256];
};

int main_Strcopy(int argc, char const *argv[]) {
    Employee employeeOne;
    std::cout << "Employee name (before) : " << employeeOne.name << "\n";
    strcpy(employeeOne.name,"Foo Bar Baz");
    std::cout << "Employee name (after assigning) : " << employeeOne.name << "\n";
    return 0;
}

#endif //!REVISE_CPP_STRCOPY_HEADER