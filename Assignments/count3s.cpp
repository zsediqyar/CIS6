//Name:         Zaki Sediqyar
//Course:       CIS 006 Intro to Programming
//CRN:          23203/23204
//Date:         3/4/2019
//Assignment:   Count3s A5 sample Program


#include <iostream>
#include <fstream>

using namespace std;


int main ()

{
    ifstream myFile;        // creating the InFile stream object
    int threes;             // defining an Integer type variable 
    uint32_t num;           // defining an unsigned integer type with 32bit memory space
    
    //opening the binary file in the ifstream object
    myFile.open("threesData.bin", ios::binary | ios::in);
    
    //testing whether the file is open or not
    if (myFile.is_open())
    {
        //if the file is open, show the user that the count is starting
        cout <<"Counting the Number of 3s now ...." << endl;
        
        //begin a while loop to check if it's not the end of file
        while (!myFile.eof())
            {
                //then read the file and convert binary to integer
                myFile.read(reinterpret_cast<char *> (&num), sizeof(num));
                
                //check if the return number from binary conversion is 3
                if(num == 3)
                    {
                        //then count on 3s
                        threes++;
                    }
            }
    }
    
    //otherwise tell the user that there are no 3s
    else 
    {
        cout<< "There are no 3s in the file" << endl;
    }
    
    //when the condition is true, show the number of threes to the user
    cout <<"The number of 3s in the file are" << endl;
    cout<< "********************" << endl;
    cout<< threes << endl;
    cout<< "********************" << endl;

    
    //close the file stream
    myFile.close();
    
    
    return 0;
}