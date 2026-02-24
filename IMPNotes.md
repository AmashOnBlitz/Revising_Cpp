# Important Points To Keep In Mind : 

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

# Comma Operator (I.M.P)
```
var = (count = 19, incr = 10, count+1);  
```

first assigns count the value 19, assigns incr the value 10,  
then adds 1 to count, and finally, assigns var the value of the rightmost expression,  
count+1, which is 20  

Making i and j loop with comma operator instead of traditional :  
```
for (int i ...){
    for (int j...){

    }
}
```  
We will use :  
```
for (int i = 0, j = 10; i <= 10; i++, j--){
    std::cout << "i: " << i << ",\tj: " << j << "\n";
}
```

refer to CommaOperator.h  
  
---
