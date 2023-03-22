class ListElement
{
public:
	int value; //warto�� elementu
	ListElement* nextEl, * prevEl; //wska�nik na nast�pny element
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
	ListElement* head, * tail; //wska�niki na pierwszy i ostatni element listy
};
