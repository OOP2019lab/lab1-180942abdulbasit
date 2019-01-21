#include <iostream>
using namespace std;

void create(int size)
{
    int *arr=new int[size];
	cout<<"Enter values in array: "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>*(arr+i);
	}
}
void sort(int arr[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		for (int j=0; j<size-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void show(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"  ";
	}
	delete [] arr;
}

int main()
{
	int *arr;
	int size=0;
	cout<<"Input size of array"<<endl;
	cin>>size;
	create(size);
	sort(arr,size);
	show(arr,size);

	
	
	return 0;
}
