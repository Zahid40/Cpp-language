#include <iostream>
using namespace std;

int c = 56;

int main(){
    int c = 34;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of c is ( this prints global c )"<<::c<<endl;

    float d = 45.6f; // f at end defins it is a float
    double f = 34.6;
    long double e = 23.4l; //l is at defins it is a long double
    cout<<"Float  = "<<d<<endl<<"Size of float = "<<sizeof(d)<<endl;
    cout<<"long double  = "<<e<<endl<<"Size of long double = "<<sizeof(e)<<endl;
    cout<<"double  = "<<f<<endl<<"Size of double = "<<sizeof(f)<<endl;
}