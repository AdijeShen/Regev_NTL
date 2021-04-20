#pragma once
#include <NTL/matrix.h>
#include <iostream>
using namespace NTL;
using namespace std;
template <class T>
Mat<T> operator*(const Mat<T> &a, const Mat<T> &b)
{
    int a_row = a.NumRows();
    int a_col = a.NumCols();
    int b_row = b.NumRows();
    int b_col = b.NumCols();
    if (a_col != b_row || a_row * a_col == 0 || b_row * b_col == 0)
    {
        Mat<T> temp;
        temp.SetDims(0, 0);
        cout << "in myMat.h, operator*(): matrix shape is not fit, col:" << a_col << "," << b_col << ", row:" << a_row << "," << b_row << endl;
        return temp;
    }
    Mat<T> ret;
    ret.SetDims(a_row, b_col);
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < b_col; j++)
        {
            for (int k = 0; k < a_col; k++)
            {
                ret._mat__rep[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return ret;
}

template <class T>
Mat<T> operator*(const Mat<T> &a, T &val)
{
    int a_row = a.NumRows();
    int a_col = a.NumCols();
    if (a_row * a_col == 0 )
    {
        Mat<T> temp;
        temp.SetDims(0, 0);
        cout << "in myMat.h, operator*(): matrix shape is not fit, col:" << a_col << ", row:" << a_row << endl;
        return temp;
    }
    Mat<T> ret;
    ret.SetDims(a_row, a_col);
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            ret[i][j] = a[i][j]*val;
        }
    }
    return ret;
}



template <class T>
Mat<T> operator+(const Mat<T> &a, const Mat<T> &b)
{
    int a_row = a.NumRows();
    int a_col = a.NumCols();
    int b_row = b.NumRows();
    int b_col = b.NumCols();
    if (a_col != b_col || a_row != b_row || a_row * a_col == 0 || b_row * b_col == 0)
    {
        Mat<T> temp;
        temp.SetDims(0, 0);
        cout << "in myMat.h, operator+(): matrix shape is not fit, col:" << a_col << "," << b_col << ", row:" << a_row << "," << b_row << endl;
        return temp;
    }

    Mat<T> ret;
    ret.SetDims(a_row, a_col);
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < b_col; j++)
        {
            ret[i][j] = a[i][j]+b[i][j];
        }
    }
    return ret;
}

template <class T>
Mat<T> Transfer(const Mat<T>& m){
    Mat<T> ret;
    int row = m.NumRows();
    int col = m.NumCols();
    ret.SetDims(col,row);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ret[j][i] = m[i][j];
        }
    }
    return ret;
}