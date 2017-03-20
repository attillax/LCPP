#include <iostream>
 
// definition of void function
void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}
 
// definition of function main()
int main()
{
    std::cout << "Starting main()" << std::endl;

    doPrint(); // defined void function call

    std::cout << "Ending main()" << std::endl;
 
    return 0;
}
