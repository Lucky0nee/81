#include <list>
#include <ctime>
#include <iostream>

int main() {
	srand(time(NULL));
	std::list <int> list1;
  	std::list <int> templist1;
	std::list <int> list2;

	std::cout << "\nlist 1:";
	for (int i = 0; i < 100; i++) {
		list1.push_back(rand() % 100);
		std::cout << list1.back() << " ";
	}
  
  templist1 = list1;
  
	std::cout << "\nlist 2:";
	for (int i = 0; i < 100; i++) {
		if (list1.back() % 7 == 0) {
			list2.push_back(list1.back());
			std::cout << list2.back() << " ";
		}

		list1.pop_back();
	}
  
    list1 = templist1;
  
	std::cout << "\nlist 1 size:"<< list1.size();
  	std::cout << "\nlist 2 size:" << list2.size();
	return 0;
}

/*
Створіть список list <int> list1, який містить 100 випадкових натуральних чисел. На
його основі створіть новий список, який містить тільки ті числа, які без остачі
діляться на 7. 

Після цього обчисліть співвідношення розміра початкового списка до
розміра новоствореного.
Початковий і кінцевий списки, а також їх розміри, виведіть на екран.
*/
