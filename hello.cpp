// introductory program to get refamiliarized with C++ concepts

#include <iostream>

// structs

struct Car {
  std::string brand;
  int year;
  std::string model;
} myCarOne;

// unions work the same as in C

int main() {
  std::cout << "Hello World" << std::endl; // print hello world with newline

  // var types -> int double char string bool
  int age = 19;
  std::cout << age;

  std::string name; // string is an std type -> std::string
  std::cin >> name;
  // std::cout << name << std::endl;

  if (20 > 18) { // simple if, works like normal
    std::cout << "if demo";
  } else {
    std::string personality;

    std::cin >> personality;
    std::cout << personality << std::endl;

    // all above very simple!

    // arrays
    std::string cars[4];
    int ages[5] = {1, 2, 3, 4, 5};

    std::cout << ages[0]; // prints 1

    for (int i = 0; i < 5; i++) {
      std::cout << ages[i] << std::endl; // prints all of ages
    }

    // for each
    for (int age : ages) {
      std::cout << age << std::endl; // same thing as earlier loop
    }

    myCarOne.brand = "Toyota";
    myCarOne.year = 2025;
    myCarOne.brand = "Camry";

    std::cout << myCarOne.brand << std::endl;

    // pointers!!
    std::string food = "Pizza";
    std::string *ptr = &food;
    // prints addr of food
    std::cout << ptr;
    // prints value of food
    std::cout << *ptr; // ptr is the addr of the object, *ptr defererences, &ptr
                       // is the addr of the pointer itself
  }
}
