#include <iostream>
using namespace std;

class work{
        private:
        int a , b;
        
        public :
        int c , d;
        void setData( int x , int y , int z);
        void getData(){
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
        }
    };

void  work :: setData( int x ,int y , int z ){
    a = x;
    b = y;
    c = z;
    d = 45;
}

int main(){
    work fly;
    fly.setData( 3, 5 , 7);
    fly.getData();

    //fly.a = 9;  --> cannt asses private data
    fly.c = 4;  //--> assible public data

    return 0;
}