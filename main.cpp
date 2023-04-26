/**
 * @author : b3lf3g0r
 * @description : this program will calculate user age using current year and birth year
 * @date : 22-04-23
*/
#include <iostream>

int main() {

    std::string full_names;
    int age, birth_year, current_year;

    std::cout << "Enter fullnames : ";
    std::cin >> full_names;

    std::cout << "Enter current year : ";
    std::cin >> current_year;

    std::cout << "Enter birth year : ";
    std::cin >> birth_year; 

    age = current_year - birth_year;

    std::cout << "Hi, " << full_names << " you are " << age << " years old." << std::endl;

    return 0;
}
