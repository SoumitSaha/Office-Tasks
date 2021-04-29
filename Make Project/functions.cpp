#include "functions.h"

int functions::factorial(int x){
    if(x < 1){
        return -1;
    }
    if(x == 1){
        return 1;
    }
    return x * functions::factorial(x - 1);
}

long long functions::power(int base, int exponent){
    long long p = 1;
    for(int i=0; i<exponent; i++){
        p *= base;
    }
    return p;
}