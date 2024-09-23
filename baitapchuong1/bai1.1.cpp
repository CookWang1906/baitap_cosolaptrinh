//1.1 Giải phương trình ax2 + bx + c = 0 với các hệ số là các số thực
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a, b, c;
cout << "Nhap he so a: "; cin >> a;
cout << "Nhap he so b: "; cin >> b;
cout << "Nhap he so c: "; cin >> c;
if (a == 0)
{
    cout << "Phuong trinh vo nghiem.";
}
else
    {
    float delta;
    delta = b*b - 4*a*c;
    float x1, x2;
    if (delta > 0)
        {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "Phuong trinh co 2 nghiem phan biet:\nx1 = " << x1 << "\nx2 = " << x2;
        }
    else if (delta == 0)
        {
        x1 = -b / (2*a);
        cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x1;
        }
    else
    {
        cout << "Phuong trinh vo nghiem.";
    }
    }
return 0;
}