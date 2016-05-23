
/*********************************************************************
** Program Filename: Lab 1
** Author: Megan Aldridge
** Date: January 11, 2016
** Description: This implementation file contains the function defintion for the readMatrix function which prompts a user to enter an elements into either a 2x2 or 3x3 matrix. 
**		The function is overloaded to account for both a 2x2 and 3x3 matrix.
** Input: User inputs integer values at each element in the matrix
** Output: Prompt user to enter 2 or 3 integers for each row in the matrix. 
*********************************************************************/
#include "readMatrix.hpp"
#include <iostream>


void readMatrix(int(*ptrToMatrix)[2], int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		std::cout << "Please enter two integer elements for Row " << i << std::endl;
		for (int j = 0; j < SIZE; j++) {
			std::cin >> (ptrToMatrix)[i][j];
		}
	}

	
}

void readMatrix(int(*ptrToMatrix)[3], int SIZE) {
	
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Please enter three integer elements for Row " << i << std::endl;
		for (int j = 0; j < SIZE; j++) {
			std::cin >> (ptrToMatrix)[i][j];
		}
	}

}











