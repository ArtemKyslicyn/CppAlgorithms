//
//  main.cpp
//  sortinsertions
//
//  Created by Arcilite on 28.10.15.
//  Copyright © 2015 Ramotion. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    char A[35];
    char k;
    int j, n, i;
    cout << "Введите колличество элементов: " << endl;
    cin >> n;
    cout << "Введите элементы массива" << endl;
    for (j = 0; j < n; ++j){
        cin >> A[j];
    }
    

    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && A[j - 1] < A[j]) {
            k = A[j];
            A[j] = A[j - 1];
            A[j - 1] = k;
            j--;
        }
    }
    
    cout << "Масив після сортування" << endl;
    for (i = 0; i < n; ++i) {
        cout<<setw(4) << A[i];
        //cout << endl;
        
    }
    cin.get();
}

void insertionSort(int arr[], int length) {
    int i, j, tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
