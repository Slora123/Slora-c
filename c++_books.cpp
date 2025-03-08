// Slora Bar-10708
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    Book(int id = 0, string t = "", string a = "", float p = 0.0)
    {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }
    void showDetails() const
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "---------------------------" << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    Book *books = new Book[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        string title;
        string author;
        float price;
        cout << "Enter details for book " << i + 1 << ":\n";
        cout << "Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Price: ";
        cin >> price;
        books[i] = Book(id, title, author, price);
    }
    cout << "\nBook Details:\n";
    for (int i = 0; i < n; i++)
    {
        books[i].showDetails();
    }
    delete[] books;
    return 0;
}
