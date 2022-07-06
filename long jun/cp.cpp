#include<bits/stdc++.h>
using namespace std;
class circle {
    int radius;
    public:
    void get(){
        cin>>radius; }
    void area(){
        float a ;
        a= 3.14*radius*radius;
        cout<<a<<endl;}
    void circum(){
        float b;
        b = 2*3.14*radius;
        cout<<b<<endl;}
};
int main()
{    circle c1 ;
    c1.get();
    c1.area();
    c1.circum();
 return 0;
}