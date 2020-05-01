/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Revision History:
 * Initial version: 1 - May 1, 2020
 */

#include <iostream>
#include <vector>
#include "vectWithStrings.h"

using namespace std;

void main()
{
	vectWithStrings *myObj = new vectWithStrings();
	cout << "Hello!" << endl;
	string inString = "Hello", outString;
	vector<charNode> outStringCharVect;
	//vector<charNode> :: iterator itr1;
	outStringCharVect = myObj->makeWrdToCharNodeVect(inString);
	myObj->displayWrdToCharNodeVect(outStringCharVect);
	//cout << reinterpret_cast<string> (myObj->makeWrdToCharNodeVect(inString)) << endl;
	while(1);
}
