// комментарий

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "RUS");//правильно отображать русский язык
    int a, b, c, x;
    cout << "Введите число a, b и c" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    cout << "Вичисляем по формуле (а + b — f / а) + f * a * a — (a + b)" << endl;
    x = (a + b - c / a) + c * a * a - (a + b);
    cout << "x=" << x;
}
