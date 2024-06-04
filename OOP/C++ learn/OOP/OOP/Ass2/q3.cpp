#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n=2){
return pow(m, n);
}

int main(){
double m;
int n;

cout << "Enter the base m : " << endl;
cin >> m;
cout << "Enter the exponent n : " << endl;
cin >> n;

double result = power(m, n);
cout << "Result : " << result << endl;
return 0;

}

/*
Enter the base m : 
6
Enter the exponent n : 
2
Result : 36
*/
