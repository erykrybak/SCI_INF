class ListElement
{
public:
	int value; //wartoœæ elementu
	ListElement* nextEl, * prevEl; //wskaŸnik na nastêpny element
};

class List
{

public:
	List();
	void Add(int val);
	void Remove();
	int At(int index);
	void Print();
	~List();
private:
	int size = 0;
	ListElement* head, * tail; //wskaŸniki na pierwszy i ostatni element listy
};
