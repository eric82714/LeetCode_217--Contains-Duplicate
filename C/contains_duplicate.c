void sort(int* nums, int numsSize){
    int j, k;
    
    for(int i = 1; i < numsSize; i++) {
        j = i - 1;
        k = nums[i]; 
        
        while(j > -1 && k < nums[j]) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = k;
    }
}
 
bool containsDuplicate(int* nums, int numsSize){
    if(numsSize <= 1) return false;
    
    sort(nums, numsSize);
    
    for(int i = 0; i < numsSize - 1; i++) {
        if(nums[i] == nums[i+1]) return true;
    }
    return false;
}
