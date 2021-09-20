#include <iostream>
#include "funcs.h"

int main(){
  std::string result;
  std::cout << "Testing Task A: box\n" << '\n';
  result = box(3,5);
  std::cout << "box(3,5):\n";
  std::cout << result;
  std::cout << "------------------\n";
  result = box(9,6);
  std::cout << "box(9,6):\n";
  std::cout << result;
  std::cout << "------------------\n";
  result = box(5,9);
  std::cout << "box(5,9):\n";
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task B: checkerboard" << '\n';
  result = checkerboard(11, 6);
  std::cout << "checkerboard(11, 6):"<< '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = checkerboard(20, 10);
  std::cout << "checkerboard(20, 10):"<< '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = checkerboard(8, 15);
  std::cout << "checkerboard(8, 15):"<< '\n';
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task C: cross" << '\n';
  result = cross(5);
  std::cout << "cross(3):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = cross(8);
  std::cout << "cross(8):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = cross(13);
  std::cout << "cross(13):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task D: lower" << '\n';
  result = lower(6);
  std::cout << "lower(6):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = lower(9);
  std::cout << "lower(9):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = lower(13);
  std::cout << "lower(13):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task E: upper" << '\n';
  result = upper(5);
  std::cout << "upper(5):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = upper(8);
  std::cout << "upper(8):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = upper(12);
  std::cout << "upper(12):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task F: trapezoid" << '\n';
  result = trapezoid(12, 5);
  std::cout << "trapezoid(12, 5):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = trapezoid(7, 4);
  std::cout << "trapezoid(7, 3):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = trapezoid(12, 7);
  std::cout << "trapezoid(12, 7):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";
  result = trapezoid(7, 5);
  std::cout << "trapezoid(7, 5):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";

  std::cout << "\nTesting Task G: checkerboard3x3" << '\n';
  result = checkerboard3x3(16, 11);
  std::cout << "checkerboard3x3(16, 11):" << '\n';
  std::cout << result;
  std::cout << "------------------\n\n";
  result = checkerboard3x3(27, 27);
  std::cout << "checkerboard3x3(27, 27):" << '\n';
  std::cout << result;
  std::cout << "------------------\n\n";
  result = checkerboard3x3(14, 8);
  std::cout << "checkerboard3x3(14, 8):" << '\n';
  std::cout << result;
  std::cout << "------------------\n";

  return 0;
}
