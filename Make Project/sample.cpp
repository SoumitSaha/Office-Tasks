#include<iostream>
#include "functions.h"

using namespace std;

int main(){
    functions func;
    cout << "5!  = " << func.factorial(5) << endl;
    cout << "5^2 = " << func.power(5, 2) << endl;
    return 0;
}