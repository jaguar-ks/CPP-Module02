# *C++ - Module 02*

## new conceptes:
1. [Orthodox Canonical class form](#orthodox-canonical-class-form)
1. [Overloading operators](#overloading-operators)

---

## **Orthodox Canonical class form**
In object-oriented programming, the term "Class in Orthodox Canonical Form" refers to a set of guidelines or principles for designing classes that adhere to good coding practices and promote maintainability, readability, and extensibility of the codebase.
### ***Guidelines***
1. **Single Responsibility Principle (SRP):**
> Each class should have a single responsibility or purpose. It should encapsulate a specific behavior or represent a distinct entity. This helps in keeping the class focused and makes it easier to understand, test, and maintain.

2. **Open-Closed Principle (OCP):**
> Classes should be open for extension but closed for modification. This principle encourages designing classes in a way that allows them to be easily extended with new behavior or functionality without modifying the existing code. This promotes code reuse and minimizes the impact of changes on the existing codebase.

3. **Liskov Substitution Principle (LSP):**
> Derived classes should be substitutable for their base classes. This means that objects of derived classes should be able to be used wherever objects of the base class are expected, without altering the correctness of the program. This principle ensures that inheritance hierarchies are designed in a way that maintains the expected behavior and contracts of the base class.

4. **Interface Segregation Principle (ISP):**
> Clients should not be forced to depend on interfaces they do not use. This principle suggests segregating larger interfaces into smaller and more specific ones, so that clients only need to depend on the interfaces that are relevant to them. This promotes loose coupling and makes the codebase more adaptable to changes.

5. **Dependency Inversion Principle (DIP):**
> High-level modules should not depend on low-level modules. Both should depend on abstractions. This principle encourages designing classes and modules in a way that promotes dependency on abstractions rather than concrete implementations. This allows for easier testing, flexibility, and interchangeability of components.

By following these guidelines, classes can be designed in a more modular, maintainable, and extensible manner, leading to code that is easier to understand, modify, and reuse. Applying the Orthodox Canonical Form principles can contribute to creating a well-structured and robust codebase.

---
## **Overloading operators**

You can redefine or overload the function of most built-in operators in C++. These operators can be overloaded globally or on a class-by-class basis. Overloaded operators are implemented as functions and can be member functions or global functions.

can overload any of the following operators:
![overloadable-operators](https://miro.medium.com/v2/resize:fit:942/format:webp/1*m20PRnRecz89iJAyvcvrMg.png)
