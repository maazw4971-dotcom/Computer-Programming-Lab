//NAME : MAAZ WAHAB 
//REG ID : BF25NWELE0719
//DEPARTMENT : ELCTRICAL
//SECTION : A 
#include <iostream> // Header file for input and output
#include <string>   // Header file for string data type
using namespace std; // Use standard namespace

// Declare structure named Book
struct Book
{
    string title;  // Structure member for book title
    string author; // Structure member for author name
    float price;   // Structure member for book price
    int pages;     // Structure member for total pages
};

int main()
{
    // Declare and initialize first structure variable
    Book book1;

    // Assign values to book1 members
    book1.title = "C++ Programming"; // Store title of first book
    book1.author = "Bjarne Stroustrup"; // Store author name
    book1.price = 1500.50; // Store price
    book1.pages = 450; // Store number of pages

    // Declare and initialize second structure variable
    Book book2;

    // Assign values to book2 members
    book2.title = "Data Structures"; // Store title of second book
    book2.author = "Schaum Series"; // Store author name
    book2.price = 1200.75; // Store price
    book2.pages = 380; // Store number of pages

    // Display information of first book
    cout << "Book 1 Information" << endl; // Display heading
    cout << "Title: " << book1.title << endl; // Display title
    cout << "Author: " << book1.author << endl; // Display author
    cout << "Price: " << book1.price << endl; // Display price
    cout << "Pages: " << book1.pages << endl; // Display pages

    cout << endl; // Print empty line

    // Display information of second book
    cout << "Book 2 Information" << endl; // Display heading
    cout << "Title: " << book2.title << endl; // Display title
    cout << "Author: " << book2.author << endl; // Display author
    cout << "Price: " << book2.price << endl; // Display price
    cout << "Pages: " << book2.pages << endl; // Display pages

    return 0; // End program
}