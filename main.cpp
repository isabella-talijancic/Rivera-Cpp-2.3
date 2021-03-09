// This calculates the number of gallons of paint needed. 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double height1 = 9;
   double width1 = 19.5;
   double width2 = 20.0;
   double squareFeet;
   double numGallons;
   
   squareFeet = ((width1 + width2) * height1) * 2;
   numGallons = squareFeet / 150;

   cout << "~ ~ ~ Paint Calculator ~ ~ ~\n\n";
   cout << "Wall Height: " << height1 << endl;
   cout << "Wall Width 1: " << width1 << endl;
   cout << "Wall Width 2: " << width2 << endl;

   cout << "\n\nTotal Square Feet: " << squareFeet << endl;
   cout << setprecision(3);
   cout << "Number of Gallons: " << numGallons;
   
}
