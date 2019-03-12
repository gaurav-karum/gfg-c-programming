void jump_String(char ch[])
{
    int n = strlen(ch);
    int i;
    for(i=0; i<n; i=i+2)
    {
      printf("%c ",ch[i]);
    }
}