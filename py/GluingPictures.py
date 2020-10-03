
city = input()
n_friends = int(input())
friends = []
for i in range(n_friends):
    friends.append(input())

city_combinations = set()
def create_city_combinations():
    for window in range(1,len(city)+1):
        for i in range(0,len(city)):
            if (i+window) > len(city):
                break
            crop = city[i:i+window]
            city_combinations.add(crop) 

create_city_combinations()
count = 0

def find_substring_in_city(friend):
    global count
    #import pdb; pdb.set_trace()
    for window in range(len(friend),0,-1):
        #window = 2
        # city[0:2], city[1:3], ... city[8:10]
        for i in range(0,len(friend)):
            if (i+window) > len(friend):
                break
            substring = friend[i:i+window]
            if substring in city_combinations:
                count = count + 1
                if i != 0:
                    find_substring_in_city(friend[0:i])
                if (i+window) != len(friend):
                    find_substring_in_city(friend[i+window:len(friend)])
                return
            elif window == 1 and substring not in city_combinations:
                count = -1

for friend in friends:
    find_substring_in_city(friend)
    print(count)
    count = 0
