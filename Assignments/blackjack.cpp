// Name: Zaki Sediqyar
// Course: CIS 006 Intro to programming
// CRN: 44574
// Date: 2/11/2019
// Assignment: Black Jack


//Including preprocessor directives
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//initiating the main function
int main()
{
  //constants
  const int MIN_VALUE = 1;
  const int MAX_VALUE = 10;

  //variables
  int card1;
  int card2;
  int total;
  int card;
  char play21;
  char hitme;
  char userRestart;

  //get the system time
  unsigned seed = time(0);

  //see the random number generator
  srand(seed);

  restart:
  do
  {
    //generate the two random cards
    card1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    card2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    //sum both of the cards
    total = card1 + card2;

    //display the cards
    cout<<"First Cards: " << card1 << ", " << card2 << endl;
    //display the result of the total
    cout<<"Total: " << total << endl;


    do {

      //ask if the user wants another card
      cout<<"Do you want another card? (y/n): " << endl;
      cin>> hitme;
      if(hitme == 'y' || 'Y') {
        //if the user replies yes, generate another card and display it
        card = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        
        cout<<"Card: " << card << endl;
        total = total + card;
        cout<<"Total: " << total << endl;
      } 
    } 
    while (total == 21);

    if (total > 21)
      cout<<"Bust" << endl;
    if ( total == 21)
      cout<<"BlackJack" << endl;
    if (total >= 17 && total < 21)
      cout<<"You Win" << endl;
    if (total < 17)
      cout<<"You Lose" << endl;
  } 
  while (play21 == 'y' || play21 == 'Y'); 

  cout <<"Do you want to play again? (y/n)" << endl;
  cin >> userRestart;

  if(userRestart == 'Y' || userRestart == 'y') {
    goto restart;
  } else if (userRestart == 'n' || userRestart == 'N') {
    exit(0);
  }
  
  return 0; 
}