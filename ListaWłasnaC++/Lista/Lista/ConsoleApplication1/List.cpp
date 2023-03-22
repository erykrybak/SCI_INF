#include <iostream>
#include "List.h"
using namespace std;
List::List()
{
	head = nullptr;
	tail = nullptr;
}

void List::Add(int val)
{
	ListElement* tmp = new ListElement();
	tmp->value = val;
	tmp->nextEl = nullptr;
	tmp->prevEl = nullptr;
	if (head == nullptr) {
		head = tmp;
		tail = tmp;
		size++;
	}
	else {
		ListElement* tmmp = tail;
		tail->nextEl = tmp;

		tail = tail->nextEl;
		tail->prevEl = tmmp;
		size++;
		
	}
}

void List::Remove()
{
	ListElement* wskRM = tail;
	if (size == 1) {
		delete head;
		head = nullptr;
		tail = nullptr;
		size = 0;
		return;
	}
	/*ListElement* wskTail = head;
	for (int i = 0; i < size - 2; i++) {
		wskTail = wskTail->nextEl;
	}

	wskTail->nextEl = nullptr;
	tail = wskTail;
	delete wskRM;*/
	tail = wskRM->prevEl;
	tail->nextEl = nullptr;
	delete wskRM;
	size--;
}

int List::At(int index)
{
	if (index < size) {
		ListElement* wskOdcz = head;
		for (int i = 0; i < index; i++) {
			wskOdcz = wskOdcz->nextEl;
		}
		return wskOdcz->value;
	}

	return -1;
}

void List::Print()
{
	if (head != nullptr) {
		ListElement* hed = head;
		while (hed) {
			cout << hed->value << endl;
			hed = hed->nextEl;
		}
	}
	else {
		cout << "LIST IS EMPTY\n";
	}
}

List::~List()
{
}