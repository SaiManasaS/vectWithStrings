/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Revision History:
 * Initial version: 1 - May 1, 2020
 */

#include <string>
#include "vectWithStrings.h"

vectWithStrings::vectWithStrings()
{
}

vectWithStrings::~vectWithStrings()
{
}

vector<charNode> vectWithStrings::makeWrdToCharNodeVect(string inString)
{
	string localString = inString;
	vector<charNode> vectOfWrdChars;
	vector<charNode> :: iterator itr1;
	unsigned int i = 0;
	//cout << "vectWithStrings.cpp: Debug line 27" << endl;
	for(i = 0; i < localString.length(); i++)
	{
		charNode *tempNode = new charNode;
		tempNode->value = localString[i];
		tempNode->wordId = 0;
		tempNode->next = NULL;
		vectOfWrdChars.push_back(*tempNode);
		delete tempNode;
		//cout << "vectWithStrings.cpp: Debug line 36" << endl;
	}
	//cout << "vectWithStrings.cpp: Debug line 38" << endl;
	return vectOfWrdChars;
}

void vectWithStrings::displayWrdToCharNodeVect(vector<charNode> charNodesVect)
{
	vector<charNode> outStringCharVect;
	vector<charNode> tempcharNodesVect = charNodesVect;
	vector<charNode> :: iterator itr1;
	cout << "vectWithStrings.cpp: Debug line 47" << endl; 
	for(itr1 = tempcharNodesVect.begin(); itr1 != tempcharNodesVect.end(); itr1++)
	{
		cout << itr1->value << " ";
		cout << "vectWithStrings.cpp: Debug line 47" << endl; 
	}
}

/*vector<string> vectWithStrings::hashWordChar(vector <string> inWords)
{
	vector<charNode> mbaseCharVect;
	return mbaseCharVect;
}*/