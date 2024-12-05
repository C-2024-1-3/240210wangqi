#include<iostream>
using namespace std;
bool box[110];
void change(int begin, int gap);
int main()
{
	for (int i = 1; i <= 100; i++)box[i] = true;
	for (int i = 2; i <= 100; i++)
	{
		change(i, i+1);
	}
	for (int i = 1; i <= 100; i++)
	{
		if (box[i] == true)cout << i << " ";
	}
	return 0;
}
void change(int begin, int gap)
{
	for (int i = begin; i <= 100; i += gap)
	{
		box[i] = !box[i];//Ò×´íµã
	}
}