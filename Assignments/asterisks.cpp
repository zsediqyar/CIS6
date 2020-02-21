// Name: Zaki Sediqyar
// Course: CIS 006 Intro to programming
// CRN: 44574
// Date: 2/8/2019
// Assignment: Asterisks


#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int astNum = 0;
  char asterik = '*';
  string userReply;

  restart:
  cout <<"How many asterisks do you want to print?" << endl;
  cin >> astNum;

  for (int i = 0; i < astNum; i++)
  cout << asterik << endl;

  cout <<"Do you want to go again? (y/n)" << endl;
  cin >> userReply;

  if(userReply == "y" || userReply == "Y") {
    goto restart;
  } else {
    cout <<"Invalid Key. Exiting" << endl;
  }
  return 0;
}