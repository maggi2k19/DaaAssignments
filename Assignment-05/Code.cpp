#include <iostream>
#include <string>
using namespace std;

//function to find the longest Repeating subsequence
void findLRS(string str)
{
    int n = str.length();
    
    // Create and initialize DP table
    
    int table[n+1][n+1];
    for (int i=0; i<=n; i++)
        for (int j=0; j<=n; j++)
            table[i][j] = 0;
            
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            // If characters match  and indexes are not  same
            
            if (str[i-1] == str[j-1] && i != j)
              {  
                 table[i][j] =  1 + table[i-1][j-1]; 
              }
              
            // If characters doesn't  match
            
            else
                table[i][j] = max(table[i][j-1], table[i-1][j]);
        }
    }
    
    int count=table[n][n];
    string out;
    int i=n;
    int j=n;
    out[count]='\0';
    
    while(count&&(i>0)&&(j>0))
     {
       if(table[i][j]>max(table[i][j-1], table[i-1][j]))
        {
            out[count-1]=str[i-1];
            i-=1;
            j-=1;
            count-=1;
        }
       else if(table[i][j-1]>table[i-1][j])
        {
            j-=1;
        }
       else 
        {
            i-=1;
        }
     }
    
   
    cout<<"The longest repeating subsequence is : ";
     for(i=0;i<table[n][n];i++)
     {
         cout<<out[i];
     }
    cout<<"\nThe length of longest subsequence is :"<<table[n][n];
}

int main()
{   
    cout<<"Enter the String\n";
    string input ;
    cin>>input;
    findLRS(input);
    return 0;
}