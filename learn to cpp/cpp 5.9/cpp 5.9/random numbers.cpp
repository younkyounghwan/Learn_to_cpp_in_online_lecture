#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> //std::time() - change seed numbers
#include <random>
using namespace std;



unsigned int PRNG() //Pseudo Random Number Generator
{
	static unsigned int seed = 5523; // seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}



int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX) + 1.0; //RAND_MAX = 난수 중 가장 큰 수

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	std::srand(5323); //seed 디버깅 할떄는 고정된 시드르 사용
	
	//std::srand(static_cast<unsigned int>(std::time(0)));
	
	for (int count = 1; count <= 100; ++count) {
		//cout << rand() % 4 + 5 << "\t"; // c language style

		//cout << getRandomNumber(5,8) << '\t';

		//cout << std::rand() << '\t';
		
		if (count % 5 == 0) cout << endl;
	}
	random_device rd;
	mt19937_64 mersenne(rd()); // create a mesnne twister//64bits, 32bits
	uniform_int_distribution<> dice(1, 6); // dice
	
	for (int count = 1; count < 20; ++count) {
		cout << dice(mersenne) << endl;
	}
	return 0;
}