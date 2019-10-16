
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
	values[index] is the index of keys[index] value on original array
	By using complement value, we find the same value from hash table 
*/
#define SIZE 50000

int hash(int key){
    int r = key % SIZE;
    return r < 0 ? r+SIZE : r;
}

void insert(int *keys, int *values, int key, int value)
{
    int index = hash(key);
    while(values[index])
        index = (index + 1)%SIZE;
    keys[index] = key;
    values[index] = value;
}

int search(int *keys, int *values, int key) //key = complements
{
    int index = hash(key);
    while (values[index])
    {
        if(keys[index]==key)      
            return values[index];
        index = (index + 1) % SIZE;
    }
    return 0;
    
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int keys[SIZE];
    int values[SIZE]= {0};
    for (int i = 0; i <numsSize; i++)
    {
        int complements = target - nums[i];
        int value = search(keys,values, complements);
        if(value){
            int *indices = (int *)malloc(sizeof(int)*2);
            indices[0] = value - 1;
            indices[1] = i;
            return indices;
        }
        insert(keys, values, nums[i], i + 1);
    }
    return NULL;
}


/* 
    Brute Force
*/
/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result;
    result = (int *)malloc(2*sizeof(int));
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j] == target - nums[i])
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
*/

