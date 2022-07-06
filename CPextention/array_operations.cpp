#include<iostream>
using namespace std;
class array{
    int max_capacity;
    int current;
    int* arr;
    public:
    array(int max)
    {
        max_capacity = max;
        current = 0;
        arr = (int*)malloc(max_capacity);
    }
    int getMax()
    {
        return max_capacity;
    }
    int freeSpace()
    {
        return max_capacity - current;
    }
    int accessElement(int index)
    {
        return arr[index];
    }
    void insertElement(int index,int value)
    {
        for(int i = current-1;i>index;i--)
        {
                arr[i+1] =  arr[i];
        }    
        arr[index] = value;
        current++;  
    }
    void push(int value)
    {
        arr[current] = value;
        current++;
    }
    void showAll()
    {
        for(int i =0;i<current;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    array a(10);
    a.push(34);
    a.push(45);
    a.push(23);
    a.push(23);
    cout<<"Before insertion: "<<a.accessElement(1)<<endl;
    a.showAll();
    a.insertElement(1,34);
    cout<<"After insertion: "<<a.accessElement(1)<<endl;
    a.showAll();
    return 0;
}