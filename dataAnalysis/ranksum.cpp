/**
 * @file ranksum.cpp
 * @name Perry Huang
 * @date 2024-05-05
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> before{147, 184, 232, 162, 198, 206, 177, 215,
                             148, 208, 167, 132, 150, 197, 160, 172};
  std::vector<int> after {138, 176, 219, 164, 194, 201, 181, 203,
                             149, 195, 159, 134, 149, 189, 159, 173};
  std::vector<int> diff;
  for (size_t i = 0; i < before.size(); ++i) diff.push_back(before[i] - after[i]);
  std::sort(diff.begin(), diff.end());

  size_t count = 0;
  for (int i : diff) std::cout << '\n' << count++ << ' ' << i;
  std::cout << std::endl;
}
