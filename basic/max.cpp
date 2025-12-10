//Calculate max of 2 number

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    if(a>b){
        cout << "Max is: " << a;
    }
    else{
        cout<<"Max is:"<<b;
    }
}