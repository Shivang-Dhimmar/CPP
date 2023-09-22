#include<iostream>
#include<string>
#include <limits>
using namespace std;
/*This Program has only one bug if user enter a string which is start with digit then it
validate input and stops at runtime. */
int main(){
    int a;
    string temp;
    size_t readed_size;
    cout<<"Enter a number: ";
    getline(cin,temp);
    a=stoi(temp,&readed_size,10);   
    while(readed_size< temp.length()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input.  Re-enter the number: ";
        getline(cin,temp);
        a=stoi(temp,&readed_size,10);        
    }
    cout<<"a="<<a<<endl;
    return 0;
}