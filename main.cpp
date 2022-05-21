#include <iostream>
using namespace std;
int main()
{

    int a=2;
    int b=4;
    int c=6;
    int d = (a+b+c)/3;
    cout<<d<<endl;
             //4 students marks average - 3 methods
//Using Integer
    int m1,m2,m3,m4,avg;
    cout<<"Enter marks: " << endl;
    cin>> m1>> m2>> m3>> m4;
  
    avg = (m1+m2+m3+m4)/4;
    cout<<"Average: "<<avg;

//using arrays
    int m[4], sum=0, avg,i; 
    for (i =1; i<=4; i++) 
    {
        cout<<"Enter marks: ";
        cin>>m[i];
        sum=sum+m[i];
    }
    avg = sum/4;
    cout<<"Avg Marks= "<<avg;

//using structures

    return 0;
}
