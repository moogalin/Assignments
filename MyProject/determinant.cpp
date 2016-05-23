
/*********************************************************************
** Program Filename: Lab 1
** Author: Megan Aldridge
** Date: January 11, 2016
** Description: This implementation file contains the function definition for the overloaded determinant function. 
**		Determinant is an overloaded function that will compute and return the integer value of the determinant of either a 2x2 or 3x3 matrix.
** Input: N/A
** Output: N/A
*********************************************************************/
#include <iostream>
#include "determinant.hpp"

int determinant( int matrix[][2], int SIZE) {

	int determinantValue;

	determinantValue = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	return determinantValue;

}

int determinant( int matrix[][3], int SIZE) {
	
	int subDeterminantA, 
		subDeterminantB,
		subDeterminantC,
		determinantValue;

	subDeterminantA = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
	subDeterminantB = matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2];
	subDeterminantC = matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0];

	determinantValue = subDeterminantA * matrix[0][0] - subDeterminantB * matrix[0][1] + subDeterminantC * matrix[0][2];

	return determinantValue;
}