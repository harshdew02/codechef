#include<iostream>
using namespace std;
class students
{
    long int Phone;
    float weight;
    public:
    string FullName;
    int RollNo;
    char Gender;
    students(int Phone,float weight,string FullName, int RollNo, int Gender)
    {
        this->Phone = Phone;
        this->weight = weight;
        this->FullName = FullName;
        this->RollNo = RollNo;
        this->Gender = Gender;
    }
};
int main()
{
    long int Phone;
    float weight;
    string FullName;
    int RollNo;
    char Gender;
    cout<<"********NITRR Students Section(This app can store upto 20 students details only)**********"<<endl<<endl;
    for(int i=0;i<20;i++)
    {
        cout<<"Please enter your name: "<<endl;
        cin.getline(FullName);
        cout<<"Please enter your Rollno: "<<endl;
        cin>>RollNo;
        cout<<"Please enter your Gender: "<<endl;
        cin>>Gender;
        cout<<"Please enter your phone no.: "<<endl;
        cin>>Phone;
        cout<<"Please enter your weight: "<<endl;
        cin>>weight;
        students s(Phone,weight,FullName,RollNo,Gender);
    }
    cout<<"****Program ends here****";
    return 0;
}