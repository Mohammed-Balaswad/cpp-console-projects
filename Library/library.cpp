#include<iostream>
using namespace std;

const int MAX_BOOKS = 100; 
struct Book 
{
    string title;
    string author;
    float price;
};

Book books[MAX_BOOKS];

int numBooks = 0;

void delBook()
{
	if (numBooks >= MAX_BOOKS) 
	{
        cout << "The Maximum Allowable Books In The Library Have Been Reached." << endl;
        return;
    }

    Book delBook;

    cout << "Enter The Name Of The Book: ";
    getline(cin, delBook.title);

    cout << "Enter The Author's Name: ";
    getline(cin, delBook.author);

    cout << "Enter The Price: ";
    cin >> delBook.price;

    books[numBooks] = delBook;
    int ch;
    cout<<"\n* * If You Sure That You Want To Delete This Book Press '1' Else Not Press '0' * * \n";
    cin>>ch;
    if(ch==0)
    goto r;
    else 
    numBooks--;

    cout << "\nThe Book Has Been Deleted Successfully!\n" << endl;
    r:
     cout<<"\n";
    
}
	
void addBook() 
{
    if (numBooks >= MAX_BOOKS) 
	{
        cout << "The Maximum Allowable Books In The Library Have Been Reached." << endl;
        return;
    }

    Book newBook;

    cout << "Enter The Name Of The Book: ";
    getline(cin, newBook.title);

    cout << "Enter The Author's Name: ";
    getline(cin, newBook.author);

    cout << "Enter The Price: ";
    cin >> newBook.price;

    books[numBooks] = newBook;
    numBooks++;

    cout << "\nThe Book Has Been Added Successfully!\n" << endl;
}

void displayBooks() {
    if (numBooks == 0) {
        cout << "There Is Not Any Book In The Library." << endl;
        return;
    }

    cout << "\n\t\t\t\t\t\t* * All The Books: * *" << endl;
    for (int i = 0; i < numBooks; i++) {
        cout << "Book Name: " << books[i].title << endl;
        cout << "Book Author: " << books[i].author << endl;
        cout << "Book Price: " << books[i].price << endl;
        cout << "-------------------------" << endl;
    }
}

void searchBook() {
    if (numBooks == 0) {
        cout << "There Is Not Any Book In The Library." << endl;
        return;
    }

    string searchTitle;

    cout << "Enter The Book Name: ";
    getline(cin, searchTitle);

    for (int i = 0; i < numBooks; i++) 
	{
        if (books[i].title == searchTitle) 
		{
            cout << "The Book Was Found!" << endl;
            cout << "Book Name: " << books[i].title << endl;
            cout << "Book Author: " << books[i].author << endl;
            cout << "Bokk Price: " << books[i].price << endl;
            return;
        }
    }
    cout <<"The Book Was Not Found!." << endl;
}

int main() 
{
    Book book1 = {"The Catcher in the Rye", "J.D. Salinger", 12.99};
    books[numBooks] = book1;
    numBooks++;

    Book book2 = {"To Kill a Mockingbird", "Harper Lee", 9.99};
    books[numBooks] = book2;
    numBooks++;

    Book book3 = {"1984", "George Orwell", 15.99};
    books[numBooks] = book3;
    numBooks++;

  
    int choice ; 
    while (true) {
        cout << "\t\t\t\t\t********Menu********:\a" << endl;
        cout << "\t\t\t\t 1) Add A New Book" << endl;
        cout << "\t\t\t\t 2) Searching For A Spicific Book" << endl;
        cout << "\t\t\t\t 3) View All Existing Books" << endl;
        cout << "\t\t\t\t 4) Delete Book" << endl;
        cout << "\t\t\t\t 5) Exit" << endl;

        cin >> choice;
        system("cls");
        cin.ignore();
		 
        switch (choice) {
            case 1:
                choice;
                addBook();
                break;
            case 2:
                choice;
                searchBook();
                break;
            case 3:
                choice;
                displayBooks();
                break;
                
            case 4:
                choice;
                delBook();
                break;

            case 5:
                goto t;
                break;
            
            default:
                cout << "Please Enter An Correct Between '1' And '4'.\a" << endl;
                break;
        }
    }
            t:
    	    cout << "\t\t\t\t\t(The Progrme Has Been Finished.)\a" << endl;

}
