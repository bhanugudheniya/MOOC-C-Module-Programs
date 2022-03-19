#include<iostream>
#include<vector>

using namespace std;

int main(){
    int count, sum=0;
    cout<<"Enter no. of elements : ";
    cin>>count;

    vector<int> arr;    //default size
    arr.resize(count);  // set resize
    for (int i = 0; i < arr.size(); i++){
        arr[i] = i;
        sum += arr[i];
    }
    
    cout<<"Array Sum: " <<sum;
}