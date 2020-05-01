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

using namespace std;

typedef struct charNode
{
	char value;
	charNode *next;
    unsigned int wordId; 
} charNode;

class vectWithStrings
{
public:
	vectWithStrings();
	~vectWithStrings();
    //vector<string> hashWordChar(vector<string>);
	vector<charNode> makeWrdToCharNodeVect(string);
	void displayWrdToCharNodeVect(vector<charNode>);
protected:
private:


};