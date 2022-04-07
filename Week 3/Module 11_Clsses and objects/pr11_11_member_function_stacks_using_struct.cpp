#include<iostream>
using namespace std;

typedef struct Stack{
    char data_[100];
    int top_;
}Stack;

bool empty(const Stack &s){
    return (s.top_ == -1);
}

char top(const Stack &s){
    return s.data_[s.top_];
}

void push(Stack &s, char x){
    s.data_[++(s.top_)] = x;
}

void pop(Stack &s){
    --(s.top_);
}

int main(){
    Stack s;
    s.top_ = -1;
    char str[10] = "ABCDE";
    int i;

    for(i=0; i<5; ++i)
        push(s, str[i]);

    cout<<"Reversed String : ";
    while (!empty(s)){
        cout<<top(s); pop(s);
    }    
}