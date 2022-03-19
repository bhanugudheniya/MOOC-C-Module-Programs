// correct
#include<iostream>
using namespace std;

int Ref_const(const int &x){
    return (x + 1); // not change value, only return
}

int main(){
    int a = 10, b;
    b = Ref_const(a);
    cout<<"a = " <<a <<" and" <<" b = " <<b;
}

//wrong

/*
#include<iostream>
using namespace std;

int Ref_const(const int &x){
    ++x;    // not allowed
    return (x);
}

int main(){
    int a = 10, b;
    b = Ref_const(a);
    cout<<"a = " <<a <<" and" <<" b = " <<b;
}
*/
