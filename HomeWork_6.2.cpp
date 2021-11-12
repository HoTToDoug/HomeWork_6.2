#include <iostream>
#include <sstream>


using namespace std;

template<typename _CharT, typename _Traits>
inline basic_ostream<_CharT, _Traits>&
endll(basic_ostream<_CharT, _Traits>& os)
{
	return flush((os.put(os.widen('\n'))).put(os.widen('\n')));
}


int main()
{
	cout << "Enter numb: ";
	int a;
	int b;
	cin >> a;
	b = (bool)isdigit(a);
	while (cin.get() != '\n') {
		cerr << "Error, repeat numb: ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> a;
		b = (bool)isdigit(a);
	};
	cout << "Your numb: " << a << endl;

	cout << "Hello" << endll;
	cout << "Bye";
}
