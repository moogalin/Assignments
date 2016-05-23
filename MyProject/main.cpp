
/*********************************************************************
** Program Filename: Lab 1
** Author: Megan Aldridge
** Date: January 11, 2016
** Description: This main method prompts user to choose square matrix of size 4 or 9 and then calls the function readMatrix to allow a user to input elements into either a 2x2 or 3x3 matrix 
**		and calls the function determinant to compute the determinant of the previous matrix. This information is then displayed on the console.
** Input: User inputs a square matrix of size 4 or 9
** Output: Prompt user to input chosen size of matrix and display the matrix and it's determinant
*********************************************************************/


#include <iostream>
#include <iomanip>
#include "determinant.hpp"
#include "readMatrix.hpp"



int main() {

	std::cout << "Please enter the integer 4 or 9 if you wish to calculate the determinant of a square matrix of size 4 (2x2) or 9 (3x3),  respectively." << std::endl;

	int sizeOfMatrix;

	std::cin >> sizeOfMatrix;

	if (sizeOfMatrix == 4) {
		int matrix[2][2];
		int (*ptr)[2] = matrix;				/* Create a pointer to first element (an array) of Matrix */
		readMatrix(ptr, 2);

		std::cout << "Success! You have created a 2x2 matrix." << std::endl;
		std::cout << "The matrix that you created is as follows: " << std::endl;

		for (int i = 0; i < 2; i++) { 
			for (int j = 0; j < 2; j++) {
				std::cout << std::fixed << std::setw(6) << matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "The determinant of that matrix is " << determinant(matrix, 4) << std::endl;

		

	}

	else if (sizeOfMatrix == 9) {
		int matrix[3][3];
		int (*ptr)[3] = matrix;				/* Create a pointer to first element (an array) of Matrix */

		readMatrix(ptr, 3);

		std::cout << "Success! You have created a 3x3 matrix." << std::endl;
		std::cout << "The matrix that you created is as follows: " << std::endl;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				std::cout << std::fixed << std::setw(6) << matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "The determinant of that matrix is " << determinant(matrix, 9) << std::endl;

		/*
		** The following commented-out code is strictly for value and pointer arithmetic testing. 
		** It is kept within the program for reference purposes only. 
		**
		std::cout << "memory location of ptr is: " << &ptr << std::endl;
		std::cout << "memory locationf of matrix is: " << &matrix << std::endl;
		std::cout << "matrix: " << matrix << std::endl;
		std::cout << "*matrix: " << *matrix << std::endl;
		std::cout << "ptr:" << ptr << std::endl;
		std::cout << "*ptr:" << *ptr << std::endl;
		std::cout << "matrix + 1: " << (matrix + 1) << std::endl;
		std::cout << "matrix[1][0]: " << matrix[1][0] << std::endl;
		std::cout << "&matrix[1][0]: " << &matrix[1][0] << std::endl;
		std::cout << "ptr + 1: " << (ptr + 1) << std::endl;
		std::cout << "matrix[0][1]:" << matrix[0][1] << std::endl;
		std::cout << "&matrix[0][1]:" << &matrix[0][1] << std::endl;
		std::cout << "*((*ptr) + 1):" << *((*ptr) + 1) << std::endl; 
		std::cout << "(*ptr + 1): " << (*ptr + 1) << std::endl;
		**
		*/


	}

	else {			/* Error message initiated if user does not enter either 4 or 9 to indicate size of matrix */
		std::cout << "You may only enter the integer '4' or '9' which correspond to the size of the square matrix." << std::endl;
	}





	return 0;
}


	
	
