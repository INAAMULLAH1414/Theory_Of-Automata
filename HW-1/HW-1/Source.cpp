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
//		cout << as << endl;
//		string *alphabet = new string[as];
//
//		for (int i = 0,j=0; i < as;j++)
//		{
//			if (str[j] != ',')
//			{
//				alphabet[i] = str[j];
//				i++;
//			}
//			
//		}
//		for (int i = 0; i < as; i++)
//		{
//			cout << alphabet[i] << endl;
//		}
//
//
//
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
//		cout << ss << endl;
//		string *states = new string[ss];
//		for (int i = 0, j = 0; i < ss; j++)
//		{
//			if (str[j] != ',')
//			{
//				states[i] = str[j];
//				i++;
//			}
//
//		}
//
//		for (int i = 0; i < ss; i++)
//		{
//			cout << states[i] << endl;
//		}
//
//
//
//		string start = "";
//		getline(ifile, start);
//		cout << start << endl;
//
//
//		getline(ifile, str);
//		int fs = 0;
//		for (int i = 0; str[i] != '\0'; i++)
//		{
//			if (str[i] != ',')
//			{
//				fs++;
//			}
//		}
//		cout << fs << endl;
//		string *final = new string[fs];
//		for (int i = 0, j = 0; i < fs; j++)
//		{
//			if (str[j] != ',')
//			{
//				final[i] = str[j];
//				i++;
//			}
//
//		}
//
//		for (int i = 0; i < fs; i++)
//		{
//			cout << final[i] << endl;
//		}
//
//		string **trans = new string*[ss];
//		for (int i = 0; i < ss; i++)
//		{
//			trans[i] = new string[as+1];
//		}
//
//		for (int i = 0; i < ss; i++)
//		{
//			getline(ifile, str);
//			int x = 0;
//			for (int j = 0; j < as + 1; j++)
//			{
//				trans[i][j] = str[x];
//				cout << trans[i][j] << endl;
//				x += 2;
//			}
//
//		}
//		
//		string in = "";
//		cout << "Enter String: ";
//		getline(cin,in);
//		string *input = new string[in.size()];
//		for (int i = 0; i < in.size(); i++)
//		{
//			input[i] = in[i];
//			cout << input[i];
//		}
//		cout << endl;
//
//		bool flag = true;
//		int r = 0;
//		int c = 0;
//		string next = start;
//		for (int i = 0; i < in.size(); i++)
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
//				if (input[i]==alphabet[j])
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
//			/*for (int j = 0; j < fs; j++)
//			{
//				if (final[j] == next)
//				{
//					flag = true;
//				}
//				else
//				{
//					flag = false;
//				}
//			}*/
//
//			next = trans[r][c + 1];
//		}
//		for (int j = 0; j < fs; j++)
//		{
//			if (final[j] == next)
//			{
//				flag = true;
//				break;
//			}
//			else
//			{
//				flag = false;
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
//		for (int i = 0; i < ss; i++)
//		{
//			delete[] trans[as + 1];
//		}
//		delete[] trans;
//		delete[] alphabet;
//		delete[] states;
//		delete[] final;
//		delete[] input;
//	}
//
//}