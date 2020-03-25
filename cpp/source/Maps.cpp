#include <map>
#include <unordered_map>
#include <iostream>
#include <cassert>

using namespace std;

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
		cout << coronaVirusCases["china"] << endl;

	//count elements with specific key
	cout << coronaVirusCases.count("china") << endl;

	//insert: adds the pair and the sort map w.r.t key (if ordered map)
	//if the key exists, then nothing is inserted
	coronaVirusCases.insert(pair<string,int>("brazil", 2247));
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << coronaVirusCases["brazil"] << endl;
	coronaVirusCases.insert(pair<string,int>("brazil", 3000));
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << coronaVirusCases["brazil"] << endl;
	
	//emplace: the same as insert, but pair is constructed in-place function
	//if the key exists, then nothing is inserted
	coronaVirusCases.emplace("brazil",4000);
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << coronaVirusCases["brazil"] << endl;

	//assignment: replaces the value
	coronaVirusCases["brazil"] = 5000;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "####" << coronaVirusCases["brazil"] << endl;
	cout << "Brazil count: " << coronaVirusCases.count("brazil") << endl;
	//at: replaces the value
	coronaVirusCases.at("brazil") = 6000;
	if(coronaVirusCases.find("brazil") != coronaVirusCases.end())
		cout << "####" << coronaVirusCases["brazil"] << endl;
	cout << "Brazil count: " << coronaVirusCases.count("brazil") << endl;
	
	
	map<string,int>::iterator it;
	it = coronaVirusCases.find("brazil");
	//erase pair where iterator is pointing
	coronaVirusCases.erase (it);
	cout << "Brazil count after erasing:" << coronaVirusCases.count("brazil") << endl;

	cout << "Map max size:" << coronaVirusCases.max_size() << endl;
	cout << "Map size:" << coronaVirusCases.size() << endl;
	cout << "Map is empty? " << coronaVirusCases.empty() << endl << endl;

	cout << "## Iterating over maps ##" << endl;
	//for each
	for (auto& pair: coronaVirusCases) 
		cout << pair.first << ": " << pair.second << endl;
		      
	cout << endl;

	//iterator
	for (it = coronaVirusCases.begin(); it != coronaVirusCases.end(); it++) 
  		cout << it->first << ": " << it->second << endl; 

	cout << endl;

	unordered_map<string, int> coronaVirusDeaths;
	coronaVirusDeaths["china"] = 3277;
	coronaVirusDeaths["italy"] = 6820;
	coronaVirusDeaths["usa"] = 698;
	coronaVirusDeaths["spain"] = 2991;
	coronaVirusDeaths["germany"] = 159;
	
	//for each
	for (auto& pair: coronaVirusDeaths) 
		cout << pair.first << ": " << pair.second << endl;

	cout << "Map max size:" << coronaVirusDeaths.max_size() << endl;
	cout << "Map size:" << coronaVirusDeaths.size() << endl;
	cout << "Map is empty? " << coronaVirusDeaths.empty() << endl << endl;
	//swap
	//clear
	
	return 0;
}
