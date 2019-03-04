#include <iostream>
#include <string>
#include "BigInt.h"

using namespace std;

void input_nums(BigInt &num1, BigInt &num2){
    string str_num1, str_num2;
    cout << "Введите первое число" << endl;
    cin >> str_num1;
    cout << "Введите второе число" << endl;
    cin >> str_num2;
    num1 = str_num1;
    num2 = str_num2;
}

void input_one_num(BigInt &num1){
    string str_num1;
    cout << "Введите число" << endl;
    cin >> str_num1;
    num1 = str_num1;
}


int main(){
    setlocale(LC_ALL, "Russian");
    BigInt num1, num2;
    int optional_num = 0;
    cout << "########################################" << endl;
    cout << "#       BigInt simple calculator       #" << endl;
    cout << "########################################" << endl << endl;
    char answer = 'z';
    while(answer != '0'){
        cout << "Выберете операцию над числами" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Целочисленное деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Целочисленное извлечение корня" << endl;
        cout << "0. Выход" << endl;
        cin >> answer;
        cout << endl;
        switch (answer){
            case '1':
                input_nums(num1, num2);
                cout << "num1 + num2 =" << endl << (num1 + num2) << endl << endl;
                break;

            case '2':
                input_nums(num1, num2);
                cout << "num1 - num2 =" << endl << (num1 - num2) << endl << endl;
                break;

            case '3':
                input_nums(num1, num2);
                cout << "num1 * num2 =" << endl << (num1 * num2) << endl << endl;
                break;

            case '4':
                input_nums(num1, num2);
                cout << "num1 / num2 =" << endl << (num1 / num2) << endl << endl;
                break;

            case '5':
                input_one_num(num1);
                cout << "Введите нужную степень" << endl;
                cin >> optional_num;
                cout << "num1^" << optional_num << " =" << endl << (num1.pow(optional_num)) << endl << endl;
                break;

            case '6':
                input_one_num(num1);
                cout << "Введите нужную степень корня" << endl;
                cin >> optional_num;
                cout << optional_num << "^√(num1) =" << endl << (num1.sqrt(optional_num)) << endl << endl;
                break;
        
            default:
                break;
        }
    }
    return 0;
}