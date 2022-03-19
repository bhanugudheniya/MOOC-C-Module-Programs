#include <iostream>
#include <cstring>
#include <stack> // Library codes
using namespace std;
int main()
{
    char str[10] = "ABCDE";
    stack<char> s; // stack class
    for (int i = 0; i < strlen(str); i++)
        s.push(str[i]);
    cout << "Reversed String: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

// c lng
// #include <stdio.h>
// #include <string.h>
// #include "stack.h" // User defined codes
// int main()
// {
//     char str[10] = "ABCDE";
//     stack s;
//     s.top = -1; // stack struct
//     for (int i = 0; i < strlen(str); i++)
//         push(&s, str[i]);
//     printf("Reversed String: ");
//     while (!empty(&s))
//     {
//         printf("%c ", top(&s));
//         pop(&s);
//     }
// }