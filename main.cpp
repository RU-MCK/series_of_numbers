#include <iostream>
using namespace std;
int main() {
  int numbers[15] = {7, 12, 3, 4, 14, 6, 11, 8, 13, 7, 1, 2, 9, 5, 10};

  int sum = 0, max, min;
  max = min = numbers[0];
  for (int i = 0; (i < 15); i++) {
    if (numbers[i] < min) min = numbers[i];
    if (numbers[i] > max) max = numbers[i];
    sum += numbers[i];
  }
  int result = sum - ((max + min) * (14 / 2));
  cout << result << endl;
}
