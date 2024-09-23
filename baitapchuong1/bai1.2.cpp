//1.2 Giải hệ phương trình bậc nhất hai ẩn số với các hệ số là các số nguyên
#include <iostream>
using namespace std;
int main()
{
int a1, b1, c1, a2, b2, c2;
float D, Dx, Dy, x, y;
cout<<"Giai he phuong trinh bac nhat hai 2 an voi cac he so la cac so nguyen\n";
cout<<"Nhap he so a1, b1, c1: "; cin >> a1 >> b1 >> c1;
cout<<"Nhap he so a2, b2, c2: "; cin >> a2 >> b2 >> c2;
D = a1 * b2 - a2 * b1;
Dx = c1 * b2 - c2 * b1;
Dy = a1 * c2 - a2 * c1;
if (D == 0) {
        if (Dx + Dy == 0)
            cout <<"He phuong trinh co vo so nghiem.";
        else
            cout <<"He phuong trinh vo nghiem.";
    } else {
        x = Dx / D;
        y = Dy / D;
        cout <<"He phuong trinh co nghiem:\nx = " << x << "\ny = " << y;
    }
    return 0;
}