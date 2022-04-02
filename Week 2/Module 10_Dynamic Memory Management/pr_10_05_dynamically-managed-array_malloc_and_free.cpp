#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int *a = (int *)malloc(sizeof(int)*3);
    a[0] = 10; 
    a[1] = 20; 
    a[2] = 30;

    for (int  i = 0; i < 3; ++i)
        cout<<"a[" <<i <<"] = " <<a[i] <<" | ";
        free(a);
    
}
