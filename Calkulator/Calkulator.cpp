#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    setlocale(LC_ALL, "Rus");
    int choice;
    double num1, num2;

    do {
        cout << "\nВыберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа: \n";
            cin >> num1 >> num2;
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Результат: " << num1 / num2 << endl;
            else
                cout << "Ошибка: деление на ноль!" << endl;
            break;
        case 4:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case 5:
            cout << "Введите число и степень: ";
            cin >> num1 >> num2;
            cout << "Результат: " << pow(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Результат: " << sqrt(num1) << endl;
            else
                cout << "Ошибка: нельзя извлечь квадратный корень из отрицательного числа!" << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << num1 / 100 << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            else
                cout << "Ошибка: нельзя найти факториал отрицательного числа!" << endl;
            break;
        case 9:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Ошибка: неверный выбор операции. Попробуйте еще раз.\n";
            break;
        }
        cout << "______________________________________\n";
    } while (choice != 9);

    return 0;
}