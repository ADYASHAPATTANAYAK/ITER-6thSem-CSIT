#include<iostream>
using namespace std;

int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n*factorial(n-1);
}

int sumOfFactorial(int num){
int sum=0;
while(num > 0){
	int digit=num%10;
	sum += factorial(digit);
	num /= 10;
}
return sum;
}

int main() {
cout<<"Curious numbers upto 10000"<<"\n";
for( int i=1; i<= 10000; i++) {
	if(i == sumOfFactorial(i)){
		cout<< i<< "\n";
	}
}
return 0;
}

/*
Curious numbers upto 10000
1
2
145

*/
