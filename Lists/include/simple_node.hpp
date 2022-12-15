#pragma once

#include <iostream>

using namespace std;

struct Node {
  double data;
  Node *next = nullptr;

  Node(int data){
    this->data = data;
  }
};