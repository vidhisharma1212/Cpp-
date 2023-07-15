#include <iostream>
using std::cout;
using std::cin;
using std::endl; // using in such way will not make other names from std to come into the program and thus REDUCING NAMING CONFLICTS

int main()
{
    int no;
//    cout<< no; will show an error if line 2 is not written
    cout<< no<< endl;
    cout<< "hello cout"<<endl;
    std::cout<<"hello std cout"<<endl;
    return 0;
}