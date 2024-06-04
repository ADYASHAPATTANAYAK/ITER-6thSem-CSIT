#include <iostream>
using namespace std;
int main() {
    string name;
    int units,n;
    double charges = 0, surcharge = 0;
    cout<<"Enter the number of users:";
    cin >> n;
    for(int i=0;i<n;i++)
    {
		cout << "Enter name of user: ";
		cin >> name;
		cout << "Enter number of units consumed: ";
		cin >> units;
             	cout << "---------------------------------------------"<< "\n";
		if (units <= 100)
		    charges = units * 0.6+50;
		else if (units > 100 && units <= 200)
		    charges = units * 0.8+50;
		else
		    charges = units * 0.9+50;
		surcharge = (charges > 300) ? charges * 0.15 : 0;
		charges += surcharge;
		cout << "Name: " << name << endl;
		cout << "Charges: Rs. " << charges << endl;
    }
    return 0;
}
