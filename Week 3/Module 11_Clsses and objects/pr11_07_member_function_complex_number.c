#include<stdio.h>
#include<math.h>

typedef struct Complex{
    double re, im;
}Complex;

double norm(Complex c){
    return sqrt(c.re*c.re + c.im*c.im);
}

void print(Complex c){
    printf("|%lf + %lf| = ", c.re, c.im);
    printf("%lf", norm(c));
}
int main(){
    Complex c = {4.2, 5.3};
    print(c);
}