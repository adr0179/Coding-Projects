class Book():
   def __init__(self, title, author, isbn):
      self.__title = title
      self.__author = author
      self.__isbn = isbn
      self.avalible = True

   def borrow_book(self):
      if self.avalible == True:
         self.avalible = False
      else:
         print("This book is already borrowed")

   def return_book(self):
      if self.avalible == False:
         self.avalible = True
      else:
         print("This book is already returned")

   def get_title(self):
      return self.__title
    
   def get_author(self):
      return self.__author
    
   def get_isbn(self):
      return self.__isbn
   
   def __str__(self):
      return f'Title: {self.__title}, Author: {self.__author}, ISBN: {self.__isbn}, Available: {self.avalible}'