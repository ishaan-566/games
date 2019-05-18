//**************************************
// Name: Code Example - Simple Mad Libs
// Description:This is some examples of basic C++ programming. Some people at school will be creating software using some of these concepts. So if someone happens to wander over here, theres some help.
//However this wont solve your problems just show you how.
// By: Jared Bruni
//
//
// Inputs:None
//
// Returns:None
//
//Assumes:None
//
//Side Effects:None
//This code is copyrighted and has limited warranties.
//**************************************
// jared bruni
// for planetsourcecode
/*
This is some examples of basic C++ programming. Some people at school will be creating software using some of these concepts. So if someone happens to wander over here, theres some help.
However this wont solve your problems just show you how.
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
// C++ code example
// example simple mad libs
using namespace std;
struct StringData 
    {
    	char string[100];
};
int main()
    {
    	cout << "\n********** Mad Libs Example **********\n";
    	cout << "\nEnter 10 Variables\n";
    	StringData data[10];
    	for(int i = 0; i <= 9; i++)
        	{
        		cout << "\n enter variable #" << i << ":";
        		cin >> data[i].string;
        	}
        	cout << "\n********** Your Result ******************\n";
        	cout << "\n some guy was walking down the street when: " << data[0].string << " came along\n";
        	cout << "\n then this little: " << data[1].string << " started screaming " << endl;
        	cout << "\n what happend to this, point were did it go? : " << data[2].string << endl;
        	cout << "\n how many times must I tell you this: " << data[3].string << endl;
        	cout << "\n my mind speaks of this: " << data[4].string << endl;
        	cout << "\n this is a story of a boy named .." << data[5].string << endl;
        	cout << "\n low and below, there it was..." << data[6].string << endl;
        	cout << "\n and so we kept on saying this: " << data[7].string << endl;
        	cout << "\n this is a spew of nonsense: " << data[8].string << endl;
        
        	cout << "\n bye!";
        	system("pause");
        	return 0;
    }	
