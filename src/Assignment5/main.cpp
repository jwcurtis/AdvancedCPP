#include <iostream>

using namespace std;

void printList(const int list[], int length){
    cout << "List out: ";
    for(int i = 0; i < length; ++i){
        cout << list[i];
    }
    cout << endl;
}

void bubbleSort(int list[], int length){
    int temp;
    for (int iteration = 1; iteration < length; iteration++){
        for( int index = 0; index < length - iteration; index++){
            if(list[index] > list[index + 1]){
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
        }
    }
}

int binarySearch(const int list[], int listLength, int searchItem){
    int first = 0;
    int last = listLength - 1;
    int mid;
    bool found = false;

    while(first <= last && !found){
        mid = (first + last) / 2;
        if(list[mid] == searchItem){
            found = true;
        }
        else if (list[mid] > searchItem){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }

    if (found) {
        return mid;
    }
    else{
        return -1;
    }
}

int main(){

int testList1[] = {42};
int testList2[] = {-12, 7, 34, -45};
int testList3[] = {100, -100, 0, 23, -8, 56, 1};
int testList4[] = {35, -3, 77, 0, -43, 34, 12, -24, 52};
int testList5[] = {48, 72, -9, 68, -47, 13, 0, 21, -34, 37};

printList(testList1, sizeof(testList1));
printList(testList2, sizeof(testList1));
printList(testList3, sizeof(testList1));
printList(testList4, sizeof(testList1));
printList(testList5, sizeof(testList1));


}