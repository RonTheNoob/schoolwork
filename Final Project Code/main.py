"""
main.py
CPE001L Final Project
A161
By:
    Borromeo, Ronnie
"""

from time import sleep

print("\n\033[1mHello! Welcome to the Giba Illustration and Arts Commision Services (GAICS), where we give you the best quality artwork from our talented artists!\033[0m")
sleep(2)
print("\nBy continuing, you can no longer cancel your purchase.")
sleep(2)
print("Would you like to proceed?")
sleep(1.5)

while True:
    proceedChoice = input("\n\n\033[1;3mInput [Y/N]\033[0m: ").upper()
    sleep(1)
    if proceedChoice == "Y":
        print("\n=============================================")
        from services import * #executes services.py

        while True:
            print("=============================================")
            print("\nWould you like to purchase another artwork/service?")
            sleep(1.5)
            affirmChoice = input("\n\n\033[1;3mInput [Y/N]\033[0m: ").upper() #string method

            if affirmChoice == "Y":
                print("\n=============================================") 
                firstStep() # executes firstStep function from services.py
                continue # goes back to the prompt if the user likes to purchase again
            elif affirmChoice =="N":
                from finalTransaction import * # executes finalTransaction.py
                break
            else:
                print()
                print("\033[31mInvalid Choice. Only type [Y/N].\033[0m")
                sleep(1.5)
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\033[1mThank you for purchasing at Giba Illustration and Arts Commision Services! We hope to see you again in the future!\033[0m\n\n")
        sleep(5)
        exit()
    elif proceedChoice == "N":
        print("\n\033[1mThank you for visiting. If you wish to change your mind and purchase our products, please restart the program.\033[0m")
        sleep(3)
        exit()
    else:
        print()
        print("\033[31mInvalid Choice. Only type [Y/N].\033[0m")
        sleep(1.5)
