//
//  main.cpp
//  Lesson_2 Functions
//
//  Created by Volha Dzeranchuk on 25/01/2024.
//

#include <iostream>
#include <cstdarg>
#include "static.hpp"
#include "Matrix.hpp"
//#include "MultiConstMatrix.hpp"

// call of value

// 1 // call of reference
void swap(int* i, int* j);

// 2 // overload
//перегрузка = это механизм использования одного имени ф-ции для выполнения различных задач
//возможно в С++, тк при компиляции в статич.памяти создается уникальное название ф-ции, к примеру func_0x1234567() и func_0x8910111()
//две одноименные ф-ции могут отличаться по: типам возвращаемого значения, типам пар-ров и их кол-во, телу ф-ции
//недостаточно отличия по типу возвращаемого значения. компилятор не будет знать какую ф-цию вызывать, если кол-во аргументов и тип - одинаков для некоторых ф-ций, пример:
typedef int MY_INT_1;
typedef int MY_INT_2;

void func(MY_INT_1); //_1
//int  func(MY_INT_2); //_2 //error: func_1_2 Functions that differ only in their return type cannot be overloaded
void func(MY_INT_1) {return;}

// 3 // overload
int sum(int, int, int c=0);
double* sum(double);
// 4 // static variable in function = global variable in file
void sum(double, double);

// 5 // namespace
int glob = 10;

// 6 // Ellipsis. Function accepting variable number of arguments using Ellipsis
double average(int count, ...);


int main(int argc, const char * argv[])
{
    // 1
    int i = 1;
    int j = 2;
    swap(&i, &j);
    std::cout << "// 1 // " << "i = " << i << "; j = " << j << std::endl;
    
    // 2
    int k = sum(1,2);
    double var = 3.0;
    std::cout << "// 2 // " << "output: " << sum(var) << "; input: " << &var << std::endl;
    
    // 3
    double a = 4.5;
    double b = 5.5;
    for(auto i=0;i<3;i++)
    {
        sum(a,b);
    }

    // 4
    std::cout << "// 4 // glob = " << glob++ << std::endl;
    
    {int local;}
    //std::cout << "local =" << local++ << std::endl; //error: undefined variable
    
    // 5
    print();
    
    // 7 // Многомерный массив передача в ф-цию
    //multi_const_matrix();
    matrix_multi();
    
    return 0;
}

// 1 // call of reference
void swap(int* i, int* j)
{
    int temp = *j;
    *j = *i;
    *i = temp;
    return;
};
//void swap(int& i, int& j)
//{
//    int temp = j;
//    j = i;
//    i = temp;
//    return;
//};

// 3 // overload
int sum(int a, int b, int c)
{
    return (a + b + c);
}

double* sum(double a)
{
    a+= a;
    return &a;
}

// 4 // static variable in function = global variable in file
void sum(double a, double b)
{
    static int i = 0;
    i++;
    std::cout << "// 3 // " <<"Current i=" << i << std::endl;
    return;
}

// 6 // Ellipsis. Function accepting variable number of arguments using Ellipsis
double average(int count, ...)
{
    double avg = 0.0;
    va_list list; // va_list found in <cstdarg> and list is its type, used to iterate on ellipsis
    
    // Initialize position of va_list
    va_start(list, count);

    // Iterate through every argument
    for (int i = 0; i < count; i++)
    {
       avg += static_cast<double>(va_arg(list, int)) / count;
    }
     
    // Ends the use of va_list
    va_end(list);
    va_list();
    
    return avg;
}
