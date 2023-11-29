#include <iostream>
using namespace std;

class employee{
    public:
    int id;
    int salary = 300;
    //constructor
    employee(){};
    employee(int epid){
        this->id = epid;
    }
};

class programer : employee{
    public:
    string language = "Python";

    //constructor
    programer(int pid){
        this->id = pid;
    }
};


int main(){
    employee n1(1);
    cout<<n1.salary<<endl;

    programer n2(21);
    // cout<<n2.salary<<endl;   //cant accsible

}