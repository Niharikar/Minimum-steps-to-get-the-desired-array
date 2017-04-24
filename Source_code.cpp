#include <bits/stdc++.h>
using namespace std;


int count_operations(unsigned int target_array[],int n)
{
  int result = 0;
  
  while(1)
  {
    int zero_count = 0;
    for(int i = 0;i<n;i++)
    {
      if(target_array[i] & 1)
        break;
      else if(target_array[i]==0)
      {
        zero_count++;
      }
    }
    if(zero_count==n)
      return result;
      
    if(i==n)
    {
      for(int j = 0;j<n;j++)
        target_array[j] = target_array[j]/2;
      result++;
    }
    
    for(int k = i;i<n;k++)
    {
      if(target_array[k] & 1)
      {
        target_array[k]--;
        result++;
      }
    }
    
  }
}

int main()
{
  unsigned int target[] = {2,3,5,2,5};
  int n = sizeof(target)/sizeof(target[0]);
  cout << "minimum steps are "<< count_operations(target,n);
}
  
  
