

bool isPalindrome(int x){
    if(x == 0)
        return true;
    if(x<0||x%10 == 0)
        return false;
    
    int temp = 0;
    int preX = x;
    
    while(x>temp)
    {
        int pop = x%10;
        preX = x;   // save x before multiplied by 0.1 which is to escape from loop
        x /= 10;
        temp = temp*10 + pop;   //temp is the newly generated int value that has the inverted
                                //numbers of last half of its number characters.
    }
    if(x==temp||preX==temp)
        return true;
    else
        return false;
}

