# Maps

Maps are structures that store values associated to keys.

In C++, we can have an ordered map (**std::map**), which is typically implemented with trees.
For this reason, **std::map is O(log(n))**.
This type of map is ordered concerning its keys.

Also, we have unordered maps (**std::unordered_map**), implemented with hashing -- typically called hash maps.
Data structures implemented with hashing are O(1).

Both implementations belongs to the standard library.

```cpp
#include <map>
#include <unordered_map>
```

## Adding key and value to maps:

- insert: if key exists, nothing happens; if key doesn't exist, insert and sort map w.r.t key
- emplace: works as insert, but pair is created within function
- assignment: if key exists, the value is replaced
- at: if key exists, the value is replaced

## Iterating on maps

- for each: you'll get a pair, where the attribute *first* is the key, and the attibute *second* is the value
- iterator: you'll have a pointer, which may further point to *first* and *second*, with the same meaning of key and value explained on for each

## Other functions

- find: moves iterator to a given key position
- count(key): returns 1 if key exists, or 0 otherwise
- size(): current size of map
- max_size(): maximum size
- empty(): returns 1 if map is empty, and 0 otherwise
- swap(map): swap contents of two maps (but they must be of same type)
- clear(): remove all entries of map

## More info

[Maps documentation reference](http://www.cplusplus.com/reference/map/map/)

[Code with example of Maps](source/Maps.cpp)

[Info of Corona Virus used in example (may be outdated)](https://www.worldometers.info/coronavirus/)
