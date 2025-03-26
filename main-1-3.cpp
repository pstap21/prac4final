// main-1-3.cpp

#include <iostream>
#include "Person.h"

// Declare the deepCopyPersonList function
PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Create a sample PersonList
    PersonList originalList;
    originalList.numPeople = 2;
    originalList.people = new Person[originalList.numPeople];
    
    // Initialize the original list with some data
    originalList.people[0].name = "John Doe";
    originalList.people[0].age = 30;
    originalList.people[1].name = "Jane Doe";
    originalList.people[1].age = 28;
    

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", Age: " << originalList.people[i].age << std::endl;
    }

    
    PersonList copiedList = deepCopyPersonList(originalList);
    
    
    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", Age: " << copiedList.people[i].age << std::endl;
    }

   
    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
