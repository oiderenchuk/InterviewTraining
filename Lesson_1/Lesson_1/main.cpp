//
//  main.cpp
//  Lesson_1 Types
//
//  Created by Volha Dzeranchuk on 24/01/2024.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    
    int i; //2,4,8 bytes
    int j[]={1,2,3};
    int *l;
    
    char symbal = 'a'; //1 byte, 256 symbal
    char *b = "rama"; //b[0] = 'r' ...b[3]=a; b[4]='\0'
    b++; //b[0] -> b[1]
    
    char *s = "Fine"; //const str
    std::cout << *s << std::endl;
    //char arr[] = {'', '', ''};
    std::cout << s << std::endl;
    //char s[] = "C++";
    //s++; //error
    // Good:
    /*
        char *s = "C++";
        std::cout << s << " ";
        s++;
        std::cout << s << " ";
    */
    
    bool   k; //like int (2,4,8 bytes)
    
    // Creating a double and float type variables
    double a = 3.912348239293; //8 bytes
    float  m = 3.912348239293f;//4 bytes
    long double num_ldb = 2.569L; //8,12 bytes

    // Printing the two variables
    std::cout << "Double Type Number (default)  = " << a << std::endl;
    std::cout << "Float Type Number (default)  = "  << m << std::endl;
    
    // Setting the precision to decimal places and printing the two variables
    std::cout << "Double Type Number (setting precision to 11)  = "
              << std::setprecision(11) << a << std::endl;
    std::cout << "Float Type Number (setting precision to 13) = "
              << std::setprecision(11) << m << std::endl;
    std::cout << std::endl;
    
    // size of types:
    std::cout << "Size of INT-types: " << std::endl;
    std::cout << "int = " << sizeof(int) << " bytes" << std::endl;
    std::cout << "unsigned int = " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "long int = " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "long long int = " << sizeof(long long int) << " bytes" << std::endl;
    std::cout << "unsigned long long int = " << sizeof(unsigned long long int) << " bytes" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Size of DOUBLE-types: " << std::endl;
    std::cout << "double = " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double = " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "float = "  << sizeof(float) << " bytes" << std::endl;
    //there is NOT long float
    std::cout << std::endl;

    std::cout << "Size of other types: " << std::endl;
    std::cout << "char = "   << sizeof(char) << " byte" << std::endl;
    std::cout << "bool = "   << sizeof(bool) << " byte" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Size of TYPE_t: " << std::endl;
    std::cout << "int8_t = "  << sizeof(int8_t) << " byte"  << std::endl;
    std::cout << "int16_t = " << sizeof(int16_t) << " bytes" << std::endl;
    std::cout << "int32_t = " << sizeof(int32_t) << " bytes" << std::endl;
    std::cout << "int64_t = " << sizeof(int64_t) << " bytes" << std::endl;
    std::cout << "wint_t = "  << sizeof(wint_t)  << " bytes" << std::endl;
    std::cout << "double_t = "<< sizeof(double_t) << " bytes"<< std::endl;
    std::cout << "float_t = " << sizeof(float_t) << " bytes" << std::endl;
    std::cout << "wchar_t = " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "wctype_t = "<< sizeof(wctype_t) << " bytes"<< std::endl;
    std::cout << std::endl;

    std::cout << "ANSI code for symbal: " << std::endl;
    std::cout << "char symbal = " << int(symbal) << std::endl;
    std::cout << "a = " << int('a') << std::endl;
    std::cout << "A = " << int('A') << std::endl;
    std::cout << "string char *b = " << --b << std::endl;
    std::cout << std::endl;
    
    std::cout << "Size of pointer: " << std::endl;
    std::cout << "int* = "   << sizeof(int*)   << " bytes" << std::endl;
    std::cout << "double* = "<< sizeof(double*)<< " bytes" << std::endl;
    std::cout << "float* = " << sizeof(float*) << " bytes" << std::endl;
    std::cout << "char* = "  << sizeof(char*)  << " bytes" << std::endl;
    std::cout << "bool* = "  << sizeof(bool*)  << " bytes" << std::endl;
    std::cout << std::endl;
    
    return 0;
}
