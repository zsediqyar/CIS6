#include <iostream>
#include <fstream>

using namespace std;



int main ()
{

    fstream dataFile;

    cout<<" opening file ..." << endl;
    dataFile.open("demofile.txt", ios::out);

    cout<<"now writing data to the file" << endl;

    dataFile << "abc" << endl;
    dataFile << "def" << endl;
    dataFile << "ghi" << endl;
    dataFile << "jkl" << endl;

    dataFile.close();

    cout << "closing the file ... done" << endl;
    return 0;
}