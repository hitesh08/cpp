// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?topList=striver-sde-sheet-problems&problemListRedirection=true

int removeDuplicates(vector<int> &arr, int n) {
	int curr=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			arr[curr]=arr[i];
			curr++;
		}
	}
	arr[curr++]=arr[n-1];
	return curr;
}
