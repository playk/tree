#include <iostream>
#include <vector>
using namespace std;

class Element      /// Класс узла дерева
{
public:
	Element();
	Element(int value);

public:
	int               data;
	Element*          parent;
	vector<Element*>  childVector;  ///Массив "детей" узла дерева

};