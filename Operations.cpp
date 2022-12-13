#include "Operations.h"
#include <iostream>
float Calc(float a,float b,char Operator){
    if(Operator == '+'){
        return a+b;
    } else if (Operator == '-'){
        return a-b;
    } else if (Operator == '*'){
        return a*b;
    } else if (Operator == '/'){
        if(b != 0){
            return a/b;
        } else {
            return INT_MAX;
        }
    }
    return NULL;
}
