#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int a=rand()%51-20;
    cout<<"A veletlen szam: "<<a<<endl;

    return 0;
}