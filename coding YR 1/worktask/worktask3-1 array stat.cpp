//TODO รับarray 7 ค่า หา min max mean

#include <iostream>
#include <cmath>

using namespace std;

double getMax(double arr[], int size) {
  double max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

double getMin(double arr[], int size) {
  double min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}

double getMean(double arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}

int main() {
  double arr[7];
  for (int i = 0; i < 7; i++) {
    cout << "Enter a decimal number: ";
    cin >> arr[i];
  }

  cout << "Max: " << getMax(arr, 7) << endl;
  cout << "Min: " << getMin(arr, 7) << endl;
  cout << "Mean: " << getMean(arr, 7) << endl;

  return 0;
}