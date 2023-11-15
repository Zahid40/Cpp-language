#include <iostream>
using namespace std;
int sum(int a , int b){return (a + b);} 
int sum( double a , int b , float c){ return (a + b + c);}

int volume( int r , int h){ return (3.14*r*r*h);}
int volume(int a){ return (a*a*a);}
int volume(int l , int b , int h){ return (l*b*h);}

int main(){
    // function over loading detects which function is use for input
    cout<<sum(2 , 3)<<endl;
    cout<<sum( 67 , 56 , 34)<<endl;

    //gives volume as per number of inputs;
    cout<<"The volume of cube having side 5cm is "<<volume(5)<<" cubic cm"<<endl;
    cout<<"The volume of Cuboid ( 4,5,6)cm is "<<volume(4,5,6)<<" cubic cm"<<endl;
    cout<<"The volume of cylnder (r = 9 , h = 10)cm is "<<volume(9 , 10)<<" cubic cm"<<endl;
    return 0;
}