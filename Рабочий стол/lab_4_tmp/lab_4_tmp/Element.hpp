#include <iostream>
#include <vector>
using namespace std;

class Element      // the element class
{
public:
	Element();
	Element(int value);

public:
	int               data;
	Element*          parent;
	vector<Element*>  childVector;  // child element of the higher one

};
