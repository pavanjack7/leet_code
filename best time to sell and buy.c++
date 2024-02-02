
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int slidingw(vector<int>arr,int size)
{
    int max_sum=INT_MAX;
    int current_s=0;
    for(int a : arr){
        max_sum=min(max_sum,a);
        current_s=max(current_s,a-max_sum);
    }
    return current_s;
}

int main()
{
    vector<int>arr;
    int num;
    
    cout<<"enter the elements(enter -1 to stop)"<<endl;
    while(true){
        cin>>num;
        if(num==-1){
            break;
        }  
        arr.push_back(num);
    }
    int size=arr.size();
    cout<<size<<endl;
    Solution.solution;
    int output=slidingw(arr,size);
    cout<<output<<endl;
    return 0;
}
