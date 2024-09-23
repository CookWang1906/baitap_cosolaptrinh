//1.3 Cho 3 số nguyên. Hãy sắp xếp 3 số trên theo thứ tự tăng dần.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t;
    cout<<"Nhap 3 so nguyen a, b, c: "; cin>>a>>b>>c;
    if (a>b) {t=a; a=b; b=t;}
    if (a>c) {t=a; a=c; c=t;}
    if (b>c) {t=b; b=c; c=t;}
    cout<<"Thu tu tang dan la: " << a << "" << b << "" << c;
    return 0;
}