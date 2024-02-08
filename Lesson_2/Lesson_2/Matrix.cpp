//
//  Matrix.cpp
//  Lesson_2
//
//  Created by Volha Dzeranchuk on 02/02/2024.
//

#include "Matrix.hpp"
#include <iostream>
    
int matrix_multi()
{
    std::cout << "Matrix";
    
    const int row_A = 3, column_A = 2;
    const int row_B = 2, column_B = 3;

    int matrix_A[row_A][column_A] = {0};
    int matrix_B[row_B][column_B] = {0};
    
    // FROM matrix TO array:
    int *arr_A[row_A];
    for (int i=0; i < row_A; i++)
        for (int j=0; j < column_A; j++){
        arr_A[i] = &matrix_A[i][j];
        //std::cout<<"ARRAY:"<<*arr_A[i] << std::endl;
    }
    
    int *arr_B[row_B];
    for (int i=0; i < row_B; i++)
        for (int j=0; j < column_B; j++){
        arr_B[i] = &matrix_B[i][j];
        //std::cout<<"ARRAY:"<<*arr_B[i] << std::endl;
    }
    
    matrix_fill(arr_A, row_A, column_A, 1);
    matrix_fill(arr_B, row_B, column_B, 2);
    
    matrix_show(arr_A, row_A, column_A, 1);
    matrix_show(arr_B, row_B, column_B, 2);
    

    // calculate
    
    // cout
    
    return 0;
}

void matrix_create(int& row, int& column, int num_matrix)
{
    std::cout << "Enter Matrix_" << num_matrix << ": Size of row = ";
    std::cin >> row;
    std::cout << "Size of columb = ";
    std::cin >> column;
    
    return;
}

void matrix_fill(int** matrix, int row, int column, int num_matrix)
{
    std::cout << "Please enter elements for Matrix_" << num_matrix << std::endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            std::cin >> matrix[i][j];
            //std::cout << "MATRIX:" << matrix[i][j] << std::endl;
        }
    }
    return;
}

void matrix_show(int** matrix, int row, int column, int num_matrix)
{
    std::cout << "Matrix_" << num_matrix << ":" << std::endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return;
}

