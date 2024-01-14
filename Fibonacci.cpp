#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Number ?";
    cin>>a;

    int first=0,second=1,sum;
    for (int i = 0; i < a; i++)
    {
        if(i<=a){
            cout<<first<<" ";
        }
        sum=first+second;
        first=second;
        second=sum;
    }
    return 0;
}