#include <iostream>
using namespace std;

class base{
    private:
      int a;
    protected:
      int b;
    public:
      int c;

};

class copy_1 : public base{
    public:
      int d;
};

class copy_2 : public copy_1{
    public:
     int e;
};

int main(){
    copy_2 audi;
    audi.e = 45;
    audi.d = 67;  // this variable from copy_1
    audi.c = 23;   //this varible from base
    return 0;
}