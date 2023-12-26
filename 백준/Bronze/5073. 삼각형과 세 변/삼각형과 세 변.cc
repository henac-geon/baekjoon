#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    
    int t[3];
    
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> t[i];
        }
        if (t[0] == 0 && t[0] == t[1] && t[0] == t[2])
        {
            break;
        }
        sort(t, t + 3);//오름차순으로 정렬
        if (t[2] >= t[1] + t[0])
        {
            cout << "Invalid" << '\n';
        }
        else if (t[0] != t[1] && t[1] != t[2] && t[0] != t[2])
        {
            cout << "Scalene" << '\n';
        }
        else
        {
            if (t[0] == t[1] && t[1] == t[2])
            {
                cout << "Equilateral" << '\n';
            }
            else
                cout << "Isosceles" << '\n';
        } 
    }
 
}
