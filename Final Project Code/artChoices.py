"""
artChoices.py
CPE001L Final Project
A161
By:
    Borromeo, Ronnie
"""

from time import sleep

#sequential
prompt = "\n\033[1;3mInput the number of your choice\033[0m: "
totalDig = 0
totalTrad = 0

# function for digital art
def digitalArt():

    art = open("arts.txt", "a+")
    art.write("<DIGITAL ART>\n\n")
    art.close()

    global totalDig
    digPrice = 0

    simpBackground = 500
    compBackground = 1500

    #lists
    digArt = ("Character Art", "Character Design")
    choices = ('1', '2', '3', '4')

    #dictionary
    artList = {'bust': '2500', 'half body': '3500', 'full body': '4000'}

    print("=============================================\n")
    print("Welcome to the Digital Art Section! Please choose from our selected offers!")
    sleep(1.5)
    while True:

        print(f"\n\033[38;2;255;165;0m[1] \033[1;49;32m{digArt[0]} (Prices based on choice):\033[0m")
        print("     - An artwork of your selected character!")
        print("     - Can be made with or without background (based on choice)")
        print(f"\n\033[38;2;255;165;0m[2] \033[1;49;32m{digArt[1]} (\u20b16000):\033[0m")
        print("     - A concept sketch based on your descriptions.")
        print("     - The products will be the completed design along with a rough concept sheet.")
        sleep(2)

        print("---")
        sleep(1)
        digChoice = input(prompt)

        if digChoice == choices[0]:

            desc = 0
            counter = 1

            print("\n=============================================\n")
            print("You chose \033[1mCharacter Art!\033[0m")
            sleep(1)
            char = input("\n\033[1;3mInput the character of your choice:\033[0m ").capitalize()
            print("\n___\n")

            art = open("arts.txt", "a+")
            art.write("TYPE: Character Art")
            art.write(f"\nCHARACTER: {char}")

            sleep(1)
            print("Please input your descriptions of your chosen character (poses, background, theme, setting, etc.):")
            sleep(1)
            print("\033[1m(You may put as many as you like, but if you like to end, leave it blank and press [ENTER]\033[0m)")
            sleep(2)
            art.write(f"\nDESCRIPTIONS:")
            
            # executes while loop and stopping the loop when the input is blank
            while (desc != ""):
                desc = input("---> ")
                art.write(f"\n  {counter}. {desc}")
                counter += 1

            art.close()

            while True:

                print("\n___\n")
                print("Please choose from our offered compositions:")
                sleep(1)
                print(f"\n\033[38;2;255;165;0m[1] \033[1;49;32mBust Up/Waist \033[0m: \033[33m\u20b1{artList.get('bust')}\033[0m")
                print(f"\033[38;2;255;165;0m[2] \033[1;49;32mHalf Body \033[0m: \033[33m\u20b1{artList.get('half body')}\033[0m")
                print(f"\033[38;2;255;165;0m[3] \033[1;49;32mFull Body \033[0m: \033[33m\u20b1{artList.get('full body')}\033[0m")
                sleep(2)

                print("---")
                sleep(1)
                choose = input(prompt)

                if choose == choices[0]:
                    digPrice = digPrice + 2500
                    art = open("arts.txt", "a+")    #adding purchase details to the arts text file 
                    art.write(f"\nCOMPOSITION: Bust Up\n")
                    art.close()
                    break
                elif choose == choices[1]:
                    digPrice = digPrice + 3500
                    art = open("arts.txt", "a+")
                    art.write(f"\nCOMPOSITION: Half Body\n")
                    art.close()
                    break
                elif choose == choices[2]:
                    digPrice = digPrice + 4000
                    art = open("arts.txt", "a+")
                    art.write(f"\nCOMPOSITION: Full Body\n")
                    art.close()
                    break
                else:
                    print ("\n\033[31mInvalid Choice\033[0m")
                    sleep(1)
                    print ("\033[31mPlease enter a valid option\033[0m")
                    sleep(2)
                    print("\n=============================================")
                    sleep(0.5)

            while True:
                print("\n___\n")
                sleep(1)
                print("\nWould you like to add a background for your artwork?")
                sleep(1)
                bgChoice = input("\n\033[1;3mInput [Y/N]\033[0m: ").upper()

                if bgChoice == "Y":

                    print("\n___\n")    
                    sleep(1)
                    print("\nPlease choose your preffered background type: ")
                    sleep(0.5)
                    print("\033[1;3m(Note: The descriptions you inputted earlier for the background is applied here.)\033[0m")
                    sleep(1)

                    while True: 

                        print(f"\n\n\033[38;2;255;165;0m[1] \033[1;49;32mSimple Background (\u20b1{simpBackground})\033[0m")
                        print(f"\n\033[38;2;255;165;0m[2] \033[1;49;32mDetailed Background (\u20b1{compBackground})\033[0m")
                        sleep(3)

                        print("---")
                        sleep(1)
                        bgChoice2 = input(prompt)

                        if bgChoice2 == choices[0]:
                            digPrice = digPrice + simpBackground
                            art = open("arts.txt", "a+")
                            art.write("BACKGROUND: Simple \n\n")
                            art.write(f"P{digPrice}")
                            art.write(f"\n===\n")
                            art.close()
                            break

                        elif bgChoice2 == choices[1]:
                            digPrice = digPrice + compBackground
                            art = open("arts.txt", "a+")
                            art.write("BACKGROUND: Detailed \n\n")
                            art.write(f"P{digPrice}")
                            art.write(f"\n===\n")
                            art.close()
                            break
                        
                        else:
                            print("\n\033[31mInvalid Choice\033[0m")
                            sleep(1)
                            print ("\033[31mPlease enter a valid option\033[0m")
                            sleep(2)
                            print("\n=============================================")
                            sleep(0.5)
                        
                    break

                elif bgChoice == "N":
                    art = open("arts.txt", "a+")
                    art.write("BACKGROUND: None \n\n")
                    art.write(f"P{digPrice}")
                    art.write(f"\n===\n")
                    art.close()
                    break

                else:
                    print ("\n\033[31mInvalid Choice\033[0m")
                    sleep(1)
                    print ("\033[31mPlease enter a valid option\033[0m\n")
                    sleep(2)
                    print("\n=============================================")
                    sleep(0.5)
            
            print("\n___\n")
            print("\nProcessing...")
            sleep (2)
            print(f"\n\nYour total for this artwork is \033[4m\u20b1{digPrice}\033[0m.\n")

            # adding total purchased digital art
            totalDig = totalDig + digPrice
            sleep(4)

            break
        
        elif digChoice == choices[1]:
            
            desc = 0
            counter = 1
            digPrice = digPrice + 6000

            print("\n=============================================\n")
            print("You chose \033[1mCharacter Design!\033[0m")
            sleep(1)

            art = open("arts.txt", "a+")
            art.write("TYPE: Character Design")
            
            char = input("\n\033[1;3mInput the name for your character:\033[0m ").capitalize()
            sleep(1)
            print("\n___\n")
            sleep(1)
            art.write(f"\nCHARACTER: {char}")
            print("Please input your features/descriptions of your character:")
            sleep(1)
            print("\033[1m(You may put as many as you like, but if you like to end, leave it blank and press [ENTER]\033[0m)")
            sleep(1)
            art.write(f"\nDESCRIPTIONS:")
            
            while (desc != ""):
                desc = input("---> ")
                art.write(f"\n  {counter}. {desc}")
                counter += 1

            art.write(f"\n\nP6000")
            art.write(f"\n===\n")
            art.close()

            print("\n___\n")
            print("\nProcessing...")
            sleep (2)
            print(f"\n\nYour total for this artwork is \033[4m\u20b1{digPrice}\033[0m.\n")

            # adding total purchased digital art
            totalDig = totalDig + digPrice
            sleep(4)
            
            break


        else:
            print ("\n\033[31mInvalid Choice\033[0m")
            sleep(1)
            print ("\033[31mPlease enter a valid option\033[0m")
            sleep(2)
            print("\n=============================================")
            sleep(0.5)


# function for physical art
def traditionalArt():

    art = open("arts.txt", "a+")
    art.write("<TRADITIONAL ART>\n")
    art.close()

    global totalTrad
    tradPrice = 0

    #list
    tradArt = ("Painting", "Illustration/Printed Art")
    
    desc = 0
    counter = 1

    print("=============================================\n")
    print("Welcome to the Traditional/Physical Art Section! Please choose from our selected offers!")
    sleep(1.5)
    while True:

        print(f"\n\033[38;2;255;165;0m[1] \033[1;49;32m{tradArt[0]} (\u20b15000)\033[0m")
        print("     - A painting artwork delivered to you!")
        print(f"\n\033[38;2;255;165;0m[2] \033[1;49;32m{tradArt[1]} (\u20b14000)\033[0m")
        print("     - A printed/hand-drawn artwork for you to physically hold & see!")
        sleep(2)

        print("---")
        sleep(1)
        tradChoice = input(prompt)

        if tradChoice == "1":
            print("\n=============================================\n")
            print(f"You chose \033[1m{tradArt[0]}!\033[0m")
            sleep(1)

            tradPrice = tradPrice + 5000
            art = open("arts.txt", "a+")
            print()
            print("Please input your descriptions for your desired output (characters, poses, background, theme, setting, etc.):")
            sleep(1)
            print("\n\033[1m(You may put as many as you like, but if you like to end, leave it blank and press [ENTER]\033[0m)")
            sleep(2)

            art.write(f"\nDESCRIPTIONS:")
            
            while (desc != ""):
                desc = input("---> ")
                counter += 1
                art.write(f"\n  {counter}. {desc}")

            art.write(f"\n\nP5000")
            art.write(f"\n===\n")
            art.close()

            print("\n___\n")
            print("\nProcessing...")
            sleep (2)
            print(f"\n\nYour total for this artwork is \033[4m\u20b1{tradPrice}\033[0m.\n")
            sleep(4)
            break

        elif tradChoice == "2":
            print("\n=============================================\n")
            print(f"You chose \033[1m{tradArt[1]}!\033[0m")
            sleep(1)

            tradPrice = tradPrice + 4000
            art = open("arts.txt", "a+")
            print()
            print("Please input your descriptions for your desired output (characters, poses, background, theme, setting, etc.):")
            sleep(1)
            print("\n\033[1m(You may put as many as you like, but if you like to end, leave it blank and press [ENTER]\033[0m)")
            sleep(2)

            art.write(f"\nDESCRIPTIONS:")
            
            while (desc != ""):
                desc = input("---> ")
                counter += 1
                art.write(f"\n  {counter}. {desc}")

            art.write(f"\n\nP4000")
            art.write(f"\n===\n")
            art.close()

            print("\n___\n")
            print("\nProcessing...")
            sleep(2)
            print(f"\n\nYour total for this artwork is \033[4m\u20b1{tradPrice}\033[0m.\n")
            sleep(4)
            break
        
        else:
            print ("\n\033[31mInvalid Choice\033[0m")
            sleep(1)
            print ("\033[31mPlease enter a valid option\033[0m")
            sleep(2)
            print("\n=============================================")
            sleep(0.5)

    # adding total purchased traditional/physical art
    totalTrad = totalTrad + tradPrice