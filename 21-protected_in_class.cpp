#include <iostream>
using namespace std;

class base{
    private:
      int a;
    protected:  //this is same work as private but there is only difference it inherits.
      int b;
    public:
      int c;

};

class copy_1 : public base{
    public:
      int d;
};



int main(){
    return 0;
}