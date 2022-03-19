// Call by reference

#include <iostream>
using namespace std;

void swap(int &, int &); // call by reference

int main(){
    int a = 10, b = 15;
    cout << "a = " << a << ", b = " << b << " to swap" << endl;
    swap(a, b); // natural call
    cout << "a = " << a << ", b = " << b << " on swap" << endl;
}

void swap(int &x, int &y){
    int t;
    t = x;
    x = y;
    y = t;
}
