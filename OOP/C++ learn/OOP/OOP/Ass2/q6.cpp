#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double sum = 0, mean, variance = 0, std_deviation;
    cout << "Enter the number of elements: ";
    cin >> N;

    double* numbers = new double[N];

    cout << "Enter " << N << " numbers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    mean = sum / N;

    for (int i = 0; i < N; i++) {
        variance += pow(numbers[i] - mean, 2);
    }

    variance /= N;
    std_deviation = sqrt(variance);

    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << std_deviation << endl;

  
    return 0;
}
