#include<iostream>
using namespace std;
int main()
{
	int i=1,j=0,num=1,n;
	cout<<"Enter the number till the pattern will print :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<i;
		cout<<"\n";
	}
	
	return 0;
}

/*
Enter the number till the pattern will print :6
1
22
333
4444
55555
666666
*/
