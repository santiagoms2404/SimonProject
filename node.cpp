/*
Programmer  : Santiago Marin
Program     : Node class Implementation
Date        : April. 23, 2022
Last Changed: April. 28, 2022

*/

#include"node.hpp"
#include<time.h>
using namespace std;

Node::Node(){
    key = 0;
    data = ' ';
    next = NULL;
  }

Node::Node(int k, char d) {
    key = k;
    data = d;
    next = NULL;
  }

char Node::RandColor(int level){
  srand(time(NULL));
  char colors[4] = {'R','B','Y','G'};
  char randomColor[level];
  for(int i=0; i<level; i++)
  {
    int ranIndex = rand() % 4;
    randomColor[i] = colors[ranIndex];
    return randomColor[i];
  }

    
}



