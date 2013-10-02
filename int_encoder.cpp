#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int i = 0;
	int key = 4;
	int shift = rand() % 100;
	//cout << i << endl;
	
	//gets a key value (amount of sets to output
	cout << "Enter a key-value: " << endl;
	cin >> key;
	
	//encodes based on 0
	cout << "Base Encoding" << endl;
	i += shift;
	cout << "Number in set " << key << " encoding is: " << endl;
	for (int j = 0; j < key; j++)
	{
		i++;
		++i;
	}
	cout << i-- << i++ << endl;
	
	//gets a number and encodes it based on the key
	cout << "Enter a number: ";
	cin >> i;
	//cout << i << endl;
	cout << "Encoding" << endl;
	i += shift;
	cout << "Number in set " << key << " encoding is: " << endl;
	for (int j = 0; j < key; j++)
	{
		i++;
		++i;
	}
	cout << i-- << i++ << endl;
	//cout << i++ << " " << ++i << " " << i++ << " " << ++i << " " << i++ << " " << ++i << " " << i++ << " " << ++i << endl;
	cin.ignore();
	cin.ignore();
}