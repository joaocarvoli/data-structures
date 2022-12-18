void testSimpleLinkedList(){
  LinkedList list01 = LinkedList();
  list01.add(2);
  list01.add(2);
  list01.add(4);
  cout << list01 << endl; // Expected output: 2 2 4
  list01.search(2);
  list01.search(5);
  list01.removeOnceOccurrence(2); 
  list01.add(5);
  list01.add(7);
  cout << list01 << endl; // Expected output: 2 4 5 7
  list01.removeOnceOccurrence(5);
  cout << list01 << endl; // Expected output: 2 4 7
  list01.add(7);
  cout << list01 << endl; // Expected output: 2 4 7 7
  list01.removeOnceOccurrence(7);
  cout << list01 << endl; // Expected output: 2 4 7
  list01.removeOnceOccurrence(7);
  cout << list01 << endl;  // Expected output: 2 4

  printf("The size of Linked List is: %d\n", list01.size()); // Expected output: 2
}