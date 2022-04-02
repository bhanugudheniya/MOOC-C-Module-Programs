#include<iostream>
using namespace std;

int main(){
    unsigned char buf[sizeof(int)*2];   // Byte buffer on stack

    // placement new in buffer buf
    int *pInt = new (buf) int (3);
    int *qInt = new (buf+sizeof(int)) int (5);

    int *pBuf = (int *)(buf + 0);   // *pInt in buf[0] to buf[sizeof(int)-1]
    int *qBuf = (int *)(buf + sizeof(int)); // *qInt in buf[sizeof(int)] to buf[2*sizeof(int)-1]

    cout<<"Buf Addr Int Addr - " <<pBuf <<" " <<pInt <<" | " <<qBuf <<" " <<qInt <<endl;
    cout<<"1st Int 2nd Int - " <<*pBuf <<" " <<*qBuf <<endl;

    int *rInt = new int(7); // heap allocation
    cout<<"Heap Addr 3rd Int - " <<rInt <<" " <<*rInt <<endl;
    delete rInt;    // delete integer from heap

    // No delete for placement new
}