#include<stdio.h>

typedef struct Complex{
    double re, im;
}Complex;

int main(){
    // variable c declared, initialized
    Complex c = { 4.2, 5.3 };
    printf("%lf %lf", c.re, c.im);
}



