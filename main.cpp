  #include <iostream>
  using namespace std;

int main() {
  int a;
  std::cout << "Введіть натуральне число a (a<=100): ";
  std::cin >> a;

  int digitCount = 0;
  int digitSum = 0;
  int lastDigit = a % 10;
  while (a > 0) {
    digitCount++;
    digitSum += a % 10;
    a /= 10;
  }
  int firstDigit = a;

  std::cout << "KIL SIM: " << digitCount << std::endl;
  std::cout << "sum c: " << digitSum << std::endl;
  std::cout << "ONE C: " << firstDigit << std::endl;
  std::cout << "OST C: " << lastDigit << std::endl;

  return 0;
}
