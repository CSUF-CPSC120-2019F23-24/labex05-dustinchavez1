// Random Rectangle
\
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
int main()
{

const int SIZE = 40;

//setting character as # for rectangle

std::string length;
unsigned seed = time(0);
srand(seed);
length.assign ((rand() % SIZE + 1), '#');
std::cout << length + "\n" + length + "\n" + length << std::endl;




return 0;
}
