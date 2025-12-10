//Leetcode 136: Single Number(to find the unique element)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> nums{4,1,2,1,2};

    int ans =0;
    for(int value :nums){
        ans = ans^value;
    }
    cout<<ans;
}