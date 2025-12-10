//linear search

#include <iostream>
using namespace std;

int Linear_Search(int arr[],int size,int target){

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int target=0;
    cout<< Linear_Search(arr,size,target);
   
    return 0;
}