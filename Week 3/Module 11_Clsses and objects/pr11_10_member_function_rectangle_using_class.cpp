#include<iostream>
#include<cmath>
using namespace std;

class Point{
    public:
        int x, y;
};

class Rect{
    public:
        Point TL;
        Point BR;

    void computeArea(){
        cout<<abs(TL.x - BR.x) * abs(BR.y - TL.y);
    }
};

int main(){
    Rect r = {{0,2}, {5,7}};
    r.computeArea();
}
