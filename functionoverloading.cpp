#include<iostream>
using namespace std;
void area(float r)
{
    cout<<"Area of circle is"<<3.142*r*r;
}
float area(float br,float l)
{
    float f=br*l;
    return f;
}
void area(int b,int h)
{
    float f=0.5*b*h;
    cout<<"Area of triangle is "<<f;
}
int main()
{
    string shape;
    float r,l,br;
    int b,h;
    cout<<"enter shape(triangle/circle/rectangle)";
    cin>>shape;
    if(shape=="circle")
    {
        cout<<"enter radius";
        cin>>r;
        area(r);
    }
    if(shape=="rectangle")
    {
        cout<<"enter length";
        cin>>l;
        cout<<"enter breadth";
        cin>>br;
        cout<<"area of rectangle is "<<area(l,br);
    }
    if(shape=="triangle")
    {
        cout<<"enter base";
        cin>>b;
        cout<<"enter height";
        cin>>h;
        area(b,h);
    }
    return 0;
}
