#include<iostream>
using namespace std;
/*
    print pattern of below form:
    continue
    *********
     *******
      *****
       ***
        *   
*/
int main(){
    int n;
    cout<<"enter the number of lines you want to print: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*n-1-(2*(i-1));j++){
            cout<<"* ";
        }
        cout<<endl;
    }    
    return 0;
}