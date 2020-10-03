def check(command, path, position, gasStation):
    import pdb; pdb.set_trace()
    #position: posicao atual
    position = (position+command)%len(gasStation)
    if position == 0:
        position = len(gasStation)
    path[position] += 1

    return path, position

numberGasStation,numberCommands,targetGas = map(int,input().split())
commands = list(map(int,input().split()))
commands = commands[0:numberCommands]

path =  {i:0 for i in range(1,numberGasStation+1)}
position = 1
path[position] = 1
gasStations = [i for i in range(1,numberGasStation+1)]

for command in commands:
    path,position = check(command,path,position,gasStations)
path,position = check(command,path,position,gasStations)

print(path[targetGas])
