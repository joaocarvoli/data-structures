#include <iostream>

#include "../include/linked_list.hpp"

using namespace std;

LinkedList::LinkedList(){
  head = nullptr;
}

/*LinkedList::~LinkedList(){
  clear();
}*/

void LinkedList::add(int item){
  if(head == nullptr) head = new Node(item);
  else {
    Node* node = new Node(item);
    Node* temp = head;

    while(temp->next != nullptr){
      temp = temp->next;
    }
    temp->next = node;
  }
  _size += 1;
}


int LinkedList::removeOnceOccurrence(int num){
  if(head->data == num){
    head = head->next;
    printf("%d removed sucessfully!\n", num);
    _size -= 1;
    return 0;
  }
  else {
    Node* ancestor = head;
    Node* temp = head->next;

    while(temp->next != nullptr){
      if(temp->data == num){
        ancestor->next = temp->next;
        temp->next = nullptr;
        printf("%d removed sucessfully!\n", num);
        _size -= 1;
        return 0;
      }
      ancestor = temp;
      temp = temp->next;
    }
  }
  return 1;
}

void LinkedList::removeAllOccurrences(int num){
  if(head->data == num){
    head = head->next;
    _size -= 1;
  }
  else {
    Node* ancestor = head;
    Node* temp = head->next;

    while(temp->next != nullptr){
      if(temp->data == num){
        ancestor->next = temp->next;
        temp->next = nullptr;
        _size -= 1;
      }
      ancestor = temp;
      temp = temp->next;
    }
  }
}


void LinkedList::search(int num){
  Node* temp = head;
  int occurrences = 0;
  while(temp->next != nullptr){
    if(temp -> data == num) occurrences += 1;
    temp = temp->next;
  } 
  if(occurrences == 0) printf("%d is not in the list\n", num);
  else  printf("%d is in the list and it appears %d times\n", num, occurrences);
}

void LinkedList::print(){
  Node* temp = head;
  if(_size == 0) printf("The list has any element!\n");
  else {
    cout << "Elements: ";
    while(temp != nullptr){
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
  
}

int LinkedList::size(){
  return _size;
}