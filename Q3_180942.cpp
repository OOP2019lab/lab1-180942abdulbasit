#include<iostream>
using namespace std;
int main()
{
	int x=0, y=0;
	int *p, *q;
	x=20;
	y=30;
	p=&x;
	q=&y;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"p= "<<p<<endl;
	cout<<"q= "<<q<<endl;
	cout<<"*p= "<<*p<<endl;
	cout<<"*q= "<<*q<<endl;
	int temp1=x;
	x=y;
	y=temp1;
	cout<<"After swapping integers"<<endl;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"p= "<<p<<endl;
	cout<<"q= "<<q<<endl;
	cout<<"*p= "<<*p<<endl;
	cout<<"*q= "<<*q<<endl;
	int *temp2=p;
	p=q;
	q=temp2;
	cout<<"After swapping pointers"<<endl;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"p= "<<p<<endl;
	cout<<"q= "<<q<<endl;
	cout<<"*p= "<<*p<<endl;
	cout<<"*q= "<<*q<<endl;
	return 0;
}