//Maximum Subarray sum

#include<iostream>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxSum= arr[0];
    for(int st=0; st<n; st++){
        int CurrentSum=0;
        for(int end=st; end<n; end++){
            CurrentSum = CurrentSum+arr[end];
            maxSum= max(CurrentSum,maxSum);
        }
    }
cout<<"max subarray sum = "<<maxSum<<endl;
return 0;

}