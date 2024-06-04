#include<iostream>
using namespace std;
int main() {
int amt, note2000, note500, note100, note50, note10, rup5, rup2, rup1;
cout<<"Enter the amount to be rendered :- ";
cin>>amt;

// main
note2000=amt/2000;
amt %=2000;

note500=amt/500;
amt %=500;

note100=amt/100;
amt %=100;

note50=amt/50;
amt %=50;

note10=amt/10;
amt %=10;

rup5=amt/5;
amt %=5;

rup2=amt/2;
amt %=2;

rup1=amt;

// if ladder
cout<<"Denomination details :- "<<"\n";
if(note2000 != 0)
cout<< "2000 x "<<note2000<< "="<< note2000 * 2000<<"\n";

if(note500 != 0)
cout<< "500 x "<<note500<< "="<< note500 * 500<<"\n";

if(note100 != 0)
cout<< "100 x "<<note100<< "="<< note100 * 100<<"\n";

if(note50 != 0)
cout<< "50 x "<<note50<< "="<< note50 * 50<<"\n";

if(note10 != 0)
cout<< "10 x "<<note10<< "="<< note10 * 10<<"\n";

if(rup5 != 0)
cout<< "5 x "<<rup5<< "="<< rup5 * 5<<"\n";

if(rup2 != 0)
cout<< "2 x "<<rup2<< "="<< rup2 * 2<<"\n";

if(rup1 != 0)
cout<< "1 x "<<rup1<< "="<< rup1 * 1<<"\n";

return 0;
}

/*
Enter the amount to be rendered :- 23418
Denomination details :- 
2000 x 11=22000
500 x 2=1000
100 x 4=400
10 x 1=10
5 x 1=5
2 x 1=2
1 x 1=1

*/
