#include<iostream>
using namespace std;
class Maths
{
public:
int a,b,c;
void add()
{
	cout<<"enter the velue of a-b"<<"\n";
	cin>>a>>b;
	c=a+b;
	cout<<"value of c"<<c<<"\n";
}	
void sub();
};
void Maths::sub()
{
	cout<<"enter the value of a-b"<<"\n";
	cin>>a>>b;
	c=a-b;
	cout<<"value of c"<<c<<"\n";
}
int main()
{
	Maths o;
	o.add();
	o.sub();
	return 0;
}
