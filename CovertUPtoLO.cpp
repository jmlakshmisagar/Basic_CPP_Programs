#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Enter valid Charecter : ";
    cin>>ch;


    if((ch>='A' && ch<= 'Z')||(ch>='a' && ch<='z')){
 
            if((ch>='A' && ch<='Z') && (ch>=1)){
                ch=ch+32;
            }
            else if(ch>='a' && ch<='z'){
                ch=ch-32;
            }
            cout<<"Converted Charecter : "<<ch;

    }
    else{
        cout<<"Enter Valid Charecter!...";
    }
    
    return 0;
}