#include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,n3,n;
	cout<<"enter the number:";
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		n3=n1+n2;
		cout<<n3<<endl;
		n1=n2;
		n2=n3;
	}
}
