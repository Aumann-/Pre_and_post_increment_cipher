#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef double value_type;
void Base(int, value_type);
void Encode(int, value_type);


int main()
{
	srand(time(NULL));
	int key = 4;
	value_type shift = rand() % 100;
	
	//gets a key value (amount of sets to output
	cout << "Enter a key-value: " << endl;
	cin >> key;
	
	Base(key, shift);
	Encode(key, shift);
	
	cin.ignore();
	cin.ignore();
}

void Base(int key, value_type shift)
{
	value_type i = 0;
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
}

void Encode(int key, value_type shift)
{
	value_type i;
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
}



