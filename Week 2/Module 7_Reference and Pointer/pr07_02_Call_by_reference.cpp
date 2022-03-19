#include<iostream>
using namespace std;

void Function_under_param_test(int& /*Reference parameter*/, int /*Value parameter*/); 

int main(){
    int a = 20;
    cout<<"a = " <<a <<", &a = " << &a <<endl;
    Function_under_param_test(a, a);    // function call
}

void Function_under_param_test(int &b, int c){  // function definition
    cout<<"b = " <<b <<", &b = " << &b <<endl;
    cout<<"c = " <<c <<", &c = " << &c <<endl;
}