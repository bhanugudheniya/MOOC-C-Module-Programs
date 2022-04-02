#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

void *operator new[] (size_t os, char setv){    // Fill the allocated array with setv
    void *t = operator new(os);
    memset(t, setv, os);
    return t;
}

void operator delete[] (void *ss){
    operator delete(ss);
}

int main(){
    char *t = new('#') char[10];    // Allocated array of 10 elements and fill with '#'

    cout<<"p = " <<(unsigned int) (t) <<endl;

    for(int k = 0; k < 10; ++k)
        cout<<t[k];

    delete [] t;
}