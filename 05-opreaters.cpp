#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Value of a = ";
    cin>>a;
    cout<<"Value of b = ";
    cin>>b;
    // Arthemetic operators 
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    //assingment operator
    // a = 6 ; b= 8 

    // Comparision operator
    cout<<"The Value of a==b is "<<(a==b)<<endl;
    cout<<"The Value of a!=b is "<<(a!=b)<<endl;
    cout<<"The Value of a < b is "<<(a < b)<<endl;
    cout<<"The Value of a > b is "<<(a > b)<<endl;
    cout<<"The Value of a <= b is "<<(a <= b)<<endl;
    cout<<"The Value of a >= b is "<<(a >= b)<<endl;

    // Logical operator
    cout<<"The Value of ((a<10) && (b<10)) is "<<((a<10) && (b<10))<<endl;
    cout<<"The Value of ((a<10) || (b<10)) is "<<((a<10) || (b<10))<<endl;
    cout<<"The Value of (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}