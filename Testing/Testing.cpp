//#include <iostream>
//#include <vector>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//void Display(const int* collection, size_t size);
//void ModifyElement(int& element, int newValue);
//
//int* CreateArray(size_t arraySize, int initValue = 20, int sentinal = -1);
//
//int* Apply_All(int* const array1, size_t size1, int* const array2, size_t size2);
//
//int main()
//{
//	/*int _array[5]{1,6,3,4,5};
//	int x = 0;
//	std::vector<int> _vector{5,6,7,8,9};
//	std::vector<int> *_intPTR;
//	_intPTR = &_vector;*/
//
//	//for (int i = 0; i < _vector.size(); i++)
//	//{
//	//	std::cout << &_array[i] << " + " << *_intPTR<< " , ";
//	//	std::cout << _vector[i]<< "\n";
//	//}
//
//	//for (auto nums : *_intPTR) {
//	//	std::cout << nums << std::endl;
//	//}
//
//	//std::cout << "-------------------------------\n";
//
//	//for (int i = 0;  i < (*_intPTR).size(); i++)
//	//{
//	//	if (i % 2 == 0)
//	//	{
//	//		std::cout << (*_intPTR)[i] << std::endl;
//	//	}
//	//}
//
//	//int* arrayPTR = nullptr;
//	//int size = 0;
//	//char again = NULL;
//	//do {
//
//	//	cout << "Specify a size to the array!" << endl;
//	//	cin >> size;
//
//	//	arrayPTR = new int[size];
//	//	cout << "A new array of size " << size << " has been created. \n";
//	//	cout << "Please enter the elements of said array! \n";
//
//	//	for (int i = 0; i < size; i++)
//	//	{
//	//		cin >> arrayPTR[i];
//	//	}
//	//	cout << "The elements of your array are : - \n";
//	//	for (int i = 0; i < size; i++)
//	//	{
//	//		cout << arrayPTR[i] << endl;
//	//	}
//
//	//	delete[] arrayPTR;
//	//	cout << "Do you want to start over? (Y/N)" << endl;
//	//	cin >> again;
//	//} while (again == 'y');
//
//	/*int _array[5]{1,2,3,4,5};
//
//	int* ptr1 = _array;
//	
//	while (*ptr1 != 5)
//	{
//		cout << "Old value: " << *ptr1 << endl;
//		*ptr1 += 2;
//		cout << "New value: " << *ptr1 << endl;
//		ptr1++;
//	}*/
//
//	//int array[3]{ 1,5,3 };
//
//	//int* ptr1 = array;
//	//int* ptr2 = ptr1 + 2;
//
//	//cout << ptr2 - ptr1 << endl;
//
//	//std::string x = "lol";
//	//std::string y = "lmao";
//
//	//const std::string* strPtr = &x;
//
//	//cout << *strPtr << endl;
//	//x = "nope";
//	//cout << *strPtr << endl;
//	//strPtr = &y;
//	//cout << *strPtr<<endl;
//
//	//int lol = 8;
//	//Display(&lol);
//
//	//int* newArray = { nullptr };
//
//	//newArray = CreateArray(5, 10, 3);
//	//Display(newArray, 5);
//	//cout << "----------------------------------------\n";
//	//ModifyElement(newArray[4], -1);
//	//Display(newArray, 5);
//
//	//delete[] newArray;
//
//	int* array1 = nullptr;
//	int* array2 = nullptr;
//	int* resultArray = nullptr;
//
//	int size1 = 0;
//	int size2 = 0;
//
//	cout << "Enter first Array Size:  ";
//	cin >> size1;
//	if (size1 > 0)
//	{
//		array1 = new int[size1];
//	}
//	else
//	{
//		cout << "Wrong size value!" << endl;
//		return 0;
//	}
//
//	cout << "Enter Elements of first Array:-" << endl;
//	
//	for (size_t i = 0; i < size1; i++)
//	{
//		cin >> array1[i];
//	}
//
//	cout << "-------------------------------------------------\n";
//
//	cout << "Enter second Array size:   ";
//	cin >> size2;
//	if (size2 > 0)
//	{
//		array2 = new int[size2];
//	}
//	else
//	{
//		cout << "Wrong size value!" << endl;
//		return 0;
//	}
//
//	cout << "Enter Elements of second Array:-" << endl;
//
//	for (size_t i = 0; i < size2; i++)
//	{
//		cin >> array2[i];
//	}
//
//	cout << "First array :-" << endl;
//	Display(array1, size1);
//
//	cout << "Second array :-" << endl;
//	Display(array2, size2);
//
//	resultArray = Apply_All(array1, size1, array2, size2);
//
//	cout << "Result array :-" << endl;
//	Display(resultArray, size1* size2);
//	
//	delete[] resultArray;
//	return 0;
//}
//
//int* CreateArray(size_t arraySize, int initValue, int sentinal) {
//	if (arraySize > 0)
//	{
//		int* newArray{ nullptr };
//
//		newArray = new int[arraySize];
//
//		for (size_t i = 0; i < arraySize; i++)
//		{
//			if (arraySize - i == 1)
//			{
//				newArray[i] = sentinal;
//			}
//			else
//			{
//				newArray[i] = initValue;
//			}
//		}
//
//		return newArray;
//	}
//}
//
//void Display(const int* collection, size_t size) {
//
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << "Element " << i << " :" << collection[i] << endl;
//	}
//}
//
//void ModifyElement(int& element, int newValue) {
//	element = newValue;
//}
//
//int* Apply_All(int* const array1, size_t size1, int* const array2, size_t size2) {
//	if (size1 > 0 && size2 > 0)
//	{
//		int* resultArray = nullptr;
//		int newSize = size1 * size2;
//
//		resultArray = new int[newSize];
//		int position = 0;
//		
//		for (size_t k = 0; k < size1; k++)
//		{
//			for (size_t j = 0; j < size2; j++)
//			{
//				resultArray[position] = array1[k] * array2[j];
//				++position;
//			}
//		}
//
//		return resultArray;
//	}
//}