// ocman nazir briet
// blackghost
// CODE TO UNDESTAND CONNCEPTS OF FILING, GETLINE, POINTERS, DYNAMIC ARRAY, 2D ARRAYS, ETC
#include<stdlib.h>
#include<iostream>
#include<fstream>

using namespace std;

void fout(char arr);
void fin(char arr);
void point();
void dynamic(int* ptr, int size);
void two_d_array(int arr[5][5]);		// 2d array for integers
void two_d_ch_array(char arr[5][5]);    // 2d array for char 
void clock();

int main()
{
	char arr[20];
	fout(arr);
	fin(arr);

	point();
	
	int size = 0;			
  int *ptr;
	ptr = new int[size];			// initialization of pointer variable for dynamic memory
	dynamic(ptr, size);

	int arr[5][5];
	two_d_array(arr);

	char arr[5][5];
	two_d_ch_array(arr);
	
	clock();
	

	cout << endl;
	return 0;
}

////////////////////////////////////////////////////////////

void clock()
{
	int second = 0;
	int minute = 0;
	int hours = 0;
	//int check = 0;
	cout << "Enter Current Time\n";
	cout << "HH : ";
	cin >> hours;
	cout << "\nM M :";
	cin >> minute;
	for (int s = 0; s < 24; s++)
	{
		for (int k = 0; k < 60; k++)
		{
			for (int j = 0; j < 60; j++)
			{
				for (int i = 0; i <= 1000000000 / 2; i++)
				{
					if (i == 1000000000 / 2)
					{
						second = second + 1;

						system("cls");
						cout << endl << "++++++++++++++++++++++++++++++++++++";
						cout << endl << "Current Time:\n";
						cout << "| HH	:" << "	M M	:" << "	SS |" << endl;
						cout << "| " << hours << "	:" << "	" << minute << "	:" << "	" << second << " |" << endl;
						cout << "++++++++++++++++++++++++++++++++++++" << endl;


						if (second == 59)
						{
							minute = minute + 1;
							if (minute < 59)
							{
								system("cls");
								cout << endl << "++++++++++++++++++++++++++++++++++++" << endl;
								cout << endl << "| Minute Updated: Current Time:\n";
								cout << "| HH	:" << "	M M	:" << "	SS |" << endl;
								cout << "| " << hours << "	:" << "	" << minute << "	:" << "	" << second << " |" << endl;
								cout << "++++++++++++++++++++++++++++++++++++" << endl;

								second = 0;
								
							}

							if (minute == 59)
							{
								hours = hours + 1;
								system("cls");
								cout << endl << "++++++++++++++++++++++++++++++++++++" << endl;
								cout << endl << "| Minute Updated: Current Time:\n";
								cout << "| HH	:" << "	M M	:" << "	SS |" << endl;
								cout << "| " << hours << "	:" << "	" << minute << "	:" << "	" << second << " |" << endl;
								cout << "++++++++++++++++++++++++++++++++++++" << endl;
								second = 0;
								minute = 0;
							}
						}
					}

				}
			}
		}

	}
}


/////////////////////////////////////////////


void two_d_ch_array(char arr[5][5])
{
	ifstream fin;
	fin.open("data.txt", ios::in);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fin >> arr[i][j];
			fin.ignore();
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	fin.close();
}


////////////////////////////////////////


void two_d_array(int arr[5][5])
{
	ifstream fin;
	fin.open("data.txt", ios::in);      // file name, mode and its opening

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fin >> arr[i][j];			// fin into file
		}
	}
 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	fin.close();						// file closing
}


//////////////////////////////////////////


void dynamic(int* ptr, int size)		//decl of pointer var in function parameters
{
	cout << "Enter size: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> *(ptr + i);			
		cout << *(ptr + i);				// value print
	}
}


///////////////////////////////////////////


void point()
{
	int *ptr;						// decl of pointer in integer
	ptr = NULL;
	int arr[5] = {1,2,3,4,5};
	ptr = arr;							// pointer decl to array
	for (int i = 0; i < 5; i++)
	{
		cout << ptr+i << " ";				// address print
		cout << *(ptr+i) << " ";			// value print
	}
	

	char *ptr2;					// pointer decl in char
	ptr2 = NULL;
	char arr2[10];
	ptr2 = arr2;				//pointer decl to pointer in char
	for (int i = 0; i<5; i++)
	{
		cin >> *(ptr2 + i);		//val input from console
	}
	for (int i = 0; i<5; i++)
	{
		cout << *(ptr2 + i);		// val print to console
	}
}

////////////////////////////////////////

void fout(char arr[])
{
	ofstream fout;
	fout.open("data.txt", ios :: out);

	cout << "Enter string\n";
	cin.getline(arr, 20);
	fout << arr;

	fout.close();
}

/////////////////////////////////////////

void fin(char arr[])
{
	ifstream fin;
	fin.open("data.txt", ios :: in);
	
	fin.getline(arr, 20);
	
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	//cout << i;
	
	cout << arr;
	
	fin.close();

}
 