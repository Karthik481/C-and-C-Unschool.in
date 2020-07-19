#include<iostream>
using namespace std;
class cls
{
public:
cls()
{
do
{
string s;
int a,b;
cout<<"Enter Operation";
cin>>s;
cout<<"Enter 1st number";
cin>>a;
cout<<"Enter 2nd number";
cin>>b;
string resp;
if(s=="+")
cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
else if(s=="-")
cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
else if(s=="*")
cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
else if(s=="/")
cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b;
cout<<"\nDo you want to repeat the above steps(yes/no)";
cin>>resp;
if (resp=="yes")
continue;
if(resp=="no")
break;
 }while(1);
}
~cls()
{
cout<<"destructor called";
}
};
int main()
{
cls obj;
return 0;
}
