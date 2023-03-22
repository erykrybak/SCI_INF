#include <chrono>
#include <iostream>
#include <vector>
#include<list>
#include "List.h"
//#include "wektor.h"
using namespace std::chrono;
using namespace std;
int main()
{
	/*
	wektor testwektor;
	List lista;
	auto start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		lista.Add(i);
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by MyList Adding : " << duration.count() << " microseconds" << endl;


	vector <int> test;
	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		test.push_back(i);
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by Vector Adding : " << duration.count() << " microseconds" << endl;


	list <int> listt;
	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		listt.push_back(i);
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by List Adding : " << duration.count() << " microseconds" << endl;






	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		testwektor.dodajElement(i);
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by MyVector Adding : " << duration.count() << " microseconds" << endl;


	int j;
	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		j = test[i];
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by Vector displaying : " << duration.count() << " microseconds" << endl;


	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		j = lista.At(i);
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by MyList displaying : " << duration.count() << " microseconds" << endl;



	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		for (int i : listt)j = i;
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by List displaying : " << duration.count() << " microseconds" << endl;

	start = high_resolution_clock::now();
	for (int i = 0; i < 1000; i++) {
		j = testwektor.odczyt(i);
	}
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by MyVector displaying : " << duration.count() << " microseconds" << endl;
	*/
	List test;
	for (int i = 0; i < 1000; i++) {
		test.Add(i);
	}
	test.test();
}
