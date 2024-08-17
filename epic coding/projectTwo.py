#input
baseSpeed = float(input("Enter the base speed of the attack: "))
bonusSpeed = float(input("Enter the bonus attack speed %: "))
level = int(input("Enter the level: "))

#solving
bonusSpeed = bonusSpeed/100
currentSpeed = baseSpeed * (1+((bonusSpeed)*(level - 1)))
currentSpeed = round(currentSpeed,2)

#output
print(f"The character/s current attack speed is {currentSpeed}")