/**
 * @file sort.cpp
 * @name Perry Huang
 * @date 2024-05-05
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> v{36, 25, 32, 38, 28, 35, 27, 20, 15, 29, 18, 22};
  std::sort(v.begin(), v.end());
  size_t count = 1;
  for (double i : v) std::cout << '\n' << count++ << ' ' << i;
  std::cout << std::endl;
}
