#include <iostream>
#include <vector>
using namespace std;


bool isArithmeticProgression(const vector<int>& arr) {
    if (arr.size() <= 1) return true;

    int diff = arr[1] - arr[0];
    for (size_t i = 2; i < arr.size(); ++i) {
        if (arr[i] - arr[i-1] != diff) {
            return false;
        }
    }
    return true;
}

bool isGeometricProgression(const vector<int>& arr) {
    if (arr.size() <= 1) return true;

    int ratio = arr[1] / arr[0];
    for (size_t i = 2; i < arr.size(); ++i) {
        if (arr[i] / arr[i-1] != ratio) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr;
    int n, num;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr.push_back(num);
    }
    
    if (isArithmeticProgression(arr)) {
        cout << "The array follows an arithmetic progression." <<endl;
    } else if (isGeometricProgression(arr)) {
        cout << "The array follows a geometric progression." <<endl;
    } else {
        cout << "The array does not follow either progression." <<endl;
    }

    return 0;
}
