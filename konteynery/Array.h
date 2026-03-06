#pragma once
#include <iostream>
using namespace std;

const int DEFAULT_CAPACITY = 10;
class ArrayExeption {};
class Array {
	int* ptr;
	int size;
	int capacity;
public:
	int& operator[](int index);
	void insert(int elem, int indedx);
	void insert(int elem);
	void remove(int index);

	~Array();
	explicit Array(int startCapacity = DEFAULT_CAPACITY);
	Array(const Array& arr);
	Array& operator = (const Array& arr);

	void increaseCapacity(int newCapacity);

	int getSize() const;
	friend ostream& operator << (ostream& out, const Array& arr);
};
