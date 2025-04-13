#include "util.h"


string convert(int matrix[BUF][BUF], int size) {
	string s = " ";

	return s;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}
	return s;
}
