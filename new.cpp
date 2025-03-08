// Slora Bar-10708
// #include <iostream>
// #include <string>
// using namespace std;
// class Book {
// private:
//     int bookID;
//     string title;
//     string author;
//     float price;
// public:
//     Book(int id = 0, string t = "", string a = "", float p = 0.0) {
//         bookID = id;
//         title = t;
//         author = a;
//         price = p;
//     }
//     void showDetails() const {
//         cout << "Book ID: " << bookID << endl;
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Price: " << price << endl;
//         cout << "---------------------------" << endl;
//     }
// };
// int main() {
//     int n;
//     cout << "Enter the number of books: ";
//     cin >> n;
//     Book* books = new Book[n];
//     for (int i = 0; i < n; i++) {
//         int id;
//         string title;
//         string author;
//         float price;
//         cout << "Enter details for book " << i + 1 << ":\n";
//         cout << "Book ID: ";
//         cin >> id;
//         cin.ignore();  
//         cout << "Title: ";
//         getline(cin, title);  
//         cout << "Author: ";
//         getline(cin, author); 
//         cout << "Price: ";
//         cin >> price;
//         books[i] = Book(id, title, author, price);
//     }
//     cout << "\nBook Details:\n";
//     for (int i = 0; i < n; i++) {
//         books[i].showDetails();
//     }
//     delete[] books;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     int employeeID;
//     string name, designation;
//     float basicSalary;
// public:
//     Employee(int id, string n, string desig, float salary) {
//         employeeID = id; name = n; designation = desig; basicSalary = salary;
//     }
//     float calculateGrossSalary() {
//         return basicSalary + (0.2 * basicSalary) + (0.1 * basicSalary);
//     }
//     void displayDetails() {
//         float grossSalary = calculateGrossSalary();
//         cout << "Employee ID: " << employeeID << "\nName: " << name << "\nDesignation: " << designation
//              << "\nBasic Salary: " << basicSalary << "\nGross Salary: " << grossSalary << endl;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter the number of employees: ";
//     cin >> n;
    
//     // Dynamically allocate memory for n Employee objects
//     Employee* employees = new Employee[n] {Employee(0, "", "", 0)}; // Initialize with dummy values

//     for (int i = 0; i < n; i++) {
//         int id;
//         string name, designation;
//         float salary;
//         cout << "Enter details for Employee " << i + 1 << ":\nEmployee ID: ";
//         cin >> id;
//         cin.ignore();
//         cout << "Name: "; getline(cin, name);
//         cout << "Designation: "; getline(cin, designation);
//         cout << "Basic Salary: "; cin >> salary;
        
//         // Initialize the employee object
//         employees[i] = Employee(id, name, designation, salary);
//     }

//     cout << "\nEmployee Details:\n";
//     for (int i = 0; i < n; i++) {
//         employees[i].displayDetails();
//     }

//     delete[] employees;  // Freeing the dynamically allocated memory
//     return 0;
// }
