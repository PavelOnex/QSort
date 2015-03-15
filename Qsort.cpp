 /**@file*/
#include <iostream>/// Programm of quick sorting
using namespace std;
int a[100];
void quickSort(int l, int r)/*!  Function of sorting */		
{
    int x = a[l + (r - l) / 2];
    ///same as (l+r)/2, 
    ///but does not cause an overflow at high data
    int i = l;
    int j = r;
  
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i<r)
                quickSort(i, r);
    
    if (l<j)    
        quickSort(l, j);    
}
int main()/*!  The  main function*/		
{
    int n;///number of elements in our massive
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quickSort(0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "; /// printing of sorted massive on the screen
    }        
	system("pause");
    return 0;
}