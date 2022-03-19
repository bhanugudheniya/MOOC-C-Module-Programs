#include<iostream>
#include<algorithm> // sort function

using namespace std;

// compare Function Pointer
bool compare(int i, int j){
    return (i > j);
} 

int main(){
    int data[] = {32, 71, 12, 45, 26};

    sort(data, data+5, compare);    // start ptr,  end ptr, function ptr

    for (int i = 0; i < 5; i++){
        cout<<data[i] << " ";
    }
    
}

//////// Asc Order ////////
// #include <iostream>
// #include <algorithm> // sort function
// using namespace std;
// int main () {
// int data[] = {32, 71, 12, 45, 26};
// sort(data, data+5);
// for (int i = 0; i < 5; i++)
// cout << data[i] << " ";
// return 0;
// }