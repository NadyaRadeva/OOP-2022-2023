#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix {
private:
	unsigned cols, rows;
	
	void initialiseMatrix(unsigned cols, unsigned rows);
	void deleteMatrix(unsigned cols, unsigned rows, int** mtr);

public:
	Matrix(unsigned r, unsigned c);
	~Matrix();
	Matrix& operator=(const Matrix& mtr);
	Matrix(Matrix&& other);
	Matrix& operator=(Matrix&& other);
	int& operator()(int row, int col);
	Matrix operator+(const Matrix& other) const;
	Matrix operator-(const Matrix& other) const;
	Matrix operator*(const Matrix& other) const;
	bool operator==(const Matrix& other) const;
	friend Matrix transpose(const Matrix& matrix);
	friend void print(const Matrix& matrix);
};

#endif // !_MATRIX_H
