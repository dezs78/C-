#include <iostream>
using namespace std;

int main ()
{
    int szam=10;
    if(szam>0){
        for(int i=1;i<=szam;i++){
            cout<<i<<" ";
        }
    } else {
        cout<<szam;
    }
   return 0;
}
