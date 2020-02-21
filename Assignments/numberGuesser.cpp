// Name: Zaki Sediqyar
// Course: CIS 006 Intro to programming
// CRN: 44574
// Date: 3/11/2019
// Assignment:  Number Guesser




//pre processor directives
#include <iostream>
using namespace std;

//initiating the main function
int main() {

//declaring the constant variables
const int MAX = 100;
const int MIN = 1;

//declaring the normal variables
int newMax = MAX;
int newMin = MIN;

//counting the halfway/midpoint and assigning it to the variable
int halfway = (newMax + newMin) / 2;

//declaring the user response variables
char userReply;
char userGuess;

//creating a goto
gameStart:

//first initial message print on the console
cout <<"Guess a number between 1 and 100" << endl;
cout <<"H: Higher, L: Lower, C: Correct" << endl;

//running a loop
while (newMax != newMin || newMin != newMax) {
  cout <<"Is it " << halfway << "? (H/L/C)" << endl;
  cin >> userGuess;

  //conditional based on the user reply H
  if(userGuess == 'h' || userGuess == 'H')
  {
    newMin = halfway;
    halfway = (newMax + newMin ) / 2;
  }

  //conditional based on the user reply L
  else if (userGuess == 'l' || userGuess == 'L')
  {
    newMax = halfway;
    halfway = (newMax + newMin) / 2;
  }
  
  //conditional based on the user reply C
  else if (userGuess == 'c' || userGuess == 'C')
  {
    //Breaking the loop
    break;
  }
  
  //console print on a wrong character
  else {
    cout <<"Wrong Input!" << endl;
  }
} 

//asking if the user wants to play again
cout <<"Great! Do you want to play again? (y/n): " << endl;
cin >> userReply;

//checking if the user wants to play
if(userReply == 'y' || userReply == 'Y')

//initiating the goto
goto gameStart;


  return 0;
}