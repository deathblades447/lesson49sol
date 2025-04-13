#include "logic.h"

int main() {
	int  matrix[BUF][BUF];
	int size;

	cout << "input size of square matrix: ";
	cin >> size;

	init_random(matrix, size, 0, 9);
	cout << "matrix:\n" << convert(matrix, size) << endl;
	cout << "sum elements of the main diagonale: "
		<< sum_elements_of_addition_diagonale(matrix, size) << endl;

	cout << "sum elements of the main diagonale: "
		<< sum_elements_of_addition_diagonale(matrix, size) << endl;



	return 0;
}