for i in range(1,100):
   grade=int(input("Enter the score:"))
   if grade>=90:
      print("You had A+")
   elif grade  >80 and grade <=89:
      print("You had A")
   elif grade>70 and grade <=79:
      print("You had B+")
   elif grade>60 and grade <=69:
     print("You had C")
   else:
     print("You indeed tried your best but couldn't reach tht cut off mark: Try hard next time!")