long merge(std::vector<int>& arr, std::vector<int>& temp, int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    long c = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            c += mid - i + 1;
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    while (start <= end) {
        arr[start] = temp[start];
        start++;
    }

    return c;
}

long mergeSort(std::vector<int>& arr, std::vector<int>& temp, int start, int end) {
    if (start >= end)
        return 0;

    int mid = start + (end - start) / 2;
    long c = 0;

    c += mergeSort(arr, temp, start, mid);      // Sort the left half
    c += mergeSort(arr, temp, mid + 1, end);    // Sort the right half
    c += merge(arr, temp, start, mid, end);

    return c;
}

long countInversions(std::vector<int> arr) {
    long c = 0; // inversion count
    std::vector<int> temp(arr.size(), 0);
    c = mergeSort(arr, temp, 0, arr.size() - 1);
    return c;
}