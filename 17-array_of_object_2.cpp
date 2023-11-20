#include <iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setdata(int x , int y){
        a = x;
        b = y;
    }
    void printnumber(){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }

    void setAddnum( complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main(){

    complex c1 , c2 , c3;

    c1.setdata(2 , 3);
    c1.printnumber();

    c2.setdata(6 , 7);
    c2.printnumber();

    c3.setAddnum(c1 , c2);
    c3.printnumber();

    return 0;
}