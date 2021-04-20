#include <iostream>
#include <NTL/ZZ.h>
#include "Regev/Regev.h"
using namespace std;
using namespace NTL;

int main(int, char **)
{
    Regev r(5,ZZ(257));
    r.KeyGen();
    Mat<ZZ> C1 = r.encrypt(ZZ(0));

    Mat<ZZ> C2 = r.encrypt(ZZ(1));
    cout << r.decrypt(C1+C2) << endl;
}
