//1.4 Nhập vào 6 số nguyên. Hãy đếm xem trong đó có bao nhiêu số âm, bao nhiêu số bằng 0, bao nhiêu số dương
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, demduong = 0, demam = 0, demkhong = 0;
    cout<<"Nhap vao 6 so nguyen: "; cin>> a >> b >> c >> d >> e >> f;
    if (a>0) demduong++;
    if (b>0) demduong++;
    if (c>0) demduong++;
    if (d>0) demduong++;
    if (e>0) demduong++;
    if (f>0) demduong++;

    if (a<0) demam++;
    if (b<0) demam++;
    if (c<0) demam++;
    if (d<0) demam++;
    if (e<0) demam++;
    if (f<0) demam++;

    if (a == 0) demkhong++;
    if (b == 0) demkhong++;
    if (c == 0) demkhong++;
    if (d == 0) demkhong++;
    if (e == 0) demkhong++;
    if (f == 0) demkhong++;

    cout<<"Co " << demduong << " so duong (+), " << demam << " so am (-), " << demkhong << " so khong (0).";
    return 0;
}