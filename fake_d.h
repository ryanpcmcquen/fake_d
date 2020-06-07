int FD_upper_bound = 100;

int FD_get_total_length()
{
    return (FD_upper_bound * (FD_upper_bound + 1)) + (FD_upper_bound + 1);
}

void FD_fill(int arr[], int filler)
{
    int index;
    int total_length = FD_get_total_length();
    for (index = 0; index < total_length; index++) {
        arr[index] = filler;
    }
}

void FD_zero(int arr[])
{
    FD_fill(arr, 0);
}

void FD_set(int arr[], int x, int y, int val)
{
    arr[y * (FD_upper_bound + 1) + x] = val;
}

int FD_get(int arr[], int x, int y)
{
    return arr[y * (FD_upper_bound + 1) + x];
}
