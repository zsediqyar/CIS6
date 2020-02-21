#include <iostream>

using namespace  std;


//void is used to let the compiler know that we are not
//expecting any specific type of the return from the function

void displayMessage()
{
  cout << "hello world" << endl;
}

int main() {
  cout<<"the following text is from inside the function" << endl;
  cout<<"===================" << endl;
  displayMessage();
  cout<<"===================" << endl;


  return 0;
}

//another exmaple of a function
#include <iostream>

using namespace std;

void qualify()
{
  cout<<"Congrats! you qualifed and the interest is going to be 12%" << endl;
}

void noQualify()
{
  cout<<"Sorry! you didn't qualify" << endl;
}
int main() {
  double salary;
  int years;

  cout<<"This program will determine if you qualify\n";
  cout<<"for our credit card. \n";
  cout<<"what is your annual salary? \n";
  cin>>salary;
  cout<<"how many years have you worked? \n";
  cin>>years;

  if(salary >= 17000.0 && years >= 2)
  {
    qualify();
  }
  else
  {
    noQualify();
  }

  return 0;
}


//more functions
#include <iostream>
using namespace std;


void func1(double, int);

int main()
{
  int x = 0;
  double y = 1.5;

  cout<< x << " " << y << endl;
  func1(x,y);
  cout<< x << " " << y << endl;
  return 0;
}

void func1(double a, int b)
{
  cout << a << " " << b << endl;
  a = 0.0;
  b = 10;
  cout << a << " " << b << endl;
}
