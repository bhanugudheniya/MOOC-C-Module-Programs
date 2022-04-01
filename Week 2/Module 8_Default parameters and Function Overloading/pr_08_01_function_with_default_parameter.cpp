#include<iostream>
using namespace std;

int IdentifyFunction(int a = 10) {  // Default value for parameter a
    return (a);
}

int main(){
    int x = 5, y;

    y = IdentifyFunction(x);    // Usual function call. Actual parameter taken as x = 5
    cout<<"y = " <<y <<endl;

    y = IdentifyFunction();
    cout<<"y = " <<y <<endl;
}