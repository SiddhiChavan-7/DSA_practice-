#include<iostream>
using namespace std;

int main(){

    int binExpo= m;
    int ans=1;
    while(binExpo>0)
    {
        if(binExpo%2==1)
        {
            ans=ans*m;
            }
            m=m*m;
            binExpo=binExpo/2;
            }
            cout<<ans;
            return 0;

}