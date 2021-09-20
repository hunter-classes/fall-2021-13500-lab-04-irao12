#include <iostream>
#include "funcs.h"

std::string box(int width, int height){
  std::string s;
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      s += "*";
    }
    s += "\n";
  }
  return s;
}

std::string checkerboard(int width, int height){
  std::string s;
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      if (i % 2 == 0){
        if (j % 2 == 0) s += "*";
        else s+= " ";
      }
      else{
        if (j % 2 == 0) s += " ";
        else s += "*";
      }
    }
    s += "\n";
  }

  return s;
}

std::string cross(int size){
  std::string s;
  for (int i = 1; i <= size; i++){
    for (int j = 1; j <= size; j++){
      if (i == j || j == size - i + 1 ) s += "*";
      else s += " ";
    }
    s += "\n";
  }
  return s;
}

std::string lower (int length){
  std::string s;
  for (int i = 0; i < length; i ++){
    for (int j = 0; j < length; j++){
      if (j <= i) s += "*";
      else s += " ";
    }
    s += "\n";
  }
  return s;
}
