// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> warPeaceTree(const char* filename) {
  // поместите сюда свой код
  BST<std::string> textTree;
  std::ifstream file(filename);
  if (!file) {
    std::cout << "File error!" << std::endl;
    return warPeaceTree;
  }
  std::string text = "";
  while (!file.eof()) {
    text = "";
    while (true) {
      char sym = file.get();
      if ((sym >= 65 && sym <= 90) || (sym >= 97 && sym <= 122))
        text += tolower(sym);
      else
        break;
    }
    warPeaceTree.addNode(text);
  }
  file.close();
  return warPeaceTree;
}
