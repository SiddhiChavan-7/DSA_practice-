//calculate sum of numbers from 1 to N

#include<iostream>
using namespace std;



int sumOFnums(int n){
    
    int sum =0;
    for(int i=0; i<=n ; i++){
        sum = sum + i;
    }
    return sum;
}


int main(){

cout<<"The sum of numbers is: "<<sumOFnums(4);
    return 0;
}