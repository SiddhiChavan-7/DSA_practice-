#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"size = "<<vec.size()<<endl; //size function

    vec.push_back(25); //push back function
    vec.push_back(35);
    vec.push_back(45);
    
    cout<<" after push back size = "<< vec.size()<<endl;
    
    vec.pop_back();  //pop back function
    cout<<" after pop back size = "<< vec.size()<<endl;

    cout<<vec.front()<<endl;  //front function

    cout<<vec.back()<<endl;  //back function

    cout<<vec.at(0)<<endl;   //at function



    // for(int value : vec){    //for each loop
    //     cout<<value<<endl;
    // }
    // return 0;
}