#include<iostream>
#include<cmath>
using namespace std;

typedef struct{
    int x, y;
}Point;

typedef struct{
    Point TL;
    Point BR;
} Rect;

void computeArea(Rect r){
    cout<<abs(r.TL.x - r.BR.x) * abs(r.BR.y - r.TL.y);
}

int main(){
    Rect r = {{0,2}, {5,7}};
    computeArea(r);
}