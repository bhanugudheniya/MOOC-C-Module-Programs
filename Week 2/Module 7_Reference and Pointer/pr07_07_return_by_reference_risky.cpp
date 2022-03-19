#include<iostream>
using namespace std;

int& Return_ref(int &x){
    int t = x;
    t++;
    return(t);
}

int main(){
    int a = 10, b = Return_ref(a);
    cout<<"a = " <<a <<", b = " <<b <<endl;
    Return_ref(a) = 3;  // changes variable a
    cout<<"a = " <<a;
}