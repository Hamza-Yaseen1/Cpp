#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your age:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You can Vote";
    }
    else{
        cout<<"You can't Vote";
    }
}