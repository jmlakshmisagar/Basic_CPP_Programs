#include<iostream>

using namespace std;


int Hundred(int n){
    if(n<=100){
        cout<<n<<" ";
        Hundred(n+1);
    }
}


int main(){
    Hundred(1);
    return 0;
}