/**
 * @file testIndep.cpp
 * @name Perry Huang
 * @date 2024-05-05
 */

#include <iostream>
#include <vector>
#include <cmath> // provides pow()

// Does the test for independence provided with the table (including total)
long double approx(std::vector<std::vector<long double>> table) {
  long double sum = 0;
  long double total = table[table.size() - 1][table[table.size() - 1].size() - 1];
  // iterating to all but the last rows and columns to avoid the totals
  for (size_t rows = 0; rows < table.size() - 1; ++rows) {
    for (size_t cols = 0; cols < table[rows].size() - 1; ++cols) {
      // value we are currently at in the table
      long double obs = table[rows][cols];
      // total value in our column / total * total value in our row
      long double est = table[table.size() - 1][cols] / total;
      est *= table[rows][table[rows].size() - 1] ;
      // the summation part, with val for debugging
      long double val = std::pow(obs - est, 2) / est;
      sum += val;

      // DEBUGGING ONLY
      // std::cout << "observed: " << obs << '\n';
      // std::cout << "estimated: " << est << '\n';
      // std::cout << "value of (obs - est)^2 / est: " << val << '\n';
      // std::cout << "estimated is doing: " << 
      //   table[table.size() - 1][cols] << " / " << total <<
      //   " * " << table[rows][table[rows].size() - 1] << '\n';
      // std::cout << "sum right now: " << sum << '\n';
    }
  }
  return sum;
}

int main() {
  std::vector<std::vector<long double>> table =
  {{13, 26, 39},
   {37, 72, 109},
   {78, 157, 235},
   {15, 21, 36},
   {143, 276, 419}};
  std::cout << approx(table) << std::endl;
}