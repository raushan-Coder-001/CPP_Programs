#include <iostream>

void swap(int* var1, int* var2)
{
    int swap1 = *var1;
    
    *var1 = *var2;
    *var2 = swap1;
    
    return;
}

int main()
{
    int num1 = 1;
    int num2 = 2;

    std::cout << "num1: " << num1 << std::endl << "num2: " << num2 << std::endl;

    swap(&num1, &num2);

    std::cout << "num1: " << num1 << std::endl << "num2: " << num2 << std::endl;

}