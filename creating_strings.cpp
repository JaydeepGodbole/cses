#include<bits/stdc++.h>
using namespace std;

int compare(const void*a, const void*b)
{
    return (*(char*)a - * (char*)b);
}

int findnext(char * c, int i, int size)
{
    char ch = c[i];
    int idx = i + 1;
    for(int k = i + 1; k < size; k++)
    {
        if(c[k] > c[i] && c[k] < c[idx]) idx = k;
    }
    return idx;
}

void sorted_permutations(char * c)
{
    string s;
    int numPermutations = 0;
    int size = strlen(c);
    qsort(c, size, sizeof(char), compare);

    bool done = false;
    char temp;

    while(!done)
    {
        // printf("%s\n", c);
        string s1(c);
        s += s1 + '\n';
        numPermutations++;
        int i;
        for(i = size-1; i >=0; i--)
        {
            if(c[i] < c[i+1]) break;
        }

        if(i == -1) 
        {
            done = true;
            cout << numPermutations << '\n';
            cout << s;
        }
        else
        {
            int j = findnext(c, i, size); // returns the index of the smallest character larger than the character at index "i" in array "c"
            temp = c[i];
            c[i] = c[j];
            c[j] = temp; // swapped the two

            qsort(c + i + 1, size - i - 1, sizeof(char), compare);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str[9];
    scanf("%s", str);

    sorted_permutations(str);


    return 0;
}