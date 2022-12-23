#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
        ///File write

    // ios::app is for write file in append mode
  ofstream file("program1.txt",ios::out|ios::app); //ios::trunc is to clear all data from file.

  if (file.is_open())  
  {  
    file<<endl;
    file << "File Handling Program.\n";  
    file << "IN C++.\n";  
    file.close();  
  }  
  else cout <<"File opening is fail.";

  

    return 0;
}