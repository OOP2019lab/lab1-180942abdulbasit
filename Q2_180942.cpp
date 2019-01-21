#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("q2_180942_in.txt");
	int c=0;
	int b=0, p=0;
	if(fin.is_open())
	{
	fin>>c;
	for(int i=1;i<=c;i++)
	{
		fin>>b;
		fin>>p;
		cout<<pow(b,p)<<endl;
	}
	}
	else 
	{
		cout<<"File did not open"<<endl;
	}
	return 0;
	}
