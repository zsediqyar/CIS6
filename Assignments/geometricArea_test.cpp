#include <iostream>
#include <math.h>
#include "GeometricArea.h"

using namespace std;

//Starting the MAIN function
int main ()
{
  char userReply;
  int numberOfSides;

    restart:
    cout << "Enter the number of sides: " << endl;
    cin >> numberOfSides;

    if (numberOfSides == 1);
    circleFunction();

    else if (numberOfSides == 3)
    triangleFunction();

    else if (numberOfSides == 4)
    squareFunction();

  else {
    cout<<"Sorry Amigo! Invalid Answer" << endl;
  }
  cout<< "Go again? (y/n)" << endl;
  cin >> userReply;
  if(userReply == 'y' || userReply == 'Y')
  goto restart;
  else if (userReply == 'n' || userReply == 'N'){
      terminate;
  }
  
  return 0;
}