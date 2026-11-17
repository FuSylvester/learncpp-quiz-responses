<<<<<<< HEAD
#include <iostream>

template <typename T, typename Y>
auto sub(T x, Y y)
{
	return (x - y);
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
=======
#include <string>
#include <iostream>

int main()
{
	std::string s3{ 10,'b'};

	std::cout << s3 << std::endl;
>>>>>>> 0fd5e33c7e7a895856fca860ff4c8827421a1fc9
}