#include <iostream>
using namespace std;
int f();
int f(int = 0);
int f(int, int);
int main()
{
    int x = 5, y = 6;
    //f(); // Error C2668: f: ambiguous call to overloaded function
    // More than one instance of overloaded function f
    // matches the argument list:
    // function f()
    // function f(int = 0)
    f(x);    // int f(int);
    f(x, y); // int f(int, int);
    return 0;
}