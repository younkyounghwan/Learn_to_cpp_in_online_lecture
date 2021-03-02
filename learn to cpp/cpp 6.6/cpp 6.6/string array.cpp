#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// cstyle code
	char source[] = "copy this!";
	char dest[50] = "";

	cout << strcmp(source, dest) << endl;  // return -1 diff

	strcpy_s(dest, 50, source);

	//strcat_s concatenation
	//strcmp compare 

	cout << strcmp(source, dest) << endl; // return 0 same

	strcat_s(dest, source);

	cout << source << endl;
	cout << dest << endl;

	

	

	/*
	char myString[] = "string";

	for (int i = 0; i < 7; i++) {
		cout << (int)myString[i] << endl;
	}
	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	*/

	char mystring[255];
	cin.getline(mystring, 255); // 빈칸까지 문자열로 입력을 받음
	//cin.ignore(32767,'\n');
	//cin >> mystring;

	// mystring[4] = '\0'; // 문자열이 출력될 떄 컴파일러가 null 이전까지 출력하도록 설정되어 있다. 
	
	int ix = 0;
	while (1)
	{
		if (mystring[ix] == '\0') break;
		cout << mystring[ix] << " " << (int)mystring[ix] << endl;
		ix++;
	}
	


	return 0;
}