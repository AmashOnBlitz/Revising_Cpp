/*=============================================================
Project    : Revising CPP
file       : FunctionParameters.h
Created By : Amash Shafi Jami
On         : 2026-02-27
=============================================================*/

/*
Types of Multiple Function Parameters :
1. Fixed Number of Parameters
2. Variable Number of Parameters
3. Default Parameters
4. Named Parameters 
*/

#ifndef REVISE_CPP_FUNCTIONPARAMETERS_HEADER
#define REVISE_CPP_FUNCTIONPARAMETERS_HEADER
#include <string>
#include <iostream>

// Fixed Number of Parameters
void getDetails(int age, double height, const std::string& name) {
   std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << std::endl;
}

// Variable Number of Parameters
template<typename... Args>
void printNumbers(Args... numbers){
    ((std::cout << numbers << " "),...) << "\n";
    // This expands to 
    // (((std::cout << n1 << " ") << n2 << " ") << n3 << " ")
}

// Default Parameters
void greet(const std::string& name = "Guest", int age = 0) {
   std::cout << "Hello, " << name;
   if (age > 0) {
      std::cout << ". You are " << age << " years old.";
   }
   std::cout << std::endl;
}

struct Person {
   std::string name;
   int age;
   double height;
};

// Named Parameters 
void printPerson(const Person& p) {
   std::cout 
   << "Name: "      << p.name 
   << ", Age: "     << p.age 
   << ", Height: "  << p.height 
   << std::endl;
}

int main_Functionparameters(int argc, char const *argv[]) {
    getDetails(25, 5.6, "Sam");
    printNumbers(1,2,3,4,5,6,7,8,9,0);
    printNumbers(1.023, 3.542, 8.08264, 9.7634, 2.8973456);
    greet();
    greet("Alice",28);
    greet("Max",32);
    Person alex = {"Alex", 25, 5.9};
    printPerson(alex);
    return 0;
}

#endif //!REVISE_CPP_FUNCTIONPARAMETERS_HEADER