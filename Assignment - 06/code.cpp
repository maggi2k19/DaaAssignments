//This Program is used to trace the sorted sub-sequences in a randomly generated matrix Row wise and Column wise 
#include<bits/stdc++.h>
using namespace std;

#define MAXCOL 10
#define MAXROW 10
#define MAX 10
vector<vector<int>>st;
int R,C;
vector<vector<int>> matrix;
vector<vector<int>> transmatrix;

void find(vector<int>inp, vector<int>out)
{
	if(inp.size() == 0)
	{
		if(out.size() != 0)
		{
			
			// Storing result
			st.push_back(out);
		}
		return;
	}
	
	vector<int>temp;
	temp.push_back(inp[0]);

	inp.erase(inp.begin());
	find(inp, out);
	if(out.size() == 0)
		find(inp, temp);
		
	else if(temp[0] > out[out.size() - 1])
	{
		out.push_back(temp[0]);
		find(inp, out);
	}
}

void driver()
{
	
	cout<<"Row Wise sorted subsequences :"<<endl;
	for(int i=0;i<R;i++){
	        vector<int>ls1 = matrix[i];
            vector<int>ls2;
            find(ls1, ls2);
            cout<<"Row -  : "<<i<<endl;
            for(int i = 0; i < st.size(); i++)
            {
                for(int j = 0; j < st[i].size(); j++)
                    cout << st[i][j] << " ";
                cout << endl;
            }
            st.clear();
	}
	
	cout<<"Column Wise sorted subsequences :"<<endl;
	
	for(int i=0;i<C;i++){
        vector<int> Row;
        for(int j=0;j<R;j++){
            Row.push_back(0);
        }
        transmatrix.push_back(Row);
    }
	for (int i = 0; i < C; i++){
        for (int j = 0; j < R; j++){
            transmatrix[i][j] = matrix[j][i];
            //cout<<transmatrix[i][j]<<" ";
        }
       // cout<<endl;
	}
        for(int i=0;i<C;i++){
	        vector<int>ls1 = transmatrix[i];
            vector<int>ls2;
            find(ls1, ls2);
            cout<<"Column -  : "<<i<<endl;
            for(int i = 0; i < st.size(); i++)
            {
                for(int j = 0; j < st[i].size(); j++)
                    cout << st[i][j] << " ";
                cout << endl;
            }
            st.clear();
	    }
}

int main(){
    srand(time(NULL));
    cout<<"Size of the matrix : "<<endl;
    R = 1 + rand() % MAXROW;
    C = 1 + rand() % MAXCOL;
    cout<<R<<"x"<<C<<endl;
    cout<<"Randomly Generated Matrix : "<<endl;
    for (int j=1; j<=R; j++)
        {
            vector<int> Row;
            for (int k=1; k<=C; k++)
               {
                    int x= rand() % MAX;
                    Row.push_back(x);
               } 
            matrix.push_back(Row);
        }
      for(int i=0;i<R;i++) {{for(int j=0;j<C;j++) cout<<matrix[i][j]<<" ";} cout<<endl;}
    cout<<endl;
    driver();
    return 0;
}
