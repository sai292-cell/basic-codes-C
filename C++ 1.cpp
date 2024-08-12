#include<iostream>
using namespace std;
int main()
{
	int v=10;
	const int cons=50;
	cout<<"initial value"<<endl;
	cout<<"value of variable"<<v<<endl;
	cout<<"value of constant"<<cons<<endl;
	v=20;
	cout<<"after changing value"<<v;
	cons=50;
	cout<<"after changing value of const"<<cons;
	return 0;
}
