#include <iostream> //used for input output stream

int main()
{
    int i;        //This is called declaring a variable. We are telling the computer that the integer i now exists

    std::cout << "Please enter a number: "; //std stands for standard library, and it must be used to access the cin and cout commands
    std::cin >> i;     //The cout command is used to output, and the cin is used to take input. In this line, the code is taking in a number
    std::cout << "Your number is " << i;     //The number is being stored in the variable i, and is being outputted onto the screen
    return 0;     //The :: is the operator that is being used to express which std method is being used, and the >> and << are used with cin and cout
}
