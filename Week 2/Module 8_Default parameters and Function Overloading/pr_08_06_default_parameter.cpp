#include<iostream>
using namespace std;

int f(int a = 1, int b = 2);

int main(){
    int x = 5, y = 6;

    f();    // a = 1, b = 2
    f(x);   // a = x = 5, b = 2
    f(x,y); // a = x = 5, b = y = 6
}