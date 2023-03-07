#include "ActionsWithArray.h"
#include<iostream>

int main() {
    int* arr1 = new int[256];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    Arr array1 = { arr1, 3,0 };

    array1.allocateMemory(arr1, array1.capacity, array1.size);


    array1.allocateMemory(arr1, array1.capacity, array1.size);

    array1.addElement(arr1, array1.size, array1.capacity, 1);
    array1.addElement(array1, array1.size, array1.capacity, 2);
    array1.addElement(arr1, array1.size, array1.capacity, 3);

    std::cout << "The capacity of the array is " << array1.capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << array1.size << std::endl;
    array1.print(arr1, array1.size, array1.capacity);

    array1.addElement(arr1, array1.size, array1.capacity, 4, 2);

    std::cout << "\nThe capacity of the array is " << array1.capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << array1.size << std::endl;
    array1.print(arr1, array1.size, array1.capacity);

    //removeElement(arr1, array1.size, array1.capacity, 0);
    //removeElement(array, size, capacity, 0);
    //removeElement(array, size, capacity, 0);

    std::cout << "\nThe capacity of the array is " << array1.capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << array1.size << std::endl;

    array1.print(arr1, array1.size, array1.capacity);

   // freeMemory(arr1, array1.size, array1.capacity);
}