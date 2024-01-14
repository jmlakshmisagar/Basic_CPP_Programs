#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1 Number"<<endl;
    cin>>a;
    cout<<"Enter 2 Number"<<endl;
    cin>>b;
    cout<<"Enter 3 Number"<<endl;
    cin>>c;


    if(a<b && a<c){
        cout<<a<<" is Smallest";
    }
    else if (b<a && b<c)
    {
        cout<<b<<" is Smallest";
    }
    else{
        cout<<c<<" is Smallest";
    }
    


    return 0;
}