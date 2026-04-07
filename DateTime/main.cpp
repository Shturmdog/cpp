#include <iostream>
#include "DateTime.h"
using namespace std;

int main() {
	DateTime data;
	data.input();
	data.basicFormat();
	data.shortformat();
	cout << data.DateEaster();
}

