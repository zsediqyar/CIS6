#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  //creating the file object.
  ofstream outputFile;
  ifstream inputFile;
  string name;


  outputFile.open("demofile.txt");

  cout <<"now writing data to the file." << endl;

  //writing data to the file
  outputFile << "Bach" << endl;
  outputFile << "Mozzart" << endl;

  //closing the file object
  outputFile.close();

  //reading the data from the file
  inputFile.open("demofile.txt");
  cout <<"=========================" << endl;
  cout<<"reading data from the inside the file." << endl;
  inputFile >> name;
  cout<< name << endl;

  inputFile.close();

  cout<<"done"<<endl;

  return 0;  
}
