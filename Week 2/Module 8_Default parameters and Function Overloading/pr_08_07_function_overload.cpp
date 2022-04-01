#include<iostream>
using namespace std;

int f();
int f(int);
int f(int, int);

int main(){
    int x = 5, y = 6;

    f();    // int f();
    f(x);   // int f(int);
    f(x,y); // int f(int, int);
}