#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a *factorial(a - 1);
    }
}

int fabbonachi(int b){
    if( b < 2){
        return b;
    }
    else{
        return fabbonachi(b-2) + fabbonachi(b-1);
    }
}

int main()
{
    int x = 0;
    cout<<"Factorial Number : ";
    cin>>x;
    cout<<"The Factorial of "<<x<<" is "<<factorial(x)<<endl;
    cout<<fabbonachi(10)<<endl;
    return 0;
}