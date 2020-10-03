def check(command, position, targetGas, numberGasStation,counter):
    if position == targetGas:
        counter += 1
    if position == numberGasStation and command == 1:
        position = 1
    elif position == 1 and command == -1:
        position = numberGasStation
    else:
        position += command
    return position, counter

numberGasStation = int(input("Number of gas station: "))
numberCommands = int(input("Number of commands: "))
targetGas = int(input("Charging station closest to the devastated area: "))

commands = []
for i in range(numberCommands):
    commands.append(int(input("Digite comando para robô:")))

position = 1
counter = 0

for command in commands:
    position,counter = check(command,position,targetGas,numberGasStation,counter)
position,counter = check(command,position,targetGas,numberGasStation,counter)

print(counter)
