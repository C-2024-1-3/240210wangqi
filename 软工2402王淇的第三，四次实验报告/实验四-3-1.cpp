#include<iostream>
#include<string>
using namespace std;
char s1[100], s2[100];
int indexOf(const char* s1, const char* s2);

int main()
{
    cout << "Enter the first string:";
    cin.getline(s1, 100);
    int l1 = strlen(s1);
    cout << "Enter the second string:";
    cin.getline(s2, 100);
    int l2 = strlen(s2);
    cout << "indexOf(\"";
    for (int i = 0; i < l1; i++)
        cout << s1[i];
    cout << "\",\"";
    for (int i = 0; i < l2; i++)
        cout << s2[i];
    cout << "\") is ";
    cout << indexOf(s1, s2);
    return 0;
}

int indexOf(const char* s1, const char* s2)
{
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    bool tmp = true, tmp2 = false;
    int gap = 0;
    for (int i = 0; i <= l2 - l1; i++)  
    {
        if (*(s2 + i) == ' ')
            gap++;
        if (*(s2 + i) == *(s1 + 0))  
        {
            tmp2 = true;
            for (int j = 0; j < l1; j++)
            {
                if (i + j >= l2)  // 添加边界判断，防止越界访问
                    break;
                if (*(s2 + i + j) != *(s1 + j))
                {
                    tmp = false;
                    break;
                }
            }
        }
        if ((tmp == true) && (tmp2 == true))
        {
            return i - gap + 1;
        }
        tmp = true;
        tmp2 = false;
    }
    return -1;
}
