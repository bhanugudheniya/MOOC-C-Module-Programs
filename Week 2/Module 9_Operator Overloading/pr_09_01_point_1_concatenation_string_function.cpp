#include<iostream>
#include<cstring>
using namespace std;

typedef struct _String{
    char *str;
}String;

int main(){
    String fName, lName, name;
    fName.str = strdup("Bhanu");
    lName.str = strdup(" Gudheniya");
    name.str = (char *)malloc(strlen(fName.str) + strlen(lName.str) + 1);

    strcpy(name.str, fName.str);
    strcat(name.str, lName.str);

    cout<<"First Name : " << fName.str <<endl;
    cout<<"Last Name : " <<lName.str <<endl;
    cout<<"Full Name : " <<name.str <<endl;
}

