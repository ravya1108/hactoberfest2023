#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, 3, 0, 5, 22, 15};

    int key;

    cout << "Enter the key you require : " << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Key present!" << endl;
    }
    else{
        cout << "Key not present!" << endl;
    }
    return 0;
}
