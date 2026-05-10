#pragma once
#include <iostream>
using namespace std;

enum Cell {
	EMPTY = 0,
	RED = 1,
	YELLOW = 2
};

class Field {
public:
	Field(bool isRedFirst);
	void clear(bool isRedFirst);
	bool makeTurn(int column);
	bool isWon(bool red) const;
	bool isOver() const;
	Cell getCell(int i, int j) const;
	bool isRedTurnNow() const;
	void print() const;
	void printResult() const;
};