// Lesson_in_classroom_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void suma(int& a)
{
	a += a;
}
void pswap(int* a, int* b)
{
	int q = *a;
	*a = *b;
	*b = q;
}
void refswap(int& a, int& b)
{
	int q = a;
	a = b;
	b = q;
}

void viewArr(int* mas, int* size)
{
	cout << endl;
	for (int i = 0; i < *size; i++) {
		cout << *(mas + i) << "  ";
	}
}
void createArr(int*mas,int* size)
{
	for (int i = 0; i < *size; i++) {
		*(mas + i) = rand() % ((10 - 0) + 0);
	}
	viewArr(mas, size);	
}



int main()
{

	setlocale(0, "");
	srand(time(NULL));
	// Ссылки
	//int a = 5, b = 10;
	//int* pa = &a;
	//int& refa = a; //- ссылка.
	//int& refb = b;
	//int* pra = &refa; // Указатель который указывает на ссылку
	//cout << a << " " << *pa << " " << refa << " " << *pra;
	///*suma(refa);
	//cout << a << endl;;*/
	//pswap(&a, &b);
	//cout << endl << a << " " << b << endl;
	//refswap(refa, refb);
	//cout << a << " " << b;

	//int* ip = new int;   //Обьявили указатель и сказали что он динамический
	//int* othr = ip;
	//*ip = 78;
	//delete  ip;
	//int i = 0;
	//ip = &i;
	//cout << *ip;

	//int size;
	//cin >> size;
	//int* mas = new int[size];
	//for (int i = 0; i < size; i++) {
	//	*(mas + i) = rand() % (20 - (-20)) + (-20);
	//	cout << *(mas + i) << "  ";
	//}
	/*int sizea, sizeb, sizec;
	cin >> sizea >> sizeb;
	int* A = new int[sizea];
	int* B = new int[sizeb];
	createArr(A, &sizea);
	createArr(B, &sizeb);*/
	/*int np = 0;
	for (int i = 0; i < sizea; i++) {
		np = 0;
		for (int j = 0; j < sizeb; j++) {
			if (*(A + i) != *(B + j))
				np++;
			if (np == sizeb)
			{
				sizec++;
			}
		}
	}
	int* C = new int[sizec];
	for (int i = 0, g = 0; i < sizea; i++) {
		np = 0;
		for (int j = 0; j < sizeb; j++) {
			if (*(A + i) != *(B + j))
				np++;
			if (np == sizeb)
			{
				*(C + g) = *(A + i);
				g++;
			}
		}
	}*/
	/*viewArr(C, &sizec);*/

	/*sizec = sizea + sizeb;
	int* C = new int[sizec];
	for (int i = 0,j = 0; i < sizec; i++) {
		if (i < sizea)
			*(C + i) = *(A + i);
		else
		{
			*(C + i) = *(B + j);
				j++;
		}
	}
	viewArr(C, &sizec);*/
	/*int size, vibor, sizeb;
	cin >> size;
	int* A = new int[size];
	createArr(A, &size);
	cout << "\nКакие значения удалить четные(2) или нечетные(1)?\nВведите 1 или 2\n";
	cin >> vibor;


	switch (vibor)
	{
	case 1:

	{
		sizeb = 0;
		for (int i = 0; i < size; i++)
		{
			if (*(A + i) % 2 == 0)
				sizeb++;
		}
		int* B = new int[sizeb];

		for (int i = 0, j = 0; i < size; i++) {
			if (*(A + i) % 2 == 0)
			{
				*(B + j) = *(A + i);
				j++;
			}
		}
		viewArr(B, &sizeb);
		break;
	}
	case 2:
	{
		sizeb = 0;
		for (int i = 0; i < size; i++) {
			if (*(A + i) % 2 != 0)
				sizeb++;
		}
		int* B = new int[sizeb];

		for (int i = 0, j = 0; i < size; i++) {
			if (*(A + i) % 2 != 0)
			{
				*(B + j) = *(A + i);
				j++;
			}
		}
		viewArr(B, &sizeb);
		break;
	}
	}*/
	//////////////////////////////////////строковая константа
	//const int size = 5;
	//char hi[size]{ 'C','a','t',',','\0' };
	///*char hi[size] = "Cat!";*/
	//hi[1] = '\0';
	//for (int i = 0; i < size; i++)
	//	cout << hi[i];


      const char* message;
      message = " and bye!";
	  char privet[] = "and bye!";
	  char* pr = privet;
	  message = " Hello";
	  cout << " " << message << " " << pr << "\n";
	  int i = 0;
	  while (*(pr + i) != '\0')
	  {
		  cout << *(pr + i++) << " ";
	  }
}


	


