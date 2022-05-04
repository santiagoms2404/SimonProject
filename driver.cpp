/*
Programmer  : Santiago Marin
Program     : Driver file for simon game 
Date        : April. 23, 2022
Last Changed: April. 28, 2022

*/
#include"simonGame.cpp"
int main() {
  SimonGameQueue q;
  int option;
  char userSequence;
 
  do {
    cout << "Welcome to the Simon Game! "
     <<"Select Option number to play. Enter 0 to exit." << endl;
    cout << "You can enter the first letter of the color example -> ('R','B','Y','G') " << endl;
    cout << "0. Exit"<< endl;
    cout << "1. Play" << endl;
    cout << "2. Clear Screen" << endl ;

    cin >> option;
      
     Node * new_node = new Node();
    
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Get ready to memorize the sequence of colors... " <<endl;
      cout << "You are in the level " <<q.Level()<< "!" <<endl;
      q.EnQueueNextLevel(new_node);
      q.Display();
      cout << "enter the color sequence: "<< endl;
      cin >> userSequence;
      break;
    case 2:
      system("clear");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}


