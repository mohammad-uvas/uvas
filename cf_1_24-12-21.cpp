#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			arr[i]=a;
			sum+=a;
		}
		if(sum%n==0)
		{
			cout<<"0\n";
		}
		else
		{
			cout<<"1\n";
		}
	}
}