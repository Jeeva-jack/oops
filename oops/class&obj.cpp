#include<iostream>
using namespace std;
class Myclass{
public:
int num;
string mystring;
};
int main()
{
	Myclass myobj1;
	myobj1.num=12;
	myobj1.mystring="jeeva";
	
	cout<<myobj1.num<<"\n";
	cout<<myobj1.mystring;
	
	Myclass myobj2;
	myobj2.num=90;
	myobj2.mystring="jack shahir";
	
	cout<<"\n"<<myobj2.num<<"\n";
	cout<<myobj2.mystring;
	return 0;
}

