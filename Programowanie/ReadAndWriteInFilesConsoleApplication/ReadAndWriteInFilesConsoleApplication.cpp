
#include <iostream>
#include <fstream>
//zapis do pliku
void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imie\n";
    std::cin >> name;

    std::cout << "Podaj wiek\n";
    std::cin >> age;

    std::ofstream writeToFile;
    writeToFile.open("c:\\plik2C.txt", std::ios_base::app);

    if (writeToFile.is_open() == true)
    {
        //praca na pliku
        writeToFile << name << "\n" << age << "\n";
        writeToFile.flush();
        //wrirteToFile << age;

        writeToFile.close();
    }
}
