#include<stdio.h>

typedef struct{
    int x, y;
} Point;

typedef struct{
    Point TL;   // Top-Left
    Point BR;   // Bottom-Right
} Rect;

int main(){
    Rect r = { {0,2}, {5,7} };
    printf("[(%d %d) (%d %d)]", r.TL.x, r.TL.y, r.BR.x, r.BR.y);
}