# Important Points To Keep In Mind!s

---

# :: ---> SRO (Scope Resolution Operator)
use SRO when you want to access any function or variable  
outside the specific funtion or class  
example : `::var`  
refer to includeGlobalVsLocalConflict.h  

---

# Constexpr
It calculates the value of a variable or the return value of a function at compile time  
If the given parameters are declared at compile time then the return  
value will be computed at compile time otherwise constexpr will be ignored  
example :  
```
constexpr int add(int x, int y){ 
    return x + y;
}
constexpr int b = (100 * a); (where 'a' is a const int);
```  
refer to constexpr.h

---

# std::srand and rand() ---> Random No Generation  
std::srand ---> sets the seed for random no generation.  
rand() ---> Gen a random no  

example :   
```
#include <ctime>
#include <cstdlib>
std::srand(time(NULL)); 
int x = rand();
```  
refer to RandomNumber.h  

---
