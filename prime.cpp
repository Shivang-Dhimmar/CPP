#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<1)
        cout<<"Invalid number: less than 1"<<endl;
    else if(n==1)
        cout<<"Not Prime"<<endl;
    else{
        for(int temp=2;temp<=n/2;temp++){
            if(n%temp==0){
                cout<<"Not Prime"<<endl;
                return 0;
            }
        }
        cout<<"Prime"<<endl;
    }
    return 0;
}