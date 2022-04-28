#include <iostream>
using namespace std;
void change_position(int *minimum, int *arr1)
{
	int temporary = *minimum;
	*minimum = *arr1;
	*arr1 = temporary;
}
void selection_sorting_function(int arr1[], int total_size_of_arr1)
{
	int x, y, minimun;
	for (x = 0; x < total_size_of_arr1-1; x++)
	{
        minimun = x;
		for (y = x+1; y < total_size_of_arr1; y++)
		if (arr1[y] < arr1[minimun])
			minimun = y;
		change_position(&arr1[minimun], &arr1[x]);
	}
}
int main()
{
	int arr1[] = {6, 2, 12, 3, 15};
	int total_size_of_arr1= sizeof(arr1)/sizeof(arr1[0]);
	selection_sorting_function(arr1, total_size_of_arr1);
	cout << "Sorted Elements: ";
	for(int x=0;x<total_size_of_arr1;x++)
    {
        cout<<arr1[x]<<" ";
    }
	return 0;
}
