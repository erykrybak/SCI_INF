class ListElement
{
public:
	int index;
	int value; //wartosc elementu
	ListElement* nextEl, * prevEl, *jumpNxt, *jumpPvs; //wskaznik na nastepny element
};

class List
{

public:
	List();
	void Add(int val);
	void Remove();
	int At(int index);
	void Print();
	void JumpAssign(int lenght);
	void JumpReassign();
	void test();
	~List();
private:
	int size = 0;
	int jumpSize = 0;
	ListElement* head, * tail; //wskazniki na pierwszy i ostatni element listy
};