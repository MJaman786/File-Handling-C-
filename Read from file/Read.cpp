 #include <iostream>  
 //Header file for file handling
#include <fstream>  
using namespace std;  
int main () {

// Default Open Modes :

//For reading data from file:
// ifstream ios::in

//For writing data in file
// ofstream ios::out
 
// fstream ios::in | ios::out



//=========================================================================//
//File read

    string srg;
  ifstream file("program1.txt", ios::in);

   if (file.is_open())  
 		 {  
   			 while ( getline (cin,srg) )  
        {  
     	    cout << srg <<endl;  
   			  }  
   			  file.close();  
 		 }  
  	else 
      {  
      	cout << "File opening is fail."<<endl;   
  		  }  
  
  return 0;  
}  
