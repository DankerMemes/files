#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream textdotjpg{"abc.bin", ios::binary};
   if (textdotjpg){
	textdotjpg.write(reinterpret_cast<char*>(&a), sizeof(a));
	textdotjpg.write(reinterpret_cast<char*>(&b), sizeof(b));
	textdotjpg.write(reinterpret_cast<char*>(&c), sizeof(c));
}
   else 
   cout<< "error in writing to file" << endl << endl;
 
   textdotjpg.close();
}
