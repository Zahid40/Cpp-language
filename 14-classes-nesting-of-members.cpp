#include <iostream>
using namespace std;

class binary {
    private:
     string s;
        int chk(void);
    public: 
    void read(void);
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
    chk();
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
    chk();
    cout<<"Your Binary Number is ";
    for(int i = 0 ; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}



int main(){
    binary b;
    b.read();
    // b.chk(); --> dont call this is private func
    b.display();
    b.reverse();
    b.display();
    return 0;
}
