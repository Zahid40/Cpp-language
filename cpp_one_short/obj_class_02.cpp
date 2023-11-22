#include <iostream>
#include <string> //string library

using namespace std;

class Employee{
    private:
    int salary = 30000;
    public:

    //consturctor --> runs when object initilising first place you can arruments while initialising;
    Employee(string name , int epid , int salary){
        this->epid = epid;
        this->name = name;
        this->salary = salary;
    }
    string name;
    int epid;
    void print_details();
};

class programmer : Employee{
    public:
    int bonus;
};

void Employee::print_details(){
    cout<<"The employe id is "<<this->epid<<" and Name is "<<this->name<<" with salary "<<this->salary<<endl;
}

int main(){
    Employee vpl("Cortana" , 87584 , 60000);
    // vpl.name = "Cortana";
    // vpl.epid = 8753;
    vpl.print_details();

    

}