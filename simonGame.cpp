/*
Programmer  : Santiago Marin
Program     : Queue class Interface
Date        : April. 23, 2022
Last Changed: April. 28, 2022

*/

#include"simonGame.hpp"
using namespace std;

SimonGameQueue::SimonGameQueue() {
  front = NULL;
}

bool SimonGameQueue::Empty() {
  if(front==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SimonGameQueue::CheckIfKeyExist(Node *n){
  Node *temp = front;
  bool exist=false;
  while(temp!=NULL){
    if(temp->key==n->key) {
      exist=true;
      n->key+1;
      temp=n->next;
    }
  break;
  }
  return exist;
}

void SimonGameQueue::EnQueueNextLevel(Node *n){
  if (Empty()) {
    front = n;
  }

  else if(CheckIfKeyExist(n)) {
    Node *temp=front;
    front = n+1;
    temp->key++;
    front->next=temp++;
    front=temp;
  }

    else {
    front->next=n;
    front=n;
 
  }
}

int SimonGameQueue::Level() {
  int count=1;
  Node *temp=front;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
    }
  return count;
}

void SimonGameQueue::Display() {
  if(Empty()){
    cout << "Queue is Empty" << endl;
  }
  else{
  cout << "All colors in the sequence are :" << endl;
  Node *temp=front;
  while(temp!=NULL){ 
    cout << temp->key++ << temp->RandColor(Level()) << "->" << endl;
    temp=temp->next;
  }
  cout<<endl;
  }
  
}

    

