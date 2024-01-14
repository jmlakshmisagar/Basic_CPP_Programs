#include<iostream>

using namespace std;

int main(){
     int a;
    cout<<"Enter number of days : ";
    cin>>a;

    if(a<=0){
        cout<<"Enter valid days!..";
    }
    else{
        float years=a/365;
        float weeks=a/7;
        cout<<"Approx year is "<<years<<" and weeks is "<<weeks;
    }
    return 0;
}