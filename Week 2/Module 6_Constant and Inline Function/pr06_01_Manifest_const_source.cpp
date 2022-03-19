// 2 pi r - is the circumference, the total distance around the outside of a circle
#include<iostream>
#include<cmath>
using namespace std;

#define TWO 2               // consumed by cpp
#define PI 4.0*atan(1.0)    // consumed by cpp

int main(){
    int r = 10;
    double peri = TWO + PI * r;    // peri = 2 * 4.0*atan(1.0) * r;
    cout<<"Perimeter = " <<peri <<endl;

}

/*
atan => tan(inverse)
atan(1.0) => tan^-1(1.0)
tan^-1(1.0) = pi/4 => tan^-1(1.0)*4 = pi
*/