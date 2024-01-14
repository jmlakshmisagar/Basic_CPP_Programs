
#include<iostream>

using namespace std;

int main(){
    float a;
    char t;
    cout<<"Enter Tempreture : ";
    cin>>a;
    cout<<"Enter Unit : ";
    cin>>t;

    if((t=='C')||(t=='c')){
        cout<<"F = "<<(a*9/5)+32;
    }
    else if((t=='F')||(t=='f')){
        cout<<"C = "<<(a-32)*5/9;
    }



    return 0;
}