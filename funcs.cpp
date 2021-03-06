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


std::string upper (int length){
  std::string s;
  for (int i = 0; i < length; i ++){
    for (int j = 0; j < length; j++){
      if (j >= i) s += "*";
      else s += " ";
    }
    s += "\n";
  }
  return s;
}


std::string trapezoid (int width, int height){
  std::string s;
  if (width % 2 == 0 && height > width/2) return "Impossible shape!\n";
  else if (width % 2 != 0 && height > (width / 2 + 1)) return "Impossible shape!\n";

  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      if (j >= i && j < width - i) s += "*";
      else s += " ";
    }
    s += "\n";
  }
  return s;
}


std::string checkerboard3x3(int width, int height){
  std::string s;
  for (int i = 0 ; i < height; i++){
    for (int j = 0; j < width; j++){
      if ((i/3) % 2 == 0 && (j/3) % 2 == 0) s += "*";
      else if ((i/3) % 2 == 1 && (j/3) % 2 == 1) s += "*";
      else s += " ";
    }
    s += "\n";
  }
  return s;
}
