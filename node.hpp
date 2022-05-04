/*
Programmer  : Santiago Marin
Program     : Node class Interface
Date        : April. 23, 2022
Last Changed: April. 28, 2022

*/

#include<iostream>
#include<time.h>
using namespace std;

class Node {
  public:
   int key;                 // Key of the node.
      char data;            // Data stored in the key.
      Node *next;           // A pointer to the next node.

  Node();                   // Defult constructor.
  Node(int k, char d);      // Constructor with two parameters, the key and the data.
  
  
  char RandColor(int level);         // Get a random color between (red, blue, yellow, green).
};

