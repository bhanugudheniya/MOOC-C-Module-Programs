#include<iostream>
using namespace std;

enum E{
    C0 = 0, C1 = 1, C2 = 2
};

int main(){
    E a = C1, b = C2;
    int x = -1;
    x = a + b;  // operator + for int
    cout<<x <<endl;
}