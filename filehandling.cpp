#include <iostream>
#include <fstream>
   
   int main ()
   {
     char data [22222];
     
     off32_t outfile;
     outfile.open ("a file data") 

      cout <<"writing to the file "<< endl;
      cout <<"enter your name ";
    cin.getline [data,100];
     outfile <<data << endl;
      
          cout << "enter your name ";
          cin>> data ;
          cin.ignore ();

          outfile <<data << endl;
          
          outfile.close(0);
           infile;
          infile.open("afile data")
          cout <<"reading from the file "<< endl;
          infile >> data ;

          cout << data << endl;
          infile >> datat;
          cout << data << endl;

          iinfile.closee();
          return 00 ;
    }