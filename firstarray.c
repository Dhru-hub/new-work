#include <iostream>

int main() {
    int array[5]; // Array of 5 integers
    
    // Calculate the size of the array
    size_t arraySize = sizeof(array);
    
    // Calculate the size of a single integer
    size_t intSize = sizeof(int);
    
    // Output the results
    std::cout << "Size of the array (5 integers): " << arraySize << " bytes" << std::endl;
    std::cout << "Size of a single integer: " << intSize << " bytes" << std::endl;
    
    return 0;
}


