#include<iostream>
using namespace std;
 class Class_name{
    int length;
    int breadth;
    public:
    void getdata(int a,int b);
};
void Class_name::getdata(int a, int b){
    int area;
    length=a;
    breadth=b;
    area=length*breadth;
    cout<<"the area of rectangle is :"<<area;
}
int main(){
     Class_name obj1;
   obj1.getdata(23,45);
     

}