#include <iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	int scores[] = { 84,92,76,81,56 };

	const int num_students = sizeof(scores) / sizeof(int); 

	int max_score = 0; // min_score
	

	int total_score = 0;

	for (int i = 0; i < num_students; i++) {
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score;

	}

	cout << max_score << endl;

	double avg_score = static_cast<double>(total_score) / num_students;

	return 0;
}