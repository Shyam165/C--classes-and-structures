#include<iostream>
using namespace std;
struct structure_name{
    int a;
    float b;
    char c;
    void getdata();
    void putdata();
};
void structure_name:: getdata(){
    cout<<"enter the value of a ,b and c:\n";
    cin>>a;
    cin>>b;
    cin>>c;
}
void structure_name:: putdata(){
    cout<<"the value of a is "<<a<<"\n";
    cout<<"the value of b is "<<b<<"\n";
    cout<<"the value of c is "<<c<<"\n";
    
}
int main(){
     structure_name obj1;
     obj1.getdata();
     obj1.putdata();

}