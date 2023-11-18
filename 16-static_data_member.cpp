#include <iostream>
using namespace std;

class employee {
    int eid;
    static int count; // also called class variable it stores data for different objects . use single variable for multiple class objects.

    public:
    void seteid(int id){ 
        eid = id;
        count++;}

    void display_eid(void){ cout<<"Employyee id : "<<eid;}

    //static memeber function used to access static variables only
    static void getcount(void){ cout<<" Employee Number is "<<count<<endl;}
};

int employee :: count = 100; // default value is 0

int main(){
    employee zahid,jaideep,vipin;

    zahid.seteid(1);
    zahid.display_eid();
    employee::getcount();

    jaideep.seteid(3);
    jaideep.display_eid();
    employee::getcount();

    vipin.seteid(2);
    vipin.display_eid();
    employee::getcount();


    return 0;
}