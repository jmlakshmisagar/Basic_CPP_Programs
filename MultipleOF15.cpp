
#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter the Number : ";
    cin>>a;

    for(int i=1; i<=15; i++){
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}