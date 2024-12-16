
#include <iostream>
using namespace std;

int main() {
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int item;
    cout << "enter the item you want to search: "<<endl;
    cin >> item;
    int flag = 0;
    int i;
    for (i = 0; i < 10;i++) {
        if (array[i] ==item) {
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout << "Item found at index: " << i<<endl;
    }
    int max = array[0];
    for (int i=1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout<< "Max:" << max<<endl;
    int arr[10] ;
    for (int i=0; i < 10; i++) {
        int num;
        cout<<"Enter number at"<<i<<":";
        cin>>num;
        arr[i] = num;
    }
    return 0;
}