"""
finalTransaction.py
CPE001L Final Project
A161
By:
    Borromeo, Ronnie
"""

from time import sleep
import artChoices

totalDigi = artChoices.totalDig
totalTradi = artChoices.totalTrad
total = totalDigi + totalTradi

address = ""

art = open("arts.txt", "a+")
art.write("=============================================")
art.write(f"\nTOTAL PRICE: P{total}")
art.write("\n=============================================")
art.close()

print("\n=============================================")
print("\nPROCEEDING TO CHECKOUT... ")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print("\n\n\n\n\n\n\n\n\n")

print("These are the artworks/services that you purchased: ")
sleep(2)
with open("arts.txt", "r") as g:
    art = g.read()
    print(art)
    sleep(4)

sleep(1)
print("Thank you for purchasing! To ensure that your product is safely delivered, please enter your details below:")
sleep(1.5)
name = input("\n\033[1;3mNAME:\033[0m ").capitalize()
while True:

    emailAd = input("\n\033[1;3mE-MAIL ADDRESS:\033[0m ")
    if ".com" in emailAd or ".net" in emailAd or ".ph" in emailAd:
        break
    else:
        print ("\n\033[31mInvalid email address.\033[0m")
        sleep(1)
        print ("\033[31mPlease try again.\033[0m")
        sleep(2)
        print("\n=============================================")
        sleep(0.5)

while True:

    phoneNum = input("\n\033[1;3mPHONE NUMBER [11-digit (ex. 09223452114)]:\033[0m ") 
    if len(phoneNum) == 11 and phoneNum.isnumeric(): # phone number should be 11 digits and should be numbers to proceed on the program
        
        # if there were no traditional/physical art purchased, address is not needed
        if totalTradi != 0:
            print("\n\033[1;3mFULL ADDRESS (for the delivery of Traditional/Physical Art)\033[0m")
            sleep(1)
            print("\n\033[1;3mPlease follow the following format: (House #, Street & Village, Barangay, City, Country, Zip Code)\033[0m")
            sleep(2)
            address = input("\n---->  ")
            print("\n\033[1;3mFor the shipping price, please state your region with the following prices: ") # shipping prices
            sleep(1)

            while True:
                print(f"\n[1] Luzon = \u20b1150")
                print(f"\n[2] Visayas =  \u20b1100")
                print(f"\n[3] Mindanao =  \u20b150")
                sleep(2.5)
                regChoice = input("\n\nInput the number of your choice:\033[0m ").lower()
                
                if regChoice == "1":
                    total = total + 150
                    break
                elif regChoice == "2":
                    total = total + 100
                    break
                elif regChoice == "3":
                    total = total + 50
                    break
                else:
                    print ("\n\033[31mInvalid Input\033[0m")
                    sleep(1)
                    print ("\n\033[31mPlease enter a valid option\033[0m")
                sleep(2)
                print("=============================================")
                sleep(0.5)
        else:
            break
        break
    else:
        print("\n\033[31mInvalid Phone Number. Please Try Again.\033[0m")
        sleep(2)

# last part/creation of receipt text file(text file manipulation)
receipt = open("receipt.txt", "w")
receipt.write("__________________________________________________________________________________________________\n")
receipt.write("\nThank you for purchasing at Giba Illustration and Arts Commision Services! Here is your receipt:")
receipt.write("\n==========================================================\n")
receipt.write("Buyer's Information")
receipt.write("\nNAME: " + name )
receipt.write("\nE-MAIL ADRESS: " + emailAd)
receipt.write("\nPHONE NUMBER: "+ phoneNum )
if len(address) > 1: 
    receipt.write("\nFULL ADDRESS (House #, Street & Village, Barangay, City, Country, Zip Code): " + address)
receipt.write("\n==========================================================\n")
receipt.write("\nYour final total price is P" + str(total + 1 - 1) + "\n")
receipt.write("__________________________________________________________________________________________________")
receipt.close()

print("=============================================")
print("\nPROCESSING RECEIPT...")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print("\n\n\n\n\n\n\n\n\n")

print("\033[1m\033[4mRECEIPT:\033[0m")
sleep(2)

with open("receipt.txt", "r") as f:
    re = f.read()
    print(re) #displays receipt in the terminal
    sleep(4)

print("\nPROCESSING...")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print(".")
sleep(1)
print("\n\n\n\n\n\n\n\n\n")

print("Thank you!")
sleep(2)
print("\nFor your \033[1mDIGITAL ART\033[0m purchases, please send your reference images to '\033[1mgibaillu@gmail.com\033[0m.'")
sleep(3)
print("\nFor your convenience and to ensure the safe delivery of your product, we will update the status through e-mail and text messages to keep you updated, so stay tuned!")
sleep(5)

# break
