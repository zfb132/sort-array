#include<iostream>
using namespace std;

/*冒泡排序*/
void Bublesort(int a[],int n)
{
   int i,j,k;
   for(j=0;j<n;j++)   
   {
       for(i=0;i<n-j;i++)  
       {
          if(a[i]>a[i+1])  
          {
             k=a[i];
             a[i]=a[i+1];
             a[i+1]=k;
          }
        }
   }
}
/*快速排序*/
int partition(int *data,int low,int high)
{ 
    int t=0;
　　t=data[low];
　　while(low<high)
　　{ 
      while(low < high && data[high] >= t)
　　    high--;
　　  data[low] = data[high];
　　  while(low < high && data[low] <= t)
　　  low++;
　　  data[high] = data[low];
　　}
　　data[low] = t;
　　return low;
}
void quicksort(int *data,int low,int high) //快排每趟进行时的枢轴要重新确定，由此进 //一步确定每个待排小记录的low及high的值
{ 
  if(low >= high)
　　return ;
　int pivotloc = 0;
　pivotloc = partition(data,low,high);
　quicksort(data,low,pivotloc-1);
　quicksort(data,pivotloc+1,high);
}
/*直接插入排序*/
void InsertSort(int a[], int n)
{
  int temp;
  int i,j;
  for(i = 1; i < n; i++)    //数组长度为n
  {    
     temp = a[i];    
     j = i;    
     while ((j > 0) && (a[j - 1] > t))    
     {    
        a[j] = a[j - 1];//交换顺序    
        --j;    
     }    
     a[j] = temp;    
  }                
}
/*二进制插入排序*/
void BInsertSort(int a[],int n)
{
  int low,high,mid;
  int temp,i,j;
  for(i=1;i<n;i++)
  {
    low=0;
    temp=a[i];// 保存要插入的元素
    high=i-1;
    while(low<=high) //折半查找到要插入的位置
    {                       
      mid=(low+high)/2;
      if(a[mid]>temp)
        high=mid-1;
      else
        low=mid+1;
    }
    int j = i;    
    while ((j > low) && (a[j - 1] > t))    
    {    
      a[j] = a[j - 1];//交换顺序    
      --j;    
    }    
    a[low] = temp;  
   }  
}
/*希尔排序*/
void shellsort(int a[], size_t size)
{
    for(int gap = size / 2; gap > 0; gap /= 2)
        for(int i = gap; i < size; ++i)
        {
             int key = a[i];
             int j = 0;
             for(j = i -gap; j >= 0 && a[j] > key; j -=gap)
             {
                a[j+gap] = a[j];
             }  
             a[j+gap] = key;
        }
}

/*
**参考链接
**http://www.cnblogs.com/fzhe/archive/2013/01/25/2871699.html
*/
