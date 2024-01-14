#include<iostream>

using namespace std;

int main(){
    int a,c=0;
    cout<<"Number : ";
    cin>>a;
 
    for(int i=2; i<=a; i++){
        if(a%i==0){
            c=c+1;
        }
    }
    if(c==1){
        cout<<"Enterd number was prime ";
    }
    else{
        cout<<"Enterd number was composite ";

    }
  
    return 0;
}