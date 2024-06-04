#include <iostream>
using namespace std;
int main()
{
    int i, can[5], ballot, count[5];
    char ch;
    for (i = 0; i <= 5; i++)
    {
        count[i] = 0;
    }
    do
    {
        cout << "Enter the ballot number :" << "\n";
        cin >> ballot;
        switch (ballot)
        {
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        default:
            count[0]++;
        }
        cout << "Want to vote again ? \n";
        cin >> ch;
    } while (ch == 'y');
    for (i = 1; i <= 5; i++)
    {
        cout << "No:of votes for candidate " << i << "=" << count[i] << "\n";
    }
    cout << "Sploit ballots are " << count[0] << "\n";
    return 0;
}
