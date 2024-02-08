//
//  MultiConstMatrix.cpp
//  Lesson_2
//
//  Created by Volha Dzeranchuk on 08/02/2024.
//

#include "MultiConstMatrix.hpp"
#include <iostream>

int COL = 2; // не используются в коде

int multi_const_matrix()
{
    const int row_A = 3, column_A = 2;
    const int row_B = 2, column_B = 3;

    int matrix_A[row_A][column_A] = {{1, 4}, {2, 5}, {3, 6}};
    int matrix_B[row_B][column_B] = {{7, 8, 9}, {10, 11, 12}};
    if(column_A == row_B)
    {
        int matrix_AxB[row_A][column_B] = {0};
        // 1*7+4*10  1*8+4*11  1*9+4*12
        // 2*7+5*10  2*8+5*11  2*9+5*12
        // 3*7+6*10  3*8+6*11  3*9+6*12


        for (int i = 0; i < row_A; i++) {
            for (int j = 0; j < column_B; j++) {
                for (int inner = 0; inner < column_A; inner++) {
                    matrix_AxB[i][j] += matrix_A[i][inner] * matrix_B[inner][j];
                    // matrix_AxB[0][0] = matrix_A[0][0]*matrix_B[0][0] + matrix_A[0][1]*matrix_B[1][0]
                    // matrix_AxB[0][1] = matrix_A[0][0]*matrix_B[0][1] + matrix_A[0][1]*matrix_B[1][1]
                    // matrix_AxB[0][2] = matrix_A[0][0]*matrix_B[0][2] + matrix_A[0][1]*matrix_B[1][2]
                }
                std::cout << matrix_AxB[i][j] << "  ";
            }
            std::cout << "\n";
        }
        return 0;
    } else
        return -1;
    return 0;
}
