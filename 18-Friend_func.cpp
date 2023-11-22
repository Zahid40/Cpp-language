#include <iostream>

using namespace std;

class complex;

class calculator{
    public :
     int cal_real_sum(complex , complex);
    
};

class complex{
    int a , b;
    public:

    friend complex sumcomplex( complex o1 , complex o2); //means allows to asses object function and data or members

    friend int calculator :: cal_real_sum( complex o1 , complex o2);

     void setnumber(int n1 , int n2){
        a = n1; b = n2;
     }
     void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
     }

};

complex sumcomplex ( complex o1 , complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int calculator :: cal_real_sum(complex o1 , complex o2){
        return (o1.a + o2.a);
     }

int main(){
    complex c1 , c2 , sum;
    c1.setnumber(5 , 8);
    c1.printnumber();

    c2.setnumber(6 , 8);
    c2.printnumber();

    sum = sumcomplex(c1 , c2);
    sum.printnumber();

    calculator cal;
    cal.cal_real_sum(c1 , c2);
    return 0;
}