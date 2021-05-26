int htoi(char* str)
{
    int n=0;
for(int i=sizeof(char) * 2;i<strlen(str);i++)
{
    //A:65 F:70 a:97 f:102 --  A=10 F=15 (ascii table referenced...)
    if((str[i] >= 'A' && str[i] <= 'Z'))
    {
    n=n * 16 + str[i] - 'A' + 10;
    }
    else if((str[i] >= 'a' && str[i] <= 'z'))
    {
    n=n * 16 + str[i] - 'a' + 10;
    }
    else
    {
    n=n * 16 + str[i] - '0';
    }
    
}
/***Debug Purposes... Uncomment if you want.*////
//printf("Input String : %s \n",str);
//printf("Output Integer : %d\n",n);
return n;
}