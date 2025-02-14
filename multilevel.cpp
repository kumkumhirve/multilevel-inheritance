#include<iostream>
using namespace std;
class A
{
    public:
    
    void data(){
        cout<<"hello"<<endl;
        
    }
};

class B:public A
{
    public:
    
    void getdata(){
        
        
        cout<<"kumkum";
    }

};
int main(){
    B b1;
    b1.data();
    b1.getdata();
    return 0;



}