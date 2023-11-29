#include <iostream>
using namespace std;

class base1{
    private:
      int a;
    protected:
      int b;
    public:
      int c;

};

class base2{
    public:
     int d;
};

// multiple inheritace syntex
class multiple_derived : public base1 , protected base2{ 
    private:
    int e;
};


int main(){
   
    return 0;
}