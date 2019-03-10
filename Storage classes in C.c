
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C
void autoStorageClass(int a)
{
    printf("%d ",a);
}
void registerStorageClass(char ch)
{
    printf("%d ",ch);
}
void externStorageClass(int val)
{
    printf("%d\n",val);
}
void staticStorageClass()
{
  int i;
  
  for(i=0; i<5; ++i)
  {
    static int a = 5;
    int b = 10;
    a++; b++;
    printf("%d 11\n",a);
  }
}