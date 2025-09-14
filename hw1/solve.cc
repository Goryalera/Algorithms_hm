#include <iostream>
#include <vector>

int main() {
    // создаём вектор, который будем использовать как стек
    std::vector<char> stack;

    stack.push_back('a');  // добавляем 'a' в стек
    stack.push_back('b');  // добавляем 'b' в стек
    stack.push_back('c');  // добавляем 'c' в стек

    // выводим элементы стека
    for (char c : stack) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
