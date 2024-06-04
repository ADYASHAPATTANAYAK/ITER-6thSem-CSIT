#include <iostream>
#include <vector>
using namespace std;

vector<int> c_vector(int M)
{
    vector<int> v(M); // Initialize vector with size M
    for (int i = 0; i < M; i++)
    {
        v[i] = 0; // Initialize each element to zero
    }
    return v;
}

int main()
{
    int M;
    cout << "Enter M: ";
    cin >> M;
    vector<int> v = c_vector(M);
    for (int i = 0; i < M; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
