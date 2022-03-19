#include<iostream>
#include<algorithm> // binary search function
using namespace std;

int main(){
    int data[] = {1, 2, 3, 4, 5};
    int k = 3;

    if(binary_search(data, data+5, k)){
        cout<<"found!" << endl;
    }
    else{
        cout<<"not found!";
    }
}