//
//  Matrix.hpp
//  Lesson_2
//
//  Created by Volha Dzeranchuk on 02/02/2024.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>

extern int COL;

int matrix_multi();

void matrix_create(int& row, int& column, int num_matrix);

void matrix_fill(int **matrix, int row, int column, int num_matrix);

void matrix_show(int** matrix, int row, int column, int num_matrix);


#endif /* Matrix_hpp */
