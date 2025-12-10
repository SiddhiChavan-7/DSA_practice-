//Calculate "Simple Interest" from priciple ,rate,time

#include <iostream>
using namespace std;

int main(){
    double principal,rate,time,interest;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate:";
    cin>>rate;
    cout<<"Enter the time:";
    cin>>time;
    interest = (principal * rate * time) / 100;
    cout<<"The interest is: "<<interest;
    return 0;
}