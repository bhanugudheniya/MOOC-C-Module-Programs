#include<iostream>
using namespace std;

int Add(int a, int b){
    return(a+b);
}

double Add(double c, double d){
    return(c+d);
}

// same parameter but type is different

int main(){
    int x = 5, y = 6, z;
    z = Add(x,y);   // int Add(int, int)
    cout<<"int sum = " <<z <<endl;

    double s = 3.5, t = 4.25, u;
    u = Add(s,t);   // double Add(double, double)
    cout<<"double sum = " <<u <<endl;
}