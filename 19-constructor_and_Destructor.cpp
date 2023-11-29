#include <iostream>
#include <cmath>
using namespace std;

class points{
    private :
    int x , y;
    public:
    //constructor  --> multiple types of constructor called overloading constructor
    // points(){       //default consturtor --> no parameters
    //     this->x = 0;
    //     this->y = 0;
    // }
    // points(int a , int b){   //parameterised constructor  --> arument with
    //     this->x = a;
    //     this->y = b;
    // }
    // points(int a){
    //     this->x = a;
    //     this->y = 0;
    // }
    points(int a=0 , int b = 0){   //constructor with default arguments
        this->x = a;
        this->y = b;
    }

    //by default it has a copy constructor or u can assign like -->
    points( points &obj){
        this->x = obj.x;
        this->y = obj.y;
    }

    //destructor 
    ~points(){
        cout<<"destroy"<<endl;
    }

    friend points distance( points p1 , points p2);
};

points distance ( points p1 , points p2){
    float p , q;
    p = p2.x - p1.x;
    q = p2.y - p1.y;
    float dis = sqrt(pow(p,2) + pow(q,2));
    cout<<"DIstance b/w is "<<dis<<endl;
}

int main(){
    points h(2,3) , l(4,6);
    distance(h,l);
    points(9); 

    //copy costuctor 
    points ccvv(h);
    // or
    points ccvvor = h;

    {
        points dccc;
    }
    return 0;
}