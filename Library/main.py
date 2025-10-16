from library import Library
from bookClass import Book

def main():
    library = Library()

    book1 = Book("1984", "George Orwell", "123456")
    book2 = Book("To Kill a Mockingbird", "Harper Lee", "789101")
    library.add_book(book1)
    library.add_book(book2)

    library.borrow_book("123456")  # Borrow "1984"
    library.list_avalible_books()  # Should only list "To Kill a Mockingbird"
    print('------------------------------------------------------------------------------------------------')
    library.return_book("123456")   # Return "1984"
    library.list_avalible_books()  # Both books should now be available
    print('------------------------------------------------------------------------------------------------')

    #sort
    library.sort()
    library.list_avalible_books()

    print('------------------------------------------------------------------------------------------------')

    #sort again
    library.sort()
    library.list_avalible_books()

main()