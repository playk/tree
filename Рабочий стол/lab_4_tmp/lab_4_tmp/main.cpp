#include "Tree.hpp"

int main()
{
	Tree treee;    //! ������ ������ "������"
	unsigned int Number, ElNum;
	int Value;
	cout<<"Enter number of points: ";
	cin>>ElNum;
	for(int itr = 0; itr < ElNum; itr++)
	{
		cin>>Number>>Value;
		treee.Add_Element(Number, Value);
	}
	
	treee.Print_Tree();  //! ����� ������ �� �����
	system("pause");
	return 0;
}