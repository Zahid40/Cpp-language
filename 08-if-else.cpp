#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age = ";
    cin>>age;
    if(age < 18){
        cout<<"Invalid age to join party"<<endl;
    }
    else{
        cout<<"Congo , Invited to party !!"<<endl;
    }
}