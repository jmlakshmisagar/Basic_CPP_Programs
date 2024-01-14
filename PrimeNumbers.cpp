#include<iostream>

using namespace std;

int main(){
   int a,k,count=0;

    cout<<"Enter the Number"<<endl;
    cin>>a;

   for (int k = 2 ; k <= a; k++)
   {
    if (a%k==0)
    {
        count=count+1;
    }
   }
   
   if (count==1)
   {
    cout<<"The Given number is a Prime";
   }
   else{
    cout<<"The given number is not a prime number";
   }
   
   

    return 0;
}