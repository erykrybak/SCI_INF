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
	tmp->jumpNxt, tmp->jumpPvs, tmp->prevEl, tmp->nextEl = nullptr;
	if (head == nullptr) {
		tmp->index = 0;
		head = tmp;
		tail = tmp;
		size++;
	}
	else {
		ListElement* tmmp = tail;
		tmp->index = tail->index + 1;
		tail->nextEl = tmp;
		tail = tail->nextEl;
		tail->prevEl = tmmp;
		size++;
		if (tail->index == 99) {
			JumpAssign(10);
		}
		else if (tail->index < (jumpSize * 100) - 1) {
			ListElement* move = head;
			while (move->jumpNxt) {
				move = move->jumpNxt;
			}
			//move = move->jumpNxt;
			if (move->index + jumpSize == tail->index) {
				move->jumpNxt = tail;
				tail->jumpPvs = move;
			}

		}
		else {
			JumpReassign();
			JumpAssign(jumpSize * 10);
		}
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
	tail = wskRM->prevEl;
	tail->nextEl = nullptr;
	delete wskRM;
	size--;
}

int List::At(int index)
{
	if (index < size) {

		if (index < size / 2) {
			ListElement* wskOdcz = head;
			while (wskOdcz->index != index) {
				wskOdcz = wskOdcz->nextEl;
			}
			return wskOdcz->value;
		}
		else {
			ListElement* wskOdcz = tail;
			while (wskOdcz->index != index) {
				wskOdcz = wskOdcz->prevEl;
			}
			return wskOdcz->value;
		}


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

void List::JumpAssign(int lenght)
{
	jumpSize = lenght;
	ListElement* place2 = head;
	ListElement* place1 = head;
	//for (int i = 0; i < lenght; i++) {
	do{
		for (int j = 0; j < lenght - 1; j++) {
			place2 = place2->nextEl;
		}
		place1->jumpNxt = place2;
		place2->jumpPvs = place1;
		place1 = place2;
		place2 = place2->nextEl;
	} while (place2->jumpNxt);
}

void List::JumpReassign()
{
	ListElement *place = head; 
	ListElement *deleter = head;
	while (place) {
		place = place->jumpNxt;
		deleter->jumpNxt = nullptr;
		deleter->jumpPvs = nullptr;
		deleter = place;
	}
}

void List::test()
{
	ListElement* test = head;
	while (test) {
		cout << test->index << endl;
		test = test->jumpNxt;
	}
}

List::~List()
{
}