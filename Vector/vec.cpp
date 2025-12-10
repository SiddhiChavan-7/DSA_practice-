#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec(5,6);
    for(int  val : vec){
        cout<<val<<endl;
    }
}