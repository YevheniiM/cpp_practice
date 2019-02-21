#include "_1_first_task.h"
#include "_2_second_task.h"
#include "_6_fifth_task.h"

int main()
{
	// tests sum function for vector<int>
	{
		vector<int> v1(10, 1111), v2(10, 2222);
		sum(v1, v2);
		print_collection(v1);
		print_collection(v2);
	}
	// tests sum function for vector<string>
	{
		vector<string> v1(5, "hello, "), v2(5, "world!\n");
		sum(v1, v2);
		print_collection(v1);
		print_collection(v2);
	}
	// test sum + product function
	{
		vector<int> v1(10, 3), v2(10, 3);
		cout << sum_of_product<char>(v1, v2) << std::endl;
		cout << sum_of_product<int>(v1, v2) << std::endl;
		cout << sum_of_product<bool>(v1, v2) << std::endl;
	}
	// test Number class
    {
        auto intNumber = new Number<int>(10);
        auto charNumber = new Number<char>(72);
        auto doubleNumber = new Number<double>(10.123);
        auto stringNumber = new Number<string>("lol");

        cout << "intNumber = " << intNumber->get_number()*10 - 1 << std::endl;
		cout << "charNumber = " << charNumber->get_number()*10 - 1 << std::endl;
		cout << "doubleNumber = " << doubleNumber->get_number()*10 - 1 << std::endl;
		cout << "stringNumber = " << stringNumber->get_number() + " O.o" << std::endl;
    }
	return 0;
}