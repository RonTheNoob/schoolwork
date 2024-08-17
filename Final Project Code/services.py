"""
services.py
CPE001L Final Project
A161
By:
    Borromeo, Ronnie
"""

from time import sleep
from artChoices import traditionalArt, digitalArt

prompt = "\n\033[1;3mInput the number of your choice\033[0m: "
categoryChoice = ""

# making text file for the artworks purchased
art = open("arts.txt", "w+")
art.write("________________________________________")
art.write("\nArtworks Purchased:\n")
art.write("===\n")
art.close()

def firstStep():
    
    categories = ("Digital Art", "Traditional/Physical Art")
    
    print()
    print("Please choose a category: ")
    

    while True:

        # displays the types of artworks
        print("\n\033[38;2;255;165;0m[1] \033[1;49;32m", categories[0], "\033[0m")
        print("\n\033[38;2;255;165;0m[2] \033[1;49;32m", categories[1], "(w/ Shipping Fee)\033[0m")
        sleep(1)
        print("---")
        categoryChoice = input(prompt)

        if categoryChoice == "1":
            print("\n=============================================")
            print("\nPROCEEDING TO DIGITAL ART")
            sleep(1)
            print(".")
            sleep(1)
            print(".")
            sleep(1)
            print(".")
            sleep(1)
            print("\n\n\n\n\n\n\n\n\n")
            digitalArt() #executes digitalArt function from artChoices.py
            break
            
        
        elif categoryChoice == "2":
            print("\n=============================================")
            print("\nPROCEEDING TO TRADITIONAL ART")
            sleep(1)
            print(".")
            sleep(1)
            print(".")
            sleep(1)
            print(".")
            sleep(1)
            print("\n\n\n\n\n\n\n\n\n")
            traditionalArt() #executes traditionalArt function from artChoices.py
            break
            
            
        else:
            print ("\n\033[31mInvalid Choice!\033[0m")
            sleep(1)
            print ("\033[31mPlease enter a valid option.\033[0m")
            sleep(2)
            print("\n=============================================")
            sleep(0.5)
firstStep()
