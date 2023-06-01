struct Sort_array{
    void arraySort(int array[], int length)
    {
        for(int i = 0; i < length; i++)
        {
            for(int j = i + 1; j < length; j++)
            {
                if(array[i] > array[j]) // swap elements i and j
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
};