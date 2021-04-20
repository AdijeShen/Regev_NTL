#ifndef _REGEV_H_
#define _REGEV_H_

#include <NTL/ZZ.h>
#include <NTL/RR.h>
#include <iostream>
#include <NTL/matrix.h>
#include "../myMat.h"
using namespace std;
using namespace NTL;

class Regev
{
protected:
    ZZ q;
    int n;
    int N;
    Mat<ZZ> P;
    Mat<ZZ> s;

public:
    Regev();
    Regev(int n, ZZ q);
    void KeyGen();
    Mat<ZZ> getSecretKey() { return s; };
    Mat<ZZ> getPublicKey() { return P; };
    Mat<ZZ> encrypt(ZZ);
    ZZ decrypt(Mat<ZZ> c);
};

Regev::Regev()
{
    q = 0;
    n = 0;
    N = 0;
}

Regev::Regev(int n_, ZZ q_)
{
    q = q_;
    n = n_;
    N = (n + 1) * log(q) + 1;
    P.SetDims(N, n + 1);
    s.SetDims(n, 1);
}

void Regev::KeyGen()
{
    Mat<ZZ> A, e, b;
    A.SetDims(N, n);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = RandomBnd(q);
        }
    }
    for (int i = 0; i < n; i++)
    {
        s[i][0] = RandomBnd(q);
    }
    e.SetDims(N, 1);
    for (int i = 0; i < N; i++)
    {
        e[i][0] = RandomBnd(2);
    }
    b = A * s + e;
    for (int i = 0; i < N; i++)
    {
        P[i][0] = b[i][0];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < n; j++)
        {
            P[i][j + 1] = -A[i][j];
        }
    }
}

Mat<ZZ> Regev::encrypt(ZZ m)
{
    Mat<ZZ> r, M;
    r.SetDims(N, 1);
    for (int i = 0; i < N; i++)
    {
        r[i][0] = RandomBnd(2);
    }
    M.SetDims(n + 1, 1);
    M[0][0] = m;
    for (int i = 0; i < n; i++)
    {
        M[i + 1][0] = 0;
    }
    ZZ half_q = q / 2;
    return Transfer(P) * r + M * half_q;
}

ZZ Regev::decrypt(Mat<ZZ> c)
{
    ZZ res = c[0][0];
    for (int i = 0; i < n; i++)
    {
        res += c[i + 1][0] * s[i][0];
    }
    res = (res % q);
    RR p = (to_RR(res)/to_RR(q))*2;
    res = FloorToZZ(p);
    cout << "the error amount is "  << p-to_RR(res) << endl;
    return res;
}
#endif