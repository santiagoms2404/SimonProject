/*
Programmer  : Santiago Marin
Program     : Queue class Interface
Date        : April. 23, 2022
Last Changed: April. 28, 2022

*/

#include"node.cpp"
using namespace std;

class SimonGameQueue : public Node{

public:
      Node *front;
      //Node *rear;
      
    SimonGameQueue();                         // Defult constructor
    bool Empty();                             // Check if the sequence is empty or not.
    bool CheckIfKeyExist(Node *n);            // Check if the key to the next round is already in the sequence.
    void EnQueueNextLevel(Node *n);           // Add an extra level or color to the sequence.  
    int Level();                              // Return the round or level you are.
    void Display();                           // Display all the colors in the sequeunce.
};
     




