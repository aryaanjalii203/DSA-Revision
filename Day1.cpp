// 3D array

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"hello"<<endl;

int ages[8]={112,45,23,74,58,95,86,783};

int lowAge=ages[0];
for(int age:ages){
    
    if(lowAge>age){
        lowAge=age;
    }
}
cout<<lowAge<<" ";

string letters[2][2][2] = {
    {
        {"A", "b"},
        {"c", "d"}
    },
    {
        {"e", "f"},
        {"g", "h"}
    }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 2; k++) {
      cout << letters[i][j][k] << "\n";
    }
  }
}

}

//checking wheather array is sorted or not...

#include <iostream>
using namespace std;

void sorted(int arr[], int size) {
    bool isSorted = true;
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
}

int main() {
    int arr[] = {12, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    sorted(arr, size);
    return 0;
}

//palindrome of an array, reverse of an array, second largest number in array, find repeating element in array,check if array is sorted or not,{0,1,01,0,1,0}count the number of 0,1
//you have given k=9, and findout how many numbers are greater than this number in an array


//Reverse of an array
#include <iostream>
using namespace std;

int main(){

    int arr[7]={12,45,56,43,74,18,96};
    int arr2[7]={12,23,45,56,45,23,12};


for(int i=0;i<=6;i++){
    cout<<arr[i]<<endl;
}


cout<<"reversing the array";
for(int j=6;j>=1;j--){
    cout<<arr[j]<<endl;
}
}


//checking array is orted or not
#include <iostream>
using namespace std;
int main(){
    bool isSorted=true;
    int arr[7]={12,18,49,74,82,6,1};
    for(int i=0;i<6;i++){
        if(arr[i]>arr[i+1]) {
            isSorted=false;
            break;
        }
        
    }
    if(isSorted){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}



//Checking wheather array is plaindrome or not
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isPalindrome = true;

    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

//finding out the second largest element...

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 30, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Second Largest: " << second;
}

//Checking if there is an element repeating or not
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout <<"Repeating: "<< arr[i] << endl;
                break;
            }
        }
    }
}


//number of zeros in array...
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
    }

    cout << "Zeros: " << count0 << ", Ones: " << count1;
}



//How many elements are there greater than 9
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 10, 15, 6, 7, 12};
    int k = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    cout <<"nums greater than" <<k<< ": "<<count;
}

