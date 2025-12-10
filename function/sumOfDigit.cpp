//calculate sum of digit

#include<iostream>
using namespace std;

int digitSum(int num){
    int sum = 0;
    while(num >0){
       int lastdig = num%10;
       num /=10;
       

       sum= sum+lastdig;
    }
    return sum;
}



int main(){

cout<<" sum = "<<digitSum(123)<<endl;
    return 0;
}