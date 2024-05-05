/**
 * @file sort.cpp
 * @name Perry Huang
 * @date 2024-05-05
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<double> v{18.1, 20.3, 18.3, 15.6, 22.5, 16.8, 17.6, 16.9, 18.2, 17.0, 19.3, 16.5, 19.5, 18.6, 20.0, 18.8, 19.1, 17.5, 18.5, 18.0};
  std::sort(v.begin(), v.end());
  size_t count = 1;
  for (double i : v) std::cout << '\n' << count++ << ' ' << i;
  std::cout << std::endl;
}
