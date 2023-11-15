#include <iostream>
using namespace std;
int main(){
    int a = 4;
    int * b = &a;
    cout<<"The value of b = "<<b<<" is equal to address of a = "<<&a<<endl;
    cout<<"the value of a by using derefrence operator * of b "<<*b<<endl;
    return 0;
}