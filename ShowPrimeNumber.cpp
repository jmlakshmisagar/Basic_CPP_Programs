#include<iostream>

using namespace std;

int prime(int Num){
    int c=0;
    for (int i = 1; i <= Num; i++)
    {
        if(Num % i ==0){
            c++;
        }
    }
    return(c==2);
}

int main(){
    int a,b;
    cout<<"Start"<<endl;
    cin>>a;

    cout<<"End"<<endl;
    cin>>b;

    while (a<=b)
    {
        if(prime(a)){
            cout<<a<<" ";
        }
        a++;
    }
    return 0;
}