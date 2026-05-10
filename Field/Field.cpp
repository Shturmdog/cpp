#include <iostream>
#include "Field.h"
using namespace std;

Field::Field(bool isRedFirst) {
	clear(isRedFirst);
}

void Field::clear(bool isRedFirst) {
	isRedTurn = isRedFirst;
	winner = EMPTY;
	for (int i = 0; i < FIELD_WIDTH; i++) {
		for (int j = 0; j < FIELD_HEIGHT; j++) {
			cells[i][j] = EMPTY;
		}
	}
}