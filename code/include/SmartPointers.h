/*=============================================================
Project    : Revising CPP
file       : SmartPointers.h
Created By : Amash Shafi Jami
On         : 2026-02-27
=============================================================*/

#ifndef REVISE_CPP_SMARTPOINTERS_HEADER
#define REVISE_CPP_SMARTPOINTERS_HEADER
#include <iostream>
#include <memory>

int main_Smartpointers(int argc, char const *argv[]) {
    // The unique_ptr is a smart pointer that owns only one object at a time
    // It transfers its ownership using std::move() function and 
    // automatically deletes the memory when the pointer goes out of scope
    std::unique_ptr<int> ptr1 = std::make_unique<int>(200);
    std::cout << "Value of pointer 1 : " << *ptr1 << "\n";

    std::unique_ptr<int> ptr2 = std::move(ptr1); // Moving the ownership of that memory patch to ptr2
    // std::cout << "Value of pointer 1 : " << *ptr1 << "\n"; // Crash, Because it no longer points to a memory 
    if (ptr1 == nullptr) std::cout << "Value of pointer 1 is nullptr\n"; // Evidence of pointer being null
    std::cout << "Value of pointer 2 : " << *ptr2 << "\n";

    // A shared_ptr is a smart pointer that allows multiple pointers to share ownership 
    // of the same object using reference counting, 
    // unlike unique_ptr where only one pointer can have the ownership of an object.
    // The reference count is decreased when a shared_ptr is destroyed and the object is 
    // automatically deleted when count reaches zero. 
    // You can use shared_ptr when you need multiple owners of the same object.


    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(300);
    std::cout << "\nsharedPtr1 value: " << *sharedPtr1 << std::endl;
    std::cout << "Reference count: " << sharedPtr1.use_count() << std::endl;
    std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Both can access the object
    std::cout << "After sharing:" << std::endl;
    std::cout << "sharedPtr1 value: " << *sharedPtr2 << std::endl;
    std::cout << "sharedPtr2 value: " << *sharedPtr2 << std::endl;
    std::cout << "Reference count: " << sharedPtr2.use_count() << std::endl;
    return 0;
}

#endif //!REVISE_CPP_SMARTPOINTERS_HEADER