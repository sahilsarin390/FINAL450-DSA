#include <bits/stdc++.h>

using namespace std;

void funcUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

    cout << "Union of Arrays: ";

    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }

        else if(arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }

        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    cout << endl;
}

void funcIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

    cout << "Intersection of Arrays: ";

    while(i < m && j < n)
    {
       if(arr1[i] < arr2[j])
        {
            i++;
        }

        else if(arr1[i] > arr2[j])
        {
            j++;
        }

        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        } 
    }
}

int main()
{
    int arr1[50], arr2[50], m, n;

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cin >> n;

    for(int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }

    funcUnion(arr1, arr2, m, n);
    funcIntersection(arr1, arr2, m, n);

    return 0;
}