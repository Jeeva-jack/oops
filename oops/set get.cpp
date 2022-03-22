#include<iostream>
using namespace std;
class User
{
	private:
		string name;
		public:
			string getname()
			{
				return name;
			}
			void setname(string n)
			{
				name=n;
			}
};
int main(){
User o;
o.setname("jeeva");
cout<<"name :"<<o.getname();
return 0;
}

