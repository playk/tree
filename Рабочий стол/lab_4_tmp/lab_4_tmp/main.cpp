#include "Tree.hpp"

int main()
{
	Tree tr;    //Init tree here
	unsigned int Number, ElNum;
	int Value;
	cout<<"Enter number of points: ";
	cin>>ElNum;
	for(int itr = 0; itr < ElNum; itr++)
	{
		cin>>Number>>Value;
		tr.Add_Element(Number, Value);
	}
	
	tr.Print_Tree();  //printing tree here with 3 methods
	system("pause");
	return 0;
}
