void print_Decreasingpower(int x)
{
  int y=-1;
  
  while(y != x-1)
  {
    ++y;
    printf("%d ",(x-y)*(x-y));
  }
}