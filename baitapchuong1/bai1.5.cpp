//1.5 Nhập vào bốn số nguyên a, b, c, d
#include <iostream>
using namespace std;
int main()
{
    //a. Tìm giá trị lớn nhất, tìm giá trị nhỏ nhất.
    int a, b, c, d, minNumb, maxNumb, x;
    cout<<"Nhap vao bon so nguyen a, b, c, d: "; cin>> a >> b >> c >> d;
    minNumb = maxNumb = a;
    if (minNumb > b) minNumb = b;
    if (minNumb > c) minNumb = c;
    if (minNumb > d) minNumb = d;

    if (maxNumb < b) maxNumb = b;
    if (maxNumb < c) maxNumb = c;
    if (maxNumb < d) maxNumb = d;

    cout<<"a) Gia tri nho nhat: " << minNumb;
    cout<<", gia tri lon nhat: " << maxNumb;

    //b. Sắp xếp bốn số này theo thứ tự tăng dần.
    int tong = a + b + c + d;

    if (maxNumb != a && minNumb != a)
        x = a;
    if (maxNumb != b && minNumb != b)
        x = b;
    if (maxNumb != c && minNumb != c)
        x = c;
    if (maxNumb != d && minNumb != d)
        x = d;

    int conlai = tong - minNumb - maxNumb - x;
    if (conlai <= x)
        cout<<"\nb) Ket qua sap xep theo thu tu tang dan la: " << minNumb << " " << conlai << " " << x << " " << maxNumb;
    else
        cout<<"\nb) Ket qua sap xep theo thu tu tang dan la: " << minNumb << " " << x << " " << conlai << " " << maxNumb;
    //c. Hỏi có bao nhiêu giá trị khác nhau
    int demso = 4;
    if (a == b) demso--;
    if (a == c) demso--;
    if (a == d) demso--;
    if (b == c) demso--;
    if (b == d) demso--;
    if (c == d) demso--;
    if (demso == -2)
        cout<<"\nc) So luong gia tri khac nhau: 0";
    else
        cout << "\nc) So luong gia tri khac nhau: " << demso;

    //d. Tìm khoảng cách gần nhất giữa hai trong bốn số trên. (đúng nhiều trường hợp nhất, nhưng vẫn còn sai)
    int khoang_cach = conlai - minNumb;
    if (x - conlai < khoang_cach) khoang_cach = x - conlai; 
    if (maxNumb - x < khoang_cach) khoang_cach = maxNumb - x;
    int real = abs(khoang_cach); 
    cout<<"\nd) Khoang cach gan nhat giua hai so: "<< real;
    return 0;
}