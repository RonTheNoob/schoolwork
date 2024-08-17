#Logging in
print("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")
print("^                                                       ^")
print("^                          ^^                           ^")
print("^         ^^Welcome to Booking Express Samal^^          ^")
print("^                          ^^                           ^")
print("^                                                       ^")
print("^                                                       ^")
print("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")

def age_Validator():
#Sequential Structures
    while True:
        age = int(input("Please Enter your Age: "))
        if age >= 18:
            break

        else:
            print("Sorry {}, you are not old enough to use this app :< ".format(name))  

#Personal information
name = input("Please Enter your Name: ")
ContactNumber = int(input("Contact Number: "))
age_Validator()
print("--------------------------------------------------------")

print("Hi {}!! Welcome to Booking Express Samal!!! Your contact number is {}.".format(name,ContactNumber))
print("--------------------------------------------------------")
print("What do you  ")
print("1.Booking ")
print("2.Inquire ")
num1 = int(input("Please choose any one option: "))
if num1 == 1:
   print("So you choose to Book a trip to Samal 🙂")
if num1 == 2:
   print("So you choose to Inquire 🙂")