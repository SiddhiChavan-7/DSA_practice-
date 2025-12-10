#include<iostream>
using namespace std;

int main(){
    int nums[]={17,10,-9,14,45};
    int size=5;
    int smallest= nums[0];
    int largest = nums[0];
    

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    cout<<"smallest num in array:"<<smallest<<endl;
    cout<<"largest num in array:"<<largest<<endl;

}