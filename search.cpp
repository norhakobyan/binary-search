#include <iostream>



int binary (int[], int, int, int);

int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int size = sizeof(arr)/sizeof(arr[0]);
int left = 0;
int right = size;
int n;
std::cin>>n;
int result =  binary(arr, n , left, right);
std::cout<<result<<std::endl;

}	

int binary (int arr[], int n,  int left, int right){
	while(left<=right){
		int middle = (left +right) / 2;
		if(arr[middle]==n){
			return middle;
		}else if(arr[middle]>n){
			right = middle -1;
		}else{
			left = middle + 1;
		}

	}
return -1;
}
