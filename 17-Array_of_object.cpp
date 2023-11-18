#include <iostream>
using namespace std;

class epmloyee{
    int id;
    int salary;

    public:
        void setid(void){
            salary = 20000;
            cout<<"Enter Employee id : ";
            cin>>id;
        }
        void getid(void){
            cout<<"The id of Employee is "<<id<<" and salary is "<<salary<<endl;
        }
};

int main(){
    epmloyee render[5];

    for (int i = 0; i < 5; i++)
    {
        render[i].setid();
        render[i].getid();
    }
    

}