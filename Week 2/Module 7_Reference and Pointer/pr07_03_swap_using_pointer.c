// Call by reference

#include<stdio.h>

void swap(int *, int *);    // call by reference

int main(){
    int a = 10, b = 15;
    printf("a = %d & b = %d to swap\n", a, b);
    swap(&a, &b);
    printf("a = %d & b = %d on swap\n", a, b);
}

void swap(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

// Call by value (wrong)
/*
#include<stdio.h>

void swap(int, int);    // call by value

int main(){
    int a = 10, b = 15;
    printf("a = %d & b = %d to swap\n", a, b);
    swap(&a, &b);
    printf("a = %d & b = %d on swap\n", a, b);
}

void swap(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
}

*/