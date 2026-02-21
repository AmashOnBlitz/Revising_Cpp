/*=============================================================
Project    : Revising CPP
file       : integers.h
Created By : Amash Shafi Jami
On         : 2026-02-21
=============================================================*/

#ifndef REVISE_CPP_INTEGERS_HEADER
#define REVISE_CPP_INTEGERS_HEADER

#include <iostream>
#include <limits>

using NL_Int    = std::numeric_limits<int>;
using NL_UInt   = std::numeric_limits<unsigned int>;
using NL_LInt   = std::numeric_limits<long long int>;
using NL_ULInt  = std::numeric_limits<unsigned long long int>;

int main_Integers(int argc, char const *argv[]) {
    const std::string strSzOf       = "Size Of ";
    const std::string strMaxlimitof = "Max Limit Of ";
    const std::string strMinlimitof = "Min Limit Of ";
    const std::string strInt        = "int : "; 
    const std::string strUInt       = "Unsigned Int : "; 
    const std::string strLInt       = "long long Int : "; 
    const std::string strULInt      = "Unsigned long long Int : "; 

    std::cout 
    << strSzOf          << strInt << sizeof(int) 
    << "\n"
    << strMinlimitof    << strInt << NL_Int::min()
    << "\n"
    << strMaxlimitof    << strInt << NL_Int::max()
    << "\n";

    std::cout 
    << strSzOf          << strUInt << sizeof(unsigned int)
    << "\n"
    << strMinlimitof    << strUInt << NL_UInt::min()
    << "\n"
    << strMaxlimitof    << strUInt << NL_UInt::max()
    << "\n";

    std::cout 
    << strSzOf          << strLInt << sizeof(long long int)
    << "\n"
    << strMinlimitof    << strLInt << NL_LInt::min()
    << "\n"
    << strMaxlimitof    << strLInt << NL_LInt::max()
    << "\n";

    std::cout 
    << strSzOf          << strULInt << sizeof(unsigned long long int)
    << "\n"
    << strMinlimitof    << strULInt << NL_ULInt::min()
    << "\n"
    << strMaxlimitof    << strULInt << NL_ULInt::max()
    << "\n";

   return 0;
}

#endif //!REVISE_CPP_INTEGERS_HEADER