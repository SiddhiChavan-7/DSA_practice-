//given a persons age,find if they should get a driving licnece or not.

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";

    cin>>age;

    if(age>=18){
        cout<<"You are eligible for a driving licence.";
    }
    else{
        cout<<"You are not eligible for a driving licence.";
    }
}