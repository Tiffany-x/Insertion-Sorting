#include <iostream>

using namespace std;

	void printing(int array[], int num)
		{
			for (int k = 0; k < num; k++)
		    {
		    	cout << array[k] << "\t";
			}
		}
	
	void swap(int array[], int num, int a, int b)
		{
			int temp = array[a];
			array[a] = array[b];
			array[b] = temp;
		}

	

int main()
{
	int num = 8;
	int array[num] = {25, 64, 42, 76, 4, 8, 21, 34};
	
	
	
    cout << "The unsorted list is: \n";
    printing(array, num);
    for (int i = 0; i < num - 1; i ++)
    	{        
    		int minimum = i;
			for (int j = i + 1; j < num; j++)
		    {
		       	if (array[j] < array[minimum])
		        	minimum = j;
			}
	        swap(array, num, i, minimum);
	    }
    
	cout << "\nThe sorted list is: \n";
    printing(array, num);
		
}

	
