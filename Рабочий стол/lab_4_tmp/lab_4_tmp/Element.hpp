#include <iostream>
#include <vector>
using namespace std;

class Element      /// ����� ���� ������
{
public:
	Element();
	Element(int value);

public:
	int               data;
	Element*          parent;
	vector<Element*>  childVector;  ///������ "�����" ���� ������

};