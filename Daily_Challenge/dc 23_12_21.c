int evaluateOrder(char *str)
{
    int i1,i2,i=0;
while(i<strlen(str))
{
    char a[10]="",b[10]="";
    i1=0,i2=0;
    int k=i;
    while(isdigit(str[k]))
        a[i1++]=str[k++];
    int n=k+1;
    while(isdigit(str[n]))
        b[i2++]=str[n++];
    if(str[k]=='>')
    {
        // printf("%d %c %d\n",atoi(a),str[k],atoi(b));
        if(atoi(a)<=atoi(b))
        return 0;
    }
    else if(str[k]=='<')
    {
        // printf("%d %c %d\n",atoi(a),str[k],atoi(b));
        if(atoi(a)>=atoi(b))
        return 0;
    }
    i=k+1;
}
return 1;
}
