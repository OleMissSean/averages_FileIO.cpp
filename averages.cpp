/*
Sean Staz
CSC 2134
Program Averages 
Program Averages averages the values on file dataFile.
*/

#include <iostream>
#include <fstream>

using namespace std;

void SumDigits(int&, int&, int&); // Declars Void Function SumDigits

int main ()
{
  int counter;	// Declares counter, sum, and digit
  int sum;		
  int digit; 
  	 
  digit = 0;	// Gives digit a value

  cout  << "Enter a positive one-digit integer. (This positive integer will be added" << endl;
  cout  << "to all previously entered positive intigers which case the" << endl;
  cout  << "program will display the sum of all positive integers inputed.)" << endl;
  cout  << "Enter a negative integer to quit." << endl;            
  
  counter = 0;  // Starts counter at zero                 
  sum = 0;  // Answer

  
while (digit >=0)                                     
  {    
  cin >> digit;		// Gets digit
  
  if (digit >=0);        // Runs if digit is greater than or equal to zero                                           
   {
   SumDigits(digit, sum, counter);
   }
     
   cout << "The sum of the positive integers entered is "	<< sum  << endl;	// Outputs the sum
   }

  return 0;
}

void SumDigits(int& digit, int& sum, int& counter)
{
	sum = sum + digit; // Formula
   	counter++;
   	
    cout << "Enter a positive one-digit integer; press return." << endl;
    cout << "Enter a negative one-digit integer to quit." << endl;
}
