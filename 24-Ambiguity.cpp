//Ambiguity in c++ is a situation where the compiler cannot determine which of multiple possible interpretaitions od a construct is correct  . This can lead to errors in the program .
#include <iostream>
using namespace std;

class base1{
    public:
     void greet(){
        cout<<"Good Morning"<<endl;
     }
};
class base2{
    public:
     void greet(){
        cout<<"Good Night"<<endl;
     }
};
class base3{
    public:
     void greet(){
        cout<<"Thik hae"<<endl;
     }
};

class derived : public base1 , public base2 , public base3{
public:
void greet(){
    base1 :: greet();
}

};

int main(){

    derived oj1;
    oj1.greet();
    return 0;
}