#include <iostream>
using namespace std;


class Library
{
protected:
    string libraryName;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> libraryName;
    }

    void displayLibrary()
    {
        cout << "Library Name: " << libraryName << endl;
    }
};


class Books : public Library
{
private:
    string bookName;

public:
    void getBook()
    {
        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void displayBook()
    {
        displayLibrary();
        cout << "Book Name: " << bookName << endl;
    }
};


class Magazines : public Library
{
private:
    string magazineName;

public:
    void getMagazine()
    {
        cout << "Enter Magazine Name: ";
        cin >> magazineName;
    }

    void displayMagazine()
    {
        displayLibrary();
        cout << "Magazine Name: " << magazineName << endl;
    }
};

int main()
{
    Books b;
    Magazines m;

    cout << "Enter details for Book:\n";
    b.getLibrary();
    b.getBook();

    cout << "\nEnter details for Magazine:\n";
    m.getLibrary();
    m.getMagazine();

    cout << "\n--- Book Details ---\n";
    b.displayBook();

    cout << "\n--- Magazine Details ---\n";
    m.displayMagazine();

    return 0;
}

