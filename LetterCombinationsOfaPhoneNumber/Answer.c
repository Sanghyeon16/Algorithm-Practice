


void catRes(char **result, char **phone, char *digits, char *temp, int nowIndex, int *resLen)
{
	if(nowIndex == strlen(digits))
	{
		temp[nowIndex] = 0;
		result[(*resLen)] = (char *)malloc(strlen(temp)+1);
		strcpy(result[(*resLen)], temp);
		(*resLen)++;
		return;
	}
	char *phoneData = phone[digits[nowIndex] - '0' - 2];
	for(int i = 0; i < strlen(phoneData); i++)
	{
		temp[nowIndex] = phoneData[i];
		catRes(result, phone, digits, temp, nowIndex + 1, resLen);
	}
}



char **letterCombinations(char * digits, int* returnSize)
{
	char *phone[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	char **result = (char **)malloc(sizeof(char *)*3000);
	char temp[strlen(digits)+1];
	int resLen = 0;
	if(strlen(digits) == 0)
	{
		*returnSize = resLen;
		return result;
	}
	catRes(result, phone, digits, temp, 0, &resLen);
	*returnSize = resLen;
	return result;
}
