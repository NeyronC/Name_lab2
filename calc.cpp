#include <iostream>
#include <cmath> // Необхідно для функції pow()

using namespace std;

int main() {
    int a, b, op;
    double result;

    cout << "Введіть перше число\n";
    cin >> a;
    // Додано пункт 5 для піднесення до степеня
    cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n5\t^\n\n";
    cin >> op;
    cout << "Введіть друге число\n";
    cin >> b;

    switch(op) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b != 0) {
                result = (double) a / b;
            } else {
                cout << "Помилка: ділення на нуль!";
                return 1;
            }
            break;
        case 5:
            // Реалізація піднесення a до степеня b 
            result = pow(a, b);
            break;
        default:
            cout << "Неправильний оператор";
            return 1;
    }

    cout << "Результат = " << result << endl;
    return 0;
}