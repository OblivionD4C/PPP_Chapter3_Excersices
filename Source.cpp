#include <algorithm>
#include <ranges>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
//#include "PPP.h"
using namespace std;



int main()
{
	//9 + 10 chess reward, how many squares requierd for... 1000 , 1000000,1000000000
	constexpr int totalsquares = 64;

	double totalRice{ 1 };
	double currentAmount{1};
	/*int totalRice{ 1 };
	int currentAmount{1};*/


	bool reached1000 = false;
	bool reached1000000 = false;
	bool reached1000000000 = false;
	cout << "square" << '\t' << "grains" << '\n';

	for (int i = 1; i <= totalsquares; i++)
	{
		if (totalRice <= 0) // check if INT is maxed , not relevent for double
		{
			cout << i << " squares is too much! " << "empire has no more grains!!!!" << '\n' << " we only have:" << totalRice;
			break;
		}
		cout << i << '\t' << currentAmount << '\n';

		

		//doubling happens after printing grains for square i, so totalRice corresponds to square i+1 at the moment you check.
		if (totalRice >= 1000 && reached1000 == false)
		{
			cout << "you have reached 1000 grains." << "on square number:" << i  << '\n';
			reached1000 = true;
		}
		else if(totalRice >= 1000000 && reached1000000 == false)
		{
			cout << "you have reached 1000000 grains." << "on square number:" << i << '\n';
			reached1000000 = true;
		}
		else if (totalRice >= 1000000000 && reached1000000000 == false)
		{
			cout << "you have reached 1000000000 grains." << "on square number:" << i << '\n';
			reached1000000000 = true;
		}
	

		totalRice *= 2;
	 currentAmount = totalRice;

	}//loop end



}//main end



//2 Write a program that reads a string from input and then, for eachcharacter read, prints out the character and its integer value on a line.

//std::string aWord{};
//
//std::cout << "write a word" << '\n';
//std::cin >> aWord;
//
//for (char letter : aWord)
//{
//	std::cout << letter << '\t' << letter - 0 /*turn char into int (asci) value*/ << '\n';
//}



//3 If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it, ” fix the program in §3.6.3 so that it always prints out a median.Hint: A median need not be an element of the sequence.
//std::vector<double> numbers{ 1, 3, 5, 7, 9, 11 };
//int median{};
//
//std::ranges::sort(numbers);
//
//
//int mid = numbers.size() / 2;
//if (numbers.size() % 2 == 0) //even
//{
//	median = (numbers[mid] + numbers[mid - 1]) / 2;
//	std::cout << " median= " << '\t' << median << '\n';
//
//}
//else {
//	median = numbers[mid];
//	std::cout << "median" << '\t' << median << '\n';
//}


	//4
// ==== Loop Styles for Reading Distances ====
//
// 1. for (double x; std::cin >> x; )  ← best for unknown amount of input
// 2. while (std::cin >> x)           ← same as above, more explicit
// 3. for (int i = 0; i < N; ++i)     ← use when number of inputs is known
// 
// 
//std::vector<double> distances;
//double smallestSoFar{ 0 };
//double largestSoFar{ 0 };
//double meanOfDistance{};
//double sumOfDistances{};
//bool isFirstIteration{ true };
//std::cout << "enter a distance between two cities:" << '\n';
//
//for (double distance;std::cin >> distance;)
//{
//	distances.push_back(distance);
//
//	if (isFirstIteration)
//	{
//		std::cout << "this was the first distance entered:" << distance << '\n';
//		largestSoFar = distance;
//		smallestSoFar = distance;
//		sumOfDistances += distance;
//		isFirstIteration = false;
//		continue;
//	}
//
//	if (distance > largestSoFar)
//	{
//		largestSoFar = distance;
//	}
//	else if (distance < smallestSoFar)
//	{
//		smallestSoFar = distance;
//	}
//	sumOfDistances += distance;
//
//	std::cout << "enter a distance between two cities:" << '\n';
//
//}
//meanOfDistance = sumOfDistances / distances.size();
//std::cout << " the smallest distance:" << '\t' << smallestSoFar << '\n';
//std::cout << " the largest distance:" << '\t' << largestSoFar << '\n';
//std::cout << " the mean distance:" << '\t' << meanOfDistance << '\n';



//5 seven question guessing name 
//int end{ 100 };
//int begin{ 1 };
//int mid{ (100 + 1) / 2 };
//bool answer;
//
//
//while (begin != end) // using mid we re-assign end and begin until they equal each other , which means we found the guess. It uses true binary search:
//{
//	mid = (end + begin) / 2;
//	cout << "is your number smaller or equal to:" << mid << '?' << '\n';
//	cin >> answer;
//	if (answer)
//	{
//		end = mid;
//	}
//	else
//	{
//		begin = mid + 1;// bcs it cant be mid so we start from one number after it
//	}
//}
//cout << " your number is:" << mid << '\n';


//6 calculator 
	//constexpr char div = '/';
	//constexpr char add = '+';
	//constexpr char sub = '-';
	//constexpr char mult = '*';
//double number1{ 0 };
	//double number2{0 };
	//char opreator;

	//cout << "enter a number followed by an opreator and another number:" << '\n';
	//while (cin >> number1 >> opreator >> number2)
	//{
	//	cout << " result:" << '\t';
	//	switch (opreator)
	//	{
	//	case div:
	//		cout << number1 / number2;
	//		break;
	//	case add:
	//		cout << number1 + number2;
	//		break;
	//	case sub:
	//		cout << number1 - number2;
	//		break;
	//	case mult:
	//		cout << number1 * number2;
	//		break;
	//	}
	//	cout << '\n' << "enter a number followed by an opreator and another number:" << '\n';
	//}


//7
//vector<string> wordNums{ "zero","one","two","three","four","five","six","seven","eight","nine" };
//bool isAWord = false;
//bool string_is_number(string Str1) // not used in this questions
//{
//	int number;
//	string word;
//	istringstream check(Str1);
//
//	if (!(check >> number))
//	{
//		//cout << Str1 <<" is not a digit form number." << '\n';
//		return false;
//	}
//	else
//	{
//		//cout << Str1 << " is a digit form number." << '\n';
//		return true;
//	}
//}
//
//int get_number()
//{
//	int val{};
//	string Str;
//	if (cin >> val)
//	{
//		if (val >= 0 && val < wordNums.size())
//		{
//			return val;
//
//		}
//		else
//		{
//			cout << "number is not in range of 0-9" << '\n';
//		}
//	}
//	else
//	{
//		cin.clear();// input failed (e.g., user typed letters instead of a number);
//		//this resets cin so we can continue reading input
//		cin >> Str;
//		for (int i = 0; i < wordNums.size();i++)
//		{
//			if (wordNums[i] == Str)
//			{
//				val = i;
//				isAWord = true;
//				return val;
//			}
//
//		}
//		std::cerr << "Invalid input: " << Str << '\n';
//	}
//
//	// fallback return if everything fails , basically if input is invalid
//	return -1;
//
//}
//int main()
//{
//	//7
//	string input{};
//	int num{};
//	while (true) // run forever until we break the loop
//	{
//		cout << " enter a number in digit or word form to be converted to the oppsite form" << '\n';
//		num = get_number();
//		if (num == -1) // get_number returns -1 if input is invalid , a invalid word or a number out of range
//		{
//			break;
//		}
//		if (!(isAWord)) // check with global variable wether we have a number or word , this variable is only changed in get_number;
//		{
//			cout << "you wrote the digit:" << num << '\n';
//			cout << "its word form is:" << wordNums[num] << '\n';
//
//		}
//		else
//		{
//			cout << "you wrote:" << wordNums[num] << '\n';
//			cout << "its digit form is:" << num << '\n';
//		}
//	}
//
//}


//8 istringstream versio
// vector<string> wordNums{ "zero","one","two","three","four","five","six","seven","eight","nine" };
//bool isAWord = false;

//int get_number_from_string(string Str1) // uses istringstream to break down a given string into a stream and from there figure out if its int or string like in get_number_from_User() ,
//{
//	int val{};
//
//	istringstream x(Str1);
//
//	if (x >> val)
//	{
//		if (val >= 0 && val < wordNums.size()) // range check with vector
//		{
//			return val;
//
//		}
//		else
//		{
//			cout << "number is not in range of 0-9" << '\n';
//		}
//	}
//	else
//	{
//		for (int i = 0; i < wordNums.size();i++)
//		{
//			if (wordNums[i] == Str1)
//			{
//				val = i; // return index of matching word position , print it out with vector[val]
//				isAWord = true;
//				return val;
//			}
//
//		}
//		std::cerr << "Invalid input: " << Str1 << '\n';
//	}
//
//	// fallback return if everything fails , basically if input is invalid
//	return -1;
//
//}
//int main()
//{
//	//8 utilizing istrinstrem
//	string input{};
//	int num{};
//	constexpr char div = '/';
//	constexpr char add = '+';
//	constexpr char sub = '-';
//	constexpr char mult = '*';
//	string line{};
//	string number1{};
//	string number2{};
//	int a{};
//	int b{};
//	char opreator{};
//
//	while (true)
//	{
//		cout << "enter a number ( 0 - 9 ) followed by an opreator and another number:" << '\n';
//		getline(cin, line);
//		istringstream expr(line);
//		expr >> number1 >> opreator >> number2;
//		a = get_number_from_string(number1);
//		b = get_number_from_string(number2);
//		if (a == -1 || b == -1)
//		{
//			cout << "one of the inputs is invalid" << "\n";
//		}
//
//		cout << " result:" << '\t';
//		switch (opreator)
//		{
//		case div:
//			if (b == 0) {
//				cout << "Cannot divide by zero.\n";
//				break;
//			}
//			cout << a / b << "\n";
//			break;
//		case add:
//			cout << a + b << "\n";
//			break;
//		case sub:
//			cout << a - b << "\n";
//			break;
//		case mult:
//			cout << a * b << "\n";
//			break;
//		}
//	}
//
//}


//8 not utilizing istrinstrem
// // vector<string> wordNums{ "zero","one","two","three","four","five","six","seven","eight","nine" };
//bool isAWord = false;
// 
// the two variables above are global.
//int get_number_from_User() // uses cin ( input directly from user in the function ) . used for 7 and 8(without istringstream ver)
//{
//	int val{};
//	string Str;
//	if (cin >> val)
//	{
//		if (val >= 0 && val < wordNums.size())
//		{
//			return val;
//
//		}
//		else
//		{
//			cout << "number is not in range of 0-9" << '\n';
//		}
//	}
//	else
//	{
//		cin.clear();// input failed (e.g., user typed letters instead of a number);
//		//this resets cin so we can continue reading input
//		cin >> Str;
//		for (int i = 0; i < wordNums.size();i++)
//		{
//			if (wordNums[i] == Str)
//			{
//				val = i;
//				isAWord = true;
//				return val;
//			}
//
//		}
//		std::cerr << "Invalid input: " << Str << '\n';
//	}
//
//	// fallback return if everything fails , basically if input is invalid
//	return -1;
//
//}
// 
// //main below
//string input{};
//int num{};
//constexpr char div = '/';
//constexpr char add = '+';
//constexpr char sub = '-';
//constexpr char mult = '*';
//string line{};
//string number1{};
//string number2{};
//int a{};
//int b{};
//char opreator{};
//
//while (true)
//{
//	cout << "enter a number ( 0 - 9 ) followed by an opreator and another number:" << '\n';
//	cout << "first number:" << '\t' << '\n';
//	a = get_number_from_User();
//	cout << "opreator:" << '\t' << '\n';
//	cin >> opreator;
//	cout << "second number:" << '\t' << '\n';
//	b = get_number_from_User();
//
//	if (a == -1 || b == -1)
//	{
//		cout << " you enterd invalid input";
//		break;
//	}
//
//
//
//	cout << " result:" << '\t';
//	switch (opreator)
//	{
//	case div:
//		if (b == 0) {
//			cout << "Cannot divide by zero.\n";
//			break;
//		}
//		cout << a / b << "\n";
//		break;
//	case add:
//		cout << a + b << "\n";
//		break;
//	case sub:
//		cout << a - b << "\n";
//		break;
//	case mult:
//		cout << a * b << "\n";
//		break;
//	}
//}
