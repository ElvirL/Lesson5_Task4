/*
Задание 4. Банкомат — 2
Что нужно сделать
Напишите программу для банкомата.

Условие:
Однажды Вася подошёл к банкомату и захотел обналичить N рублей.
В банкомате есть купюры достоинством 100, 200, 500, 1 000, 2 000 и 5 000 рублей. 
Банкомат хочет выдать Васе запрошенную сумму, обойдясь как можно меньшим числом купюр.

Напишите программу для банкомата, которая по заданному числу N:
• решает, сколько купюр каждого номинала нужно выдать (4 по 200, 1 по 1 000) для получения суммы ровно N рублей;
• либо говорит, что выдать ровно N рублей невозможно, например если N не делится на 100.

Учтите, что банкомат не может выдать за один раз более 150 000 рублей.
При попытке запросить такую сумму должно быть выдано сообщение об ошибке. 
Например, 800 рублей нужно выдать как 1 по 500, 1 по 200 и ещё 1 по 100.

Советы и рекомендации
• Используйте как деление, так и получение остатка от деления.
• Постарайтесь выдать самый оптимальный набор купюр.
• Помните, что банкомат не может выдать за один раз более 150 000 рублей
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Введите число: ";
    cin >> n;
    
    if (n > 150000){
        cout << "Можно выдать сумму более 150000 руб";
    } 
    else if (n % 100 != 0) {
            cout << "Выдать ровно " << n << " рублей невозможно";
    }
    else {
        int count_five_thousand = n / 5000;
        n = n - count_five_thousand*5000;

        int count_two_thousand = n / 2000;
        n = n - count_two_thousand*2000;

        int count_one_thousand = n / 1000;
        n = n - count_one_thousand*1000;

        int count_five_hundred = n / 500;
        n = n - count_five_hundred * 500;

        int count_two_hundred = n / 200;
        n = n - count_two_hundred * 200;

        int count_hundred = n / 100;

        if (count_five_thousand > 0){
            cout << count_five_thousand << " купюр(а) по 5000 руб" << endl;
        }

        if (count_two_thousand > 0){
            cout << count_two_thousand << " купюр(а) по 2000 руб" << endl;
        }

        if (count_one_thousand > 0){
            cout << count_one_thousand << " купюр(а) по 1000 руб" << endl;
        }

        if (count_five_hundred > 0){
            cout << count_five_hundred << " купюр(а) по 500 руб" << endl;
        }

        if (count_two_hundred > 0){
            cout << count_two_hundred << " купюр(а) по 200 руб" << endl;
        }

        if (count_hundred > 0){
            cout << count_hundred << " купюр(а) по 100 руб" << endl;
        }



        

    } 
    
}