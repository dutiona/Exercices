#include <iostream>
#include <limits>

int main(int argc, char** argv)
{
    std::cout << "Hello World!" << std::endl;

    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}