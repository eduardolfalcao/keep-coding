#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

void printMap(map<string, int> myMap){
	//for each
	for (auto& pair: myMap) 
		cout << pair.first << ": " << pair.second << endl;
}

void printMap(unordered_map<string, int> myMap){
	unordered_map<string,int>::iterator it;
	//iterator
	for (it = myMap.begin(); it != myMap.end(); it++) 
  		cout << it->first << ": " << it->second << endl; 
}

int main(int argc, char **argv){
	//string is the key, int is the value
	map<string, int> coronaVirusCases;
	coronaVirusCases["china"] = 81171;
	coronaVirusCases["italy"] = 69176;
	coronaVirusCases["usa"] = 53609;
	coronaVirusCases["spain"] = 42058;
	coronaVirusCases["germany"] = 32991;

	//find: moves iterator to element
	//if element is not present, then iterator goes to end
	if(coronaVirusCases.find("china") != coronaVirusCases.end())
		cout << "Corona virus cases on China: " << coronaVirusCases["china"] << endl;

	//count: returns 1 if key is present, 0 otherwise
	cout << "Is china key present on map? " << coronaVirusCases.count("china") << endl << endl;

	//insert: adds the pair and then sort map w.r.t key (if ordered map)
	//if the key exists, then nothing is inserted
	coronaVirusCases.insert(pair<string,int>("brazil", 2247));
	cout << "Inserting brazil via insert with 2247 cases, on map" << endl;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "Corona virus cases on Brazil: " << coronaVirusCases["brazil"] << endl << endl;

	coronaVirusCases.insert(pair<string,int>("brazil", 3000));
	cout << "Inserting brazil via insert  with 3000 cases, on map" << endl;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "Corona virus cases on Brazil: " << coronaVirusCases["brazil"] << endl << endl;
	
	//emplace: the same as insert, but pair is constructed in-place function
	//if the key exists, then nothing is inserted
	coronaVirusCases.emplace("brazil",4000);
	cout << "Inserting brazil via emplace with 4000 cases, on map" << endl;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "Corona virus cases on Brazil: " << coronaVirusCases["brazil"] << endl << endl;

	//assignment: replaces the value
	coronaVirusCases["brazil"] = 5000;
	cout << "Inserting brazil via assignment with 5000 cases, on map" << endl;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "Corona virus cases on Brazil: " << coronaVirusCases["brazil"] << endl << endl;
	
	cout << "Is brazil key present on map? " << coronaVirusCases.count("brazil") << endl << endl;

	//at: replaces the value
	coronaVirusCases.at("brazil") = 6000;
	cout << "Inserting brazil via at with 6000 cases, on map" << endl;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "Corona virus cases on Brazil: " << coronaVirusCases["brazil"] << endl << endl;


	map<string,int>::iterator it;
	it = coronaVirusCases.find("brazil");
	//erase pair where iterator is pointing
	coronaVirusCases.erase(it);
	cout << "Is brazil key present on map after erasing: " << coronaVirusCases.count("brazil") << endl << endl;

	cout << "Map max size: " << coronaVirusCases.max_size() << endl;
	cout << "Map size: " << coronaVirusCases.size() << endl;
	cout << "Map is empty? " << coronaVirusCases.empty() << endl << endl;

	cout << "## Iterating over map with for each ##" << endl;
	//for each
	for (auto& pair: coronaVirusCases) 
		cout << pair.first << ": " << pair.second << endl;	      
	cout << endl;

	cout << "## Iterating over map with iterator ##" << endl;
	//iterator
	for (it = coronaVirusCases.begin(); it != coronaVirusCases.end(); it++) 
  		cout << it->first << ": " << it->second << endl; 
	cout << endl;

	map<string, int> coronaVirusCasesDoubled;
	coronaVirusCasesDoubled["china"] = 162342;
	coronaVirusCasesDoubled["italy"] = 138352;
	coronaVirusCasesDoubled["usa"] = 107218;
	coronaVirusCasesDoubled["spain"] = 84116;
	coronaVirusCasesDoubled["germany"] = 65982;

	//swap: swap contents of two maps
	cout << "Swapping contents of coronaVirusCases with coronaVirusCasesDoubled" << endl;
	coronaVirusCases.swap(coronaVirusCasesDoubled);
	cout << "Corona Virus Cases variable:" << endl;
	printMap(coronaVirusCases);
	cout << endl;
        cout << "Corona Virus Cases Doubled variable:" << endl;
	printMap(coronaVirusCasesDoubled);
	cout << endl << endl;
	//swapping back
	coronaVirusCases.swap(coronaVirusCasesDoubled);

	unordered_map<string, int> coronaVirusDeaths;
	coronaVirusDeaths["china"] = 3277;
	coronaVirusDeaths["italy"] = 6820;
	coronaVirusDeaths["usa"] = 698;
	coronaVirusDeaths["spain"] = 2991;
	coronaVirusDeaths["germany"] = 159;

	cout << "Print unordered Map: "	<< endl;
	printMap(coronaVirusDeaths);
	cout << endl;

	unordered_map<string, int> coronaVirusNotDead;
	
	for (auto& pair: coronaVirusCases) 
		coronaVirusNotDead[pair.first] = pair.second - coronaVirusDeaths[pair.first];
	
	cout << "Corona virus not dead: (cases - deaths) "  << endl;
	printMap(coronaVirusNotDead);
	cout << endl;

	//clear
	coronaVirusNotDead.clear();
	cout << "Size of map after clear(): " << coronaVirusNotDead.size() << endl;
	
	return 0;
}
