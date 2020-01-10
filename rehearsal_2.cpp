
#include<iostream>
using namespace std;

int main(){
    float sum=0,x,y;
     while(x!=0){
        
    cout<<"Enter x: ";
    cin>>x;

    if(x==0){
        cout<<"sum = "<<sum;
    }else
    {
        sum=sum+x;
    }
    if(x<0){
        sum=sum-x;
    }
    }
    return 0;
}
