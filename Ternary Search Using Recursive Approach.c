//It is a divide and conquer algorithm similar to Binary Search. Inspite of dividing array into two halves, we divide array into three parts using mid1 and mid2 and determine
//whether the key is present or not. 

// STEPS TO FOLLOW ARE:
// 1. First, we compare the key with the element at mid1. If found equal, we return mid1.
// 2. If not, then we compare the key with the element at mid2. If found equal, we return mid2.
// 3. If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first half.
// 4. If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third half.
// 5. If not, then we recur to the second half.

int ternarysearch(int l, int r, int key, int arr[])
{
    if (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at mid1 or mid2
        if (arr[mid1] == key) {
            return mid1;
        }
        if (arr[mid2] == key) {
            return mid2;
        }
 
        // Since key is not present at mid1 or mid2,
        // Check in which half it is present and search there
 
        if (key < arr[mid1]) {
 
            // The key between l and mid1
            return ternarysearch(l, mid1 - 1, key, arr);
        }
        else if (key > arr[mid2]) {
 
            // The key between mid2 and r
            return ternarysearch(mid2 + 1, r, key, arr);
        }
        else {
 
            // The key between mid1 and mid2
            return ternarysearch(mid1 + 1, mid2 - 1, key, arr);
        }
    }
 
    // If key not found
    return -1;
}
 

int main()
{
    int l, r, pos, key;
 
    // Get the array using cin
    
    // Sort the array if not sorted
    int ar[] = { 1, 3, 4, 5, 8, 9, 11, 12, 13, 17, 21, 26, 27, 37, 44};
 
    // Start index
    l = 0;
 
    // length of array
    r = 9;
 
    // Key to be searched in the array
    key = 4;
 
    // Search the key using ternarySearch
    pos = ternarysearch(l, r, key, arr);
 
    // Print the result
    printf("Index of %d is %d\n", key, pos);
 
    // Checking for another key
    key = 24;
 
    // Search the key using ternarySearch
    pos = ternarysearch(l, r, key, arr);
 
    // Print the result
    printf("Index of %d is %d", key, pos);
}

//Output is:
//Index of 4 is 2
//Index of 24 is -1

//Even if ternary search divide array into three halves but it is considered less efficient than binary search because the number of comparisons made are more. 
//Time Complexity for Binary search = 2clog2n + O(1)      
//Time Complexity for Ternary search = 4clog3n + O(1)
//The value of 2Log3n can be written as (2 / Log23) * Log2n . Since the value of (2 / Log23) is more than one, Ternary Search does more comparisons than Binary Search 
//in worst cas
