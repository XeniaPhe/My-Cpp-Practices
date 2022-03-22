#include <iostream>
using namespace std;

int main()
{
	cout << "Sizeof char : " << sizeof(char) << " byte" <<endl;
	cout << "Sizeof wide char : " << sizeof(wchar_t) << " bytes" <<endl;
	cout << "Sizeof boolean : " << sizeof(bool) << " byte" <<endl;
	cout << "Sizeof void : " << sizeof(void) << " byte" <<endl;
	cout << "Sizeof short : " << sizeof(short) << " bytes" <<endl;
	cout << "Sizeof short int : " << sizeof(short int) << " bytes" <<endl;
	cout << "Sizeof int : " << sizeof(int) << " bytes" <<endl;
	cout << "Sizeof long : " << sizeof(long) << " bytes" <<endl;
	cout << "Sizeof long int : " << sizeof(long int) << " bytes" <<endl;
	cout << "Sizeof long long : " << sizeof(long long) << " bytes" <<endl;
	cout << "Sizeof long long int : " << sizeof(long long int) << " bytes" <<endl;
	cout << "Sizeof float : " << sizeof(float) << " bytes" << endl;
	cout << "Sizeof double : " << sizeof(double) << " bytes" <<endl;
	cout << "Sizeof long double : " <<sizeof(long double) << " bytes" <<endl;
	return 0;
}