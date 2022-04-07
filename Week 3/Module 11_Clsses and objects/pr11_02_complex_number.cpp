#include<iostream>
using namespace std;

class Complex{
    public:
        double re, im;  // Data members
};

int main(){
    // Object c declared, initialized
    Complex c = { 4.2, 5.3 };
    cout<<c.re << " " <<c.im;
}