#include <iostream>
using namespace std;

// Two functions having the same signature but different return types cannot be overloaded

int Area(int a, int b)
{
    return (a * b);
}

int Area(int a, int b)
{
    return (a * b);
}
/*
-double Area(int,int): overloaded function differs only by return type from int Area(int,int)
-Area: redefinition; different basic types
*/

int main()
{
    int x = 10, y = 12, z = 5, t;

    double f;

    // Error C2568: =: unable to resolve function overload
    // Error C3861: Area: identifier not found

    t = Area(x, y);
    cout << "Multiplication = " << t << endl;

    f = Area(y, z); // Errors C2568 and C3861 as above
    cout << "Multiplication = " << f << endl;
}