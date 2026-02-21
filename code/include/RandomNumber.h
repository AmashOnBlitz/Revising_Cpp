/*=============================================================
Project    : Revising CPP
file       : RandomNumber.h
Created By : Amash Shafi Jami
On         : 2026-02-21
=============================================================*/

#ifndef REVISE_CPP_RANDOMNUMBER_HEADER
#define REVISE_CPP_RANDOMNUMBER_HEADER

#include <iostream>
#include <ctime>
#include <cstdlib>

int main_Randomnumber(int argc, char const *argv[]) {
    std::srand(time(NULL)); 
    // It is always best to give time as a seed because a time 
    // can never repeat and everytime the random number will be new  
    // if you give any other no like 20 or 10 then each time the 
    // sequence of no generated will be same, like if you run the program twice
    // and generate two numbers then the two numbers willbe same or close to same
    // as the seed will be same

    int x;
    for (int i = 0; i < 10; i++){
        x = rand();
        std::cout << "Random Number " << i << " : " << x << std::endl;
    }
    return 0;
}

#endif //!REVISE_CPP_RANDOMNUMBER_HEADER