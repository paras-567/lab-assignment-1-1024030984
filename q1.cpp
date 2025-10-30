#include <iostream> 
using namespace std; 
 
void create(int arr[], int &n) { 
    cout << "Enter number of elements: "; 
    cin >> n; 
    cout << "Enter " << n << " elements:\n"; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
} 
 
void display(int arr[], int n) { 
    if (n == 0) { 
        cout << "Array is empty!\n"; 
        return; 
    } 
    cout << "Array elements are: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << "\n"; 
} 
 
void insertElement(int arr[], int &n, int pos, int val) { 
    if (n >= 100) { 
        cout << "Array is full, cannot insert!\n"; 
        return; 
    } 
    if (pos < 0 || pos > n) { 
        cout << "Invalid position!\n"; 
        return; 
    } 
    for (int i = n; i > pos; i--) { 
        arr[i] = arr[i - 1]; 
    } 
    arr[pos] = val; 
    n++; 
    cout << "Element inserted successfully.\n"; 
} 
 
void deleteElement(int arr[], int &n, int pos) { 
    if (n == 0) { 
        cout << "Array is empty, nothing to delete!\n"; 
        return; 
    } 
    if (pos < 0 || pos >= n) { 
        cout << "Invalid position!\n"; 
        return; 
    } 
    for (int i = pos; i < n - 1; i++) { 
        arr[i] = arr[i + 1]; 
    } 
    n--; 
    cout << "Element deleted successfully.\n"; 
} 
 
int linearSearch(int arr[], int n, int key) { 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == key) 
            return i; 
    } 
    return -1; 
} 
 
int main() { 
    int arr[100], n = 0, choice, pos, val, key; 
 
    while (true) { 
        cout << "\n—— MENU ——\n"; 
        cout << "1. CREATE\n"; 
        cout << "2. DISPLAY\n"; 
        cout << "3. INSERT\n"; 
        cout << "4. DELETE\n"; 
        cout << "5. LINEAR SEARCH\n"; 
        cout << "6. EXIT\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        if (choice == 1) { 
            create(arr, n); 
        }  
        else if (choice == 2) { 
            display(arr, n); 
        }  
        else if (choice == 3) { 
            cout << "Enter position (0-based index): "; 
            cin >> pos; 
            cout << "Enter value: "; 
            cin >> val; 
            insertElement(arr, n, pos, val); 
        }  
        else if (choice == 4) { 
            cout << "Enter position (0-based index): "; 
            cin >> pos; 
            deleteElement(arr, n, pos); 
        }  
        else if (choice == 5) { 
            cout << "Enter element to search: "; 
            cin >> key; 
            pos = linearSearch(arr, n, key); 
            if (pos == -1) 
                cout << "Element not found!\n"; 
            else 
                cout << "Element found at position " << pos << "\n"; 
        }  
        else if (choice == 6) { 
            cout << "Exiting program...\n"; 
            break; 
        }  
        else { 
            cout << "Invalid choice! Try again.\n"; 
        } 
    } 
 
    return 0; 
} 
