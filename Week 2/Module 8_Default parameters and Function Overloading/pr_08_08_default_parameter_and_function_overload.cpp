// • Function overloading can use default parameter
// • However, with default parameters, the overloaded functions should still be resolvable

#include<iostream>
using namespace std;

int Area(int a, int b = 10){
    return(a*b);
}

double Area(double c, double d){
    return(c*d);
}

int main(){
    int x = 10, y = 12, t;
    double z = 20.5, u = 5.0, f;

    t = Area(x,y);  
    cout<<"Area = " <<t <<endl;

    f = Area(z,u);
    cout<<"Area = " <<f <<endl;

    f = Area(z);
    cout<<"Area = " <<f <<endl;

    // Un-resolvable between int Area(int a, int b = 10) and double Area(double c, double d)
    // f = Area(z,y); -------- // Error: call of overloaded Area(double&, int&) is ambiguous
}