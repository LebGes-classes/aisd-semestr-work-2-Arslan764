#ifndef PRINTER_H
#define PRINTER_H

#include <vector>
#include <map>
#include <iostream>

template <typename T>
class Printer
{
public:

    void printVector(const std::vector<T> vector);
    void printMap(const std::map<int, T> vector);
};

template <typename T>
void Printer<T>::printVector(std::vector<T> vector)
{
    for (int elem : vector)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void Printer<T>::printMap(const std::map<int, T> map)
{
    for (auto pair : map)
    {
        std::cout << pair.first << " -> ";
        for (auto value : pair.second)
        {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

#endif