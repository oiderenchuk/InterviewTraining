//
//  static.cpp
//  Lesson_2
//
//  Created by Volha Dzeranchuk on 01/02/2024.
//

#include "static.hpp"
#include <iostream>

//static
static void print_2() // только внутри этого файла
{
    std::cout << "print" <<std::endl;
    return;
}
