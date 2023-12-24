#include <iostream> 

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод операндов и оператора 
    double operand1, operand2, result;
    char operation;

    std::cout << "Введите первый операнд: ";
    std::cin >> operand1;

    std::cout << "Введите оператор (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второй операнд: ";
    std::cin >> operand2;

    // Проверка деления на ноль и существования оператора 
    bool isValid = true;
    switch (operation) {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        if (operand2 != 0) {
            result = operand1 / operand2;
        }
        else {
            std::cerr << "Ошибка: деление на ноль!" << std::endl;
            isValid = false;
        }
        break;
    default:
        std::cerr << "Ошибка: неверный оператор!" << std::endl;
        isValid = false;
        break;
    }

    // Вывод результата или сообщения об ошибке 
    if (isValid) {
        std::cout << "Результат: " << operand1 << " " << operation << " " << operand2 << " = " << result << std::endl;
    }

    return 0;
}