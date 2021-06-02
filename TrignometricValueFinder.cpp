#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    //cout<<sqrt(9)<<endl;
    double radian,degree;
    double pi = 3.14159265;
    string ratio;
    cout<<"Enter your Trignometric Ratio:";
    cin>>ratio;
    cout<<"Enter your value in degree(Please enter a value below 91 only):";
    cin>>degree;
    radian = degree*(pi/180);
    if (ratio == "sin")
    {cout<<"sin("<<degree<<") :"<<sin(radian)<<endl;}
    else if (ratio == "cos")
    {cout<<"cos("<<degree<<") :"<<cos(radian)<<endl;}
    else if (ratio == "tan")
    {cout<<"tan("<<degree<<") :"<<tan(radian)<<endl;}
    else if (ratio == "cot")
    {double cot = 1/tan(radian);
    cout<<"cot("<<degree<<") :"<<cot<<endl;}
    else if (ratio == "sec")
    {double sec = 1/cos(radian);
    cout<<"sec("<<degree<<") :"<<sec<<endl;}
    else if (ratio=="cosec")
    {double cosec = 1/sin(radian);
    cout<<"cosec("<<degree<<") :"<<cosec<<endl;}
    else{cout<<"Wrong ratio, mate :(";}
}
