#include "Element.hpp"

class Tree          //Tree class description
{
public:
	      Tree();
		  ~Tree();
	void     Add_Element(int Number, int Value);  // method that would add a new element to a tree	
	void     Print_Tree()   const;
	int      Get_Data(int Number) const;

private:
	void     Print_Direct(Element* El) const;
	void     Print_Reverse(Element* El) const;
	void     Print_Symmetrical(Element* El) const;
	void     Delete_Tree(Element* El);
	Element* Find_Element(Element* El,int Number) const;

private:
	Element* Root;  // The root element saves here
}
