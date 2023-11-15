#include <iostream>

using namespace std;
int main(){
    int a = 5;
    int & b = a; //reference variable
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    //typecasting
    float c = 67.45;
    int d = int(c);
    cout<<"The value of c in INTEGER is "<<int(c)<<endl;
    cout<<(int)c<<endl;
    cout<<"The value of d is "<<d<<endl;
}
