from time import sleep

commsOptions = ("full body", "half body", "face", "portrait")

fB = 45
hB = 35
F = 20
P = 17.5

print("\nHello! Welcome to the GibaGiba Illustration and Arts Commision, where we give you the best quality artwork from our talented artists!")
sleep(2)
print("What would you like to buy from our offers?")
sleep(3)
print("\nChoose the following:")
sleep(2)
print(" 1. Full Body \n 2. Half Body \n 3. Face \n 4. Portrait")
sleep(3)

def commChoice():
    while True:

        userInput = input("\n\nPlease type your choice: ")

        if userInput.lower() in commsOptions:
            break

        else:
            print("\nOption not available! Please try again.")
            sleep(3)   

    if (userInput == commsOptions[0]):
        print(f"Great! That would be ${fB}. ")
        sleep(2)

    elif (userInput == commsOptions[1]):
        print(f"Nice! That would be ${hB}. ")
        sleep(2)

    elif (userInput == commsOptions[2]):
        print(f"Awesome! That would be ${F}. ")
        sleep(2)
    
    elif (userInput == commsOptions[3]):
        print(f"Okay! That would be ${P}. ")
        sleep(2)
        
commChoice()

print("Wow!") 

