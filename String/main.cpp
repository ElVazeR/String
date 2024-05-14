#include <iostream>
#include <cstring>// для языка C
#include <string>// Библиотека, предназначенная для работы со строками C++ (класс string).



std::string repeat_str(std::string str, int repeats) {
	std::string result;
	for (int i = 0; i < repeats; i++)
		result += str;
	return result;
}




int main() {
	system("chcp 1251>null");
	int n;
	
	// Строка в языке программирования C - упорядоченный набор символьных элементов, 
	// объединённых в массив, в конце которого располагается нуль-терминатор '\0'.
	
	// Строки языка C
	
	char cstr1[4]{ 'H','i','!','\0'};
	for (int i = 0; i < 3; i++)
		std::cout << cstr1[i];
	std::cout << std::endl;

	char cstr2[] = "Hello World!";
	std::cout << cstr1 << std::endl;
	std::cout << cstr2 << std::endl;

	// Строки языка C++
	
	std::string mystr = "Hello World!";
	std::cout << mystr << std::endl;
	std::string concat1 = "Oranges";
	std::string concat2 = "Apples";
	std::cout << concat1 + " and " + concat2 << std::endl;

	// Конкатенация - это процесс слияния двух или более строк в одну новую. Как правило, представлена в виде операции сложения.

	// Ввод строки в консоль.
	std::cout << "Введи имя -> ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Введи свой возраст!\n";
	int age;
	std::cin >> age;
	std::cout << "Твой возраст -> " << age << " слишком мал для этого заведения\n";

	std::cin.ignore();

	std::cout << "Введи свою профессию -> ";
	std::string occupation;
	std::getline(std::cin, occupation);
	std::cout << " Тяжело тебе наверное... с такой профессией " << occupation;

	// Метод - это функция, принадлежащая какому-либо классу и вызываемая исключительно объектами этого класса.

	// Методы строк.
	std::string str = "9 ystaly";
	
	// length и size, возвращающие длину строки.
	//std::cout << str.length() << std::endl;// 7
	//std::cout << str.size() << std::endl;// 7

	// Insert, вставляющий подстроку в строку.
	//str.insert(3, "###");
	//std::cout << str << std::endl; //9 y###stal

	// replace, заменяющий часть строки на подстроку.
	//str.replace(5, 3, "###");
	//std::cout << str << std::endl;// 9 yst###

	// find, возвращающий позицию первого вхождения подстроки в строку
	//std::cout << str.find('l') << std::endl; //6
	//std::cout << str.find('l',5) << std::endl; // 5 - это откуда начинается поиск (begin).

	// rfind, возвращающий позицию последнего вхождения подстроки в строку.
	//std::cout << str.rfind('y') << std::endl;//7
	//std::cout << str.rfind('ys') << std::endl;//2

	// substr, возвращающий подстроку, извлечённую из строки.
	//std::cout << str.substr(4) << std::endl; //taly
	//std::cout << str.substr(4,3) << std::endl; // tal
	

	// Функции для работы со строками.
	int num = 234;
	std::string numstr = std::to_string(num);
	std::cout << numstr << std::endl;
	std::cout << numstr[1] << std::endl;

	std::string s = "1111"; 
	int nums = std::stoi(s);
	std::cout << nums << std::endl;

	std::string casestr = "Hello!";
	for (int i = 0; i < casestr.length(); i++)
		casestr[i] = std::tolower(casestr[i]);
	std::cout << casestr << std::endl;
	
	
	// Задача 1. Повторение строки.
	std::cout << "Задача 1. \n Введите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	
	std::cout << "Введите количество повторений строки -> ";
	std::cin >> n;
	std::cout << repeat_str(str1, n) << std::endl;

	
	
	return 0;
}