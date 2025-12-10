//prime or not

#include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter a number: ";
     cin>>n;
     
     for(int i=2; i<=(n-1); i++){
        if(n%i == 0){
        cout<<n<<" is not a prime number";
        }
        else{
            cout<<n<<" is a prime number";
        }
     }


     if(n==1){
        cout<<"1 is neither prime nor composite";


     }
}