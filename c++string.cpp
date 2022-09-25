#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100],str2[100];
	cin.getline(str1,100,'$');
	cin.getline(str2,10,'$');
	cout<<str1<<" "<<str2;
}