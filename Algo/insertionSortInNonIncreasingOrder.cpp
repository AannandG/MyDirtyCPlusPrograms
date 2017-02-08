#include<iostream>
using namespace std;
#define MAX_SIZE 7
void insertionSortInNonIncreasingOrder(int arr[MAX_SIZE]){
for(int i = 1; i< MAX_SIZE; i++){
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] < key){
       arr[j + 1] = arr[j];
       j--;
    }
    arr[j + 1] = key;
}
}

int main(){
    int NumberSequence[MAX_SIZE] = {34,28,39,25,15,67,50};

    cout<<"Unsorted number sequence: "<<endl;
    for(int i = 0; i < MAX_SIZE; i++){
     cout<<NumberSequence[i]<<" ";
    }

    insertionSortInNonIncreasingOrder(NumberSequence);

    cout<<"Sorted number sequence: "<<endl;
    for(int i = 0; i < MAX_SIZE; i++){
     cout<<NumberSequence[i]<<" ";
    }

    return 0;
}
