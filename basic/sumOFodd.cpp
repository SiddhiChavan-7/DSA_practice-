//sum of all odd numbers

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter an number:";
//     cin>>n;
    
//     int sum = 0;

//     for(int i = 1; i<=n ;i++){
//         if(i % 2 != 0){
//             sum += i;
//         }
//     }
//     cout<<sum;
// }


//using while loop : sum of all the odd numbers

#include <iostream>
using namespace std;

int main(){
    int n = 5;

    int oddSum = 0;

    int i = 1;
    while(i <= n){
        if(i % 2 != 0){
            oddSum += i;
            i++;
    }
    cout<<"Odd sum is:"<<oddSum;
  }
  return 0;
}