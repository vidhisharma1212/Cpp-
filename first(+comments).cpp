#include <iostream>

/*This is a multiline
comment
*/
int main()
{
    int favourite_number;
    std::cout<< "Enter your favourite number between 1 and 100: ";
    std::cin>> favourite_number;
    std::cout<<"Amazing!! That's my favorite number too!"<< std::endl;
    std::cout<<"No really!! "<< favourite_number <<" is my favorite number too!"; // the << does not leave any space in between (it is not the same in python where ',' leave a space itself) thus we need to leave space between and after the << to leave space. otherwise aise likha hota- "...really!!42is my..."
    return 0;
}