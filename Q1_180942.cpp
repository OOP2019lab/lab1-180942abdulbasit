#include<iostream>
using namespace std;
int main()
{
	int num=0, cal1=0, cal2=0;
	cout<<"Input:"<<endl;
	cin>>num;
	int cal=num+num;
	
	for(int i=1;i<=num;i++)
	{
		cal1=i+i;
		cal2=cal-cal1;
		for(int j=1;j<=i;j++)
		cout<<i;
		for(int j=1; j<=cal2;j++)
			cout<<"*";
		for(int j=1;j<=i;j++)
		cout<<i;
		cout<<endl;
	}

	for(int i=num+1,j=num-1;i<cal;i++,j--)
	{
		cal1=j+j;
		cal2=cal-cal1;
		for(int k=1;k<=j;k++)
		cout<<i;
		for(int k=1; k<=cal2;k++)
			cout<<"*";
		for(int k=1;k<=j;k++)
		cout<<i;
		cout<<endl;
	}

	return 0;
}