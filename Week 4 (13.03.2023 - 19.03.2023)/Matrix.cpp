#include "Matrix.h"
#include<iostream>

void Matrix::initialiseMatrix(unsigned cols, unsigned rows) {
	int** matrix = new int* [rows];
	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void Matrix::deleteMatrix(unsigned cols, unsigned rows, int** mtr) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] mtr[i];
	}
	delete[] mtr;
}

Matrix::Matrix(unsigned r, unsigned c) {
	this->rows = r;
	this->cols = c;
}

/*Matrix::~Matrix() {
	//delete;
}*/

/*Matrix::operator=(const Matrix& other) {

}*/

/*Matrix Matrix::operator+(const Matrix& other) const {
	//return Matrix();
}*/

/*void print(const Matrix& matrix) {
	for (size_t i = 0; i < matrix.rows; ++i) {
		for (size_t j = 0; j < matrix.cols; ++j) {
			std::cout << matrix << " ";
		}
		std::cout << std::endl;
	}
}*/
