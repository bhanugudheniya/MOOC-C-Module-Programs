#include<iostream>
#include<stdlib.h>
using namespace std;

void *operator new(size_t n){   // Definition of Operator new
    cout<<"Overload new" <<endl;
    void *ptr = malloc(n);  // Memory allocated to ptr. Can be done by function operator new()
    return ptr;
}

void operator delete(void *p){  // Definition of operator delete
    cout<< "Overloaded deleted" << endl;
    free(p);    // Allocated memory released. Can be done by function operator delete()
}

int main(){
    int *p = new int;   // Calling overloded operator new
    *p = 30;            // Assign value to the location
    cout<<"The value is : " <<*p <<endl;
    delete p;           // Calling overloaded operator delete
}