#include <iostream>
using namespace std;
#include "Video.h"
#include "Laralce.h"

int main()
{
    Laralce obj=true;
    obj.llenar(0.010);
    obj.getHielo(1);
    cout<<obj.getdepositoagua();
    obj.apagar();

    return 0;
}
