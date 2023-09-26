#include<iostream>
using namespace std;
int main(){
    int n;
    long long int fibo;
    cout<<"Enter a number:";
    cin>>n;
    if(n<1){
        cout<<"unvalid value: less than 1"<<endl;
        return 0;
    }
    else if(n==1)
        cout<<0<<endl;
    else if(n==2)
        cout<<1<<endl;
    else{
        int a=0,b=1;
        for(int temp=3;temp<=n;temp++){
            fibo=(long long)a+b;
            a=b;
            b=fibo;
        }
        cout<<fibo<<endl;
    }
    return 0;
}