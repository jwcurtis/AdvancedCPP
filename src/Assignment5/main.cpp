#include <iostream>

using namespace std;

void printList(const int list[], int length){
    cout << "List out: ";
    for(int i = 0; i < length; ++i){
        if( i == length - 1){
            cout << list[i];
        }else{
        cout << list[i] << ",";
        }
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

void binaryPrint (const int list[], int listLength, int searchItem){
    int foundPos = binarySearch(list, listLength, searchItem);

    if(foundPos == -1){
        cout << "Item not found in list." << endl;
    }
    else{
        cout << "Found: [ " << searchItem << " ] at: [ " << foundPos << " ]." << endl;
    }
}

int main(){

int testList1[] = {42};
int testList2[] = {-12, 7, 34, -45};
int testList3[] = {100, -100, 0, 23, -8, 56, 1};
int testList4[] = {35, -3, 77, 0, -43, 34, 12, -24, 52};
int testList5[] = {48, 72, -9, 68, -47, 13, 0, 21, -34, 37};

printList(testList1, (sizeof(testList1) / sizeof(testList1[0])));
printList(testList2, (sizeof(testList2) / sizeof(testList2[0])));
printList(testList3, (sizeof(testList3) / sizeof(testList3[0])));
printList(testList4, (sizeof(testList4) / sizeof(testList4[0])));
printList(testList5, (sizeof(testList5) / sizeof(testList5[0])));

bubbleSort(testList1, (sizeof(testList1) / sizeof(testList1[0])));
bubbleSort(testList2, (sizeof(testList2) / sizeof(testList2[0])));
bubbleSort(testList3, (sizeof(testList3) / sizeof(testList3[0])));
bubbleSort(testList4, (sizeof(testList4) / sizeof(testList4[0])));
bubbleSort(testList5, (sizeof(testList5) / sizeof(testList5[0])));

printList(testList1, (sizeof(testList1) / sizeof(testList1[0])));
printList(testList2, (sizeof(testList2) / sizeof(testList2[0])));
printList(testList3, (sizeof(testList3) / sizeof(testList3[0])));
printList(testList4, (sizeof(testList4) / sizeof(testList4[0])));
printList(testList5, (sizeof(testList5) / sizeof(testList5[0])));

binaryPrint(testList1, (sizeof(testList1) / sizeof(testList1[0])),42);
binaryPrint(testList1, (sizeof(testList1) / sizeof(testList1[0])),35);

binaryPrint(testList2, (sizeof(testList2) / sizeof(testList2[0])),7);
binaryPrint(testList2, (sizeof(testList2) / sizeof(testList2[0])),42);
binaryPrint(testList2, (sizeof(testList2) / sizeof(testList2[0])),-45);

binaryPrint(testList3, (sizeof(testList3) / sizeof(testList3[0])),23);
binaryPrint(testList3, (sizeof(testList3) / sizeof(testList3[0])),-8);
binaryPrint(testList3, (sizeof(testList3) / sizeof(testList3[0])),100);

binaryPrint(testList4, (sizeof(testList4) / sizeof(testList4[0])),35);
binaryPrint(testList4, (sizeof(testList4) / sizeof(testList4[0])),77);
binaryPrint(testList4, (sizeof(testList4) / sizeof(testList4[0])),-24);

binaryPrint(testList5, (sizeof(testList5) / sizeof(testList5[0])),-47);
binaryPrint(testList5, (sizeof(testList5) / sizeof(testList5[0])),13);
binaryPrint(testList5, (sizeof(testList5) / sizeof(testList5[0])),0);


}