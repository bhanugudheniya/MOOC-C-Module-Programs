
#include<stdio.h>

typedef struct Stack{
    char data[100];
    int top;
} Stack;

int main(){
    Stack s;
    s.top = -1;
    printf("%d", s.top);
}