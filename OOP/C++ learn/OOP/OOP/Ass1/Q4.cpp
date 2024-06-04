#include<iostream>
#include<cmath>
using namespace std;
int Cardano(int a,int b,int c)
{
	float s=cbrt(a+b*sqrt(c))+cbrt(a-b*sqrt(c));
	if(s==1)
		return 1;
	else
		return 0;
}
int main()
{
	cout<<"Cardano Triplets are \n";
	for(int a=1;a<=100;a++)
	{
		for(int b=1;b<=100;b++)
		{
			for(int c=1;c<=100;c++)
			{
				if((a+b+c)<=100 && Cardano(a,b,c))
					cout<<"("<<a<<","<<b<<","<<c<<")"<<"\n";
			}
		}
	}
	return 0;
}

/*
Cardano Triplets are 
(2,1,5)
(5,1,52)
(5,2,13)
(8,3,21)
(11,4,29)
(14,5,37)
(17,6,45)
(17,9,20)
(17,18,5)
(20,7,53)
(23,8,61)

*/
