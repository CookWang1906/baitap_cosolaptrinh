//1.6. Nhập vào ba số nguyên dương a, b, c. Hỏi a, b, c có phải số đó ba cạnh của một tam giác hay không ? Nếu có, hãy xét xem đó là tam giác đều, tam giác vuông, tam giác cân hay tam giác thường ?
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Nhap vao ba so nguyen duong a, b, c: "; cin>>a>>b>>c;
    if (a > 0 && b > 0 && c > 0)
    {
        if (a+b>c && b+c>a && a+c>b)
        {
            if (a==b && b==c && a==c) 
                cout <<"Ba so nguyen tren tao thanh tam giac deu";
            else if (a*a+b*b == c*c || c*c+b*b == a*a || c*c+a*a == b*b ) 
                cout <<"Ba so nguyen tren tao thanh tam giac vuong";
            else if (a==b || b==c || a==c) 
                cout <<"Ba so nguyen tren tao thanh tam giac can";
            else 
                cout <<"Ba so nguyen tren tao thanh tam giac thuong";
        }
        else cout << "Ba so nguyen tren khong tao thanh mot tam giac";
    }
    else cout << "Ba so nguyen tren khong tao thanh mot tam giac";
return 0;
}