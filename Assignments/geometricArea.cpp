#include <iostream>
#include <math.h>
#include "GeometricArea.h"

using namespace std;



//FUNCTION HEADERS

//circile area calculation function
double circleFunction()
{
  //declaring the local variables
  double piVal = 3.14;
  double radiusVal;
  double cirArea;

  //asking the user for the radius of the circle
  cout<<"Enter The Value of Radius" << endl;
  cin>>radiusVal;

  //calculating and returning the value
  cirArea = piVal * (radiusVal*radiusVal);
  cout<<"Your Circle Area is " << cirArea << endl;

  return cirArea;
}

//Triangle Area Calculation Function
double triangleFunction()
{
  //local variables
  double sideOne;
  double sideTwo;
  double sideThree;
  double semi;
  double triArea;

  cout<<"Enter The Length of Side One" << endl;
  cin>>sideOne;
  cout<<"Enter The Length of Side Two" << endl;
  cin>>sideTwo;
  cout<<"Enter The Length of Side Three" << endl;
  cin>>sideThree;

  //calculating and returning
  semi = (sideOne + sideTwo + sideThree) / 2;
  triArea = sqrt(semi * (semi - sideOne) * (semi - sideTwo) * (semi - sideThree));
  cout<<"Your Triangle Area is " << triArea << endl;
  


  return triArea;
}


//Square Area Function
double squareFunction()
{
  //local variables
  double sideLength;
  double squareArea;

  cout<<"Enter the Length of One Side" << endl;
  cin>> sideLength;

  //caltulation
  squareArea = sideLength*4;

  cout<<"Your Square Area is " << squareArea << endl;

  return squareArea;
}