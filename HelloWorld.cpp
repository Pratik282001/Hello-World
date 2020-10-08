#include <iostream>
using namespace std;

int main()
{
    cout <<"\nHello World"<< endl;
    return 0;
}


//======================================================

#include <iostream>
using namespace std;

class helloworld{
    helloworld(){
        printf("Hello World!!");
    }
};

int main(){
    helloworld obj= new helloworld();
}
