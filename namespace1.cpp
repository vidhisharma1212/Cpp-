#include <iostream>
using namespace std; //using std namespace in the entire code. but this may rise some NAMING CONFLICTS because all the standard things from std will come into the code :]

int main()
{
    int no;
//    cout<< no; will show an error if line 2 is not written
    cout<< no<< endl;
    cout<< "hello cout"<<endl;
    std::cout<<"hello std cout"<<endl;
    return 0;
}