//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//
//void main()
//{
//	ifstream ifile;
//	ifile.open("dfa.txt");
//	if (ifile.fail())
//	{
//		cout << "Error." << endl;
//	}
//	else
//	{
//		int as = 0;
//		string str = "";
//		getline(ifile, str);
//		for (int i = 0; str[i] != '\0'; i++)
//		{
//			if (str[i] != ',')
//			{
//				as++;
//			}
//		}
//		char *alphabet = new char[as+1];
//
//		for (int i = 0, j = 0; i < as; j++)
//		{
//			if (str[j] != ',')
//			{
//				alphabet[i] = str[j];
//				i++;
//			}
//
//		}
//		alphabet[as] = '\0';
//	
//		getline(ifile, str);
//		int ss = 0;
//		for (int i = 0; str[i] != '\0'; i++)
//		{
//			if (str[i] != ',')
//			{
//				ss++;
//			}
//		}
//		char *states = new char[ss+1];
//		for (int i = 0, j = 0; i < ss; j++)
//		{
//			if (str[j] != ',')
//			{
//				states[i] = str[j];
//				i++;
//			}
//
//		}
//		states[ss] = '\0';
//
//		char start = ' ';
//		getline(ifile, str);
//		start = str[0];
//
//		getline(ifile, str);
//		int fs = 0;
//		for (int i = 0; i<str.size(); i++)
//		{
//			if (str[i] != ',')
//			{
//				fs++;
//			}
//		}
//		char *final = new char[fs+1];
//		for (int i = 0, j = 0; i < fs; j++)
//		{
//			if (str[j] != ',')
//			{
//				final[i] = str[j];
//				i++;
//			}
//
//		}
//		final[fs] = '\0';
//		for (int i = 0; i < fs; i++)
//		{
//			cout << final[i] << endl;
//		}
//
//		char **trans = new char*[ss];
//		for (int i = 0; i < ss; i++)
//		{
//			trans[i] = new char[as+1];
//		}
//
//		for (int i = 0; i < ss; i++)
//		{
//			getline(ifile, str);
//			int x = 0;
//			
//			for (int j = 0; j < as+1; j++)
//			{
//				trans[i][j] = str[x];
//				x += 2;
//			}
//		}
//		
//	start:
//		system("cls");
//		string input = "";
//		cout << "Enter String: ";
//		cin >> input;
//
//		bool flag = true;
//		int r = 0;
//		int c = 0;
//		char next = start;
//		for (int i = 0; i < input.size(); i++)
//		{
//			for (int j = 0; j < ss; j++)
//			{
//				if (next == trans[j][0])
//				{
//					r = j;
//				}
//			}
//			for (int j = 0; j < as; j++)
//			{
//				if (input[i] == alphabet[j])
//				{
//					c = j;
//				}
//			}
//
//			if (input[i] != alphabet[c])
//			{
//				flag = false;
//				break;
//			}
//
//			next = trans[r][c + 1];
//		}
//		if (flag == true)
//		{
//			for (int j = 0; j < fs; j++)
//			{
//				if (final[j] == next)
//				{
//					flag = true;
//					break;
//				}
//				else
//				{
//					flag = false;
//				}
//			}
//		}
//		if (flag == true)
//		{
//			cout << "String accepted." << endl;
//		}
//		else
//		{
//			cout << "String rejected." << endl;
//		}
//		int choice = 0;
//		cout<<endl << "Do you want to enter another string ?" << endl;
//		cout << "1. Yes" << endl;
//		cout << "2. No" << endl;
//		cin >> choice;
//		if (choice == 1)
//		goto start;
//
//		for (int i = 0; i < ss; i++)
//		{
//			delete[] trans[i];
//		}
//		delete[]trans;
//		delete[] alphabet;
//		delete[] states;
//		delete[] final;
//	}
//
//}