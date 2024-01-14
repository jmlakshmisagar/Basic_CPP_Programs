#include<iostream>

using namespace std;

int main(){
    int a,b=1,c;
    cout<<"Number : ";
    cin>>a;

    for(int c=1; c<=a; c++){
        b=b*c;
    }
    cout<<"Factorial is "<<b<<endl; 
    return 0;
}