
#include<queue>
#include<iostream>
using namespace std;

template <typename T>
class MyIterator
{
    priority_queue<T> q;
public :
    MyIterator  (T *arr)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                q.emplace(arr[i][j]);
            }
        }       
    }
    
    bool hasNext()
    {
        return q.empty();
    }
    
    T next()
    {
        return q.top();
    }
};


int main()
{
    int arr[3][3] = {{ 1,5,7}, {2,3,10}, {4,6,9}}; //exepcted output 1,2,3,4,5,6,7,9,10
    MyIterator<int> m(&arr);
/*
    while(m->hasNext())
    {
        cout<<m->next()<<" ";
    }
*/
}
