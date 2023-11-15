#include <iostream>
using namespace std;

class binary {
    private: string s;
    public: 
    void read(void);
    int chk(void);
    void reverse(void);
    void display(void);
};

void binary :: read(void){
    cout<<"ENter a valid binary number : ";
    cin>>s;
}

int binary :: chk(void){
    for(int i=0 ; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Invalid Binary Number"<<endl;
            exit(0);
        }
    }
}

void binary :: reverse(void){
    for(int i=0 ; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){

    cout<<"Your Binary Number is ";
    for(int i = 0 ; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}



int main(){
    binary b;
    b.read();
    b.chk();
    b.display();
    b.reverse();
    b.display();
    return 0;
}
