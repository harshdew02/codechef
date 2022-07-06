#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    float cp;
    float ds;

    public:

    student(int c,int d){
        cp = c;
        ds = d;
    }

    student(const student &obj){
        this->cp = obj.ds*0.9;
        this->ds = obj.cp*1.25;
    }

    void print (void){
        cout<<"cp = "<<cp<<endl;
        cout<<"ds = "<<ds<<endl; 
    }
};


int main(){
    int x, y;
    cout<<"give cp and ds marks for sumit\n";
    cin>>x>>y;
    
    student sumit(x, y);

    student amit(sumit);

    cout<<"cp & ds data for sumit : "<<endl;

    sumit.print();

    cout<<"cp & ds data for amit : "<<endl;

    amit.print();

 return 0;
}