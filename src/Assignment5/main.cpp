#include <iostream>

using namespace std;

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

int main(){

}