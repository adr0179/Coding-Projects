class Library():
    def __init__(self):
        self.__books = []

    def add_book(self, book):
        self.__books.append(book)

    def remove_book(self, isbn):
        for book in self.__books:
            if (isbn == book.get_isbn()):
                self.__books.remove(book)
                return
        print("No book found with that isbn") 

    def borrow_book(self, isbn):
        for book in self.__books:
            if (isbn == book.get_isbn()):
                book.borrow_book()
                return
        print("No book found with that isbn") 
    
    def return_book(self, isbn):
        for book in self.__books:
            if (isbn == book.get_isbn()):
                book.return_book()
                return
        print("No book found with that isbn") 

    def list_avalible_books(self):
        for book in self.__books:
            if book.avalible == True:
                print(book)

    def sort(self):
        sort_filter = input("Sort by Author or by Title?: ").strip().lower()

        if (sort_filter == 'author'):
            sort = input("Ascending or Descending Order?: ").strip().lower()
            if sort == 'ascending':
                self.__books.sort(key=lambda book: book.get_title())
            elif sort == 'descending':
                self.__books.sort(key=lambda book: book.get_title(), reverse=True)
            else:
                print("Invalid input. Please enter 'Ascending' or 'Descending'.")

        if (sort_filter == 'title'):
            sort = input("Ascending or Descending Order?: ").strip().lower()
            if sort == 'ascending':
                self.__books.sort(key=lambda book: book.get_author())
            elif sort == 'descending':
                self.__books.sort(key=lambda book: book.get_author(), reverse=True)
            else:
                print("Invalid input. Please enter 'Ascending' or 'Descending'.")