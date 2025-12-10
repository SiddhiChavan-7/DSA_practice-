#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the positive integer:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of 1 to N numbers is:"<<sum;

    
    return 0;
}