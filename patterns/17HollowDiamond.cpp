//hollow diamond pattern

 #include<iostream>
 using namespace std;

 int main(){
    //top part
int n=4;

    for(int i=0; i<n; i++){
        //1 space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
         
        }
           cout<<"*";
    }
 }