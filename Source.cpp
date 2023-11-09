#include <cinttypes>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int num1 = a / 1000000000;
    int num2 = a / 100000000 % 10;
    int num3 = a / 10000000 % 10;
    int num4 = a / 1000000 % 10;
    int num5 = a / 100000 % 10;
    int num6 = a / 10000 % 10;
    int num7 = a / 1000 % 10;
    int num8 = a / 100 % 10;
    int num9 = a / 10 % 10;
    int num10 = a % 10;
    int n = 15;
    for (int i = 0; i < n; i++)
    {
            int x = 1;
            while (x < 100)
            {
                if (num1 < num2)
                {
                    int temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                else
                {
                    x++;
                }
                if (num2 < num3)
                {
                    int temp = num2;
                    num2 = num3;
                    num3 = temp;
                }
                else
                {
                    x++;
                }
                if (num3 < num4)
                {
                    int temp = num3;
                    num3 = num4;
                    num4 = temp;
                }
                else
                {
                    x++;
                }
                if (num4 < num5)
                {
                    int temp = num4;
                    num4 = num5;
                    num5 = temp;
                }
                else
                {
                    x++;
                }
                if (num5 < num6)
                {
                    int temp = num5;
                    num5 = num6;
                    num6 = temp;
                }
                else
                {
                    x++;
                }
                if (num6 < num7)
                {
                    int temp = num6;
                    num6 = num7;
                    num7 = temp;
                }
                else
                {
                    x++;
                }
                if (num7 < num8)
                {
                    int temp = num7;
                    num7 = num8;
                    num8 = temp;
                }
                else
                {
                    x++;
                }
                if (num8 < num9)
                {
                    int temp = num8;
                    num8 = num9;
                    num9 = temp;
                }
                else
                {
                    x++;
                }
                if (num9 < num10)
                {
                    int temp = num9;
                    num9 = num10;
                    num10 = temp;
                }
                else
                {
                    x++;
                }
            }
            i = 15;
    }
    if (num10 != 0)
    {
        int num = num1 * 1000000000 + num2 * 100000000 + num3 * 10000000 + num4 * 1000000 + num5 * 100000 + num6 * 10000 + num7 * 1000 + num8 * 100 + num9 * 10 + num10;
        cout << num;
    }
    else
    {
        if (num9 != 0)
        {
            int num = num1 * 100000000 + num2 * 10000000 + num3 * 1000000 + num4 * 100000 + num5 * 10000 + num6 * 1000 + num7 * 100 + num8 * 10 + num9 * 1;
            cout << num;
        }
        else 
        {
            if (num8 != 0)
            {
                int num = num1 * 10000000 + num2 * 1000000 + num3 * 100000 + num4 * 10000 + num5 * 1000 + num6 * 100 + num7 * 10 + num8 * 1;
                cout << num;
            }
            else
            {
                if (num7 != 0)
                {
                    int num = num1 * 1000000 + num2 * 100000 + num3 * 10000 + num4 * 1000 + num5 * 100 + num6 * 10 + num7 * 1;
                    cout << num;
                }
                else
                {
                    if (num6 != 0)
                    {
                        int num = num1 * 100000 + num2 * 10000 + num3 * 1000 + num4 * 100 + num5 * 10 + num6 * 1;
                        cout << num;
                    }
                    else
                    {
                        if (num5 != 0)
                        {
                            int num = num1 * 10000 + num2 * 1000 + num3 * 100 + num4 * 10 + num5 * 1;
                            cout << num;
                        }
                        else
                        {
                            if (num4 != 0)
                            {
                                int num = num1 * 1000 + num2 * 100 + num3 * 10 + num4 * 1;
                                cout << num;
                            }
                            else
                            {
                                if (num3 != 0)
                                {
                                    int num = num1 * 100 + num2 * 10 + num3 * 1;
                                    cout << num;
                                }
                                else
                                {
                                    if (num2 != 0)
                                    {
                                        int num = num1 * 10 + num2 * 1;
                                        cout << num;
                                    }
                                    else
                                    {
                                        if (num1 != 0)
                                        {
                                            int num = num1;
                                            cout << num;
                                        }
                                        else
                                        {
                                            int num = 0;
                                            cout << num;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}