#include<iostream>
using namespace std;
/*
    print pattern of below form:
    ********
    ***  ***
    **    **
    *      *
    *      *
    **    **
    ***  ***
    ******** 
    Above pattern is for n=4 
*/
int main(){
    int n;
    cout<<"enter the number for n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(i-1);j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }    
    return 0;
}