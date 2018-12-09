#include<bits/stdc++.h>

using namespace std;

#define MAX_SIZE 100006
int tree[MAX_SIZE] = {0};
int arr[MAX_SIZE] = {0};

void build(int node, int start, int end) {
    if(start == end) {
        tree[node] = arr[start];
    }
    else {
        int mid = ( start + end ) / 2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        tree[node] = arr[2*node] + arr[2*node+1];
    }
}

int query(int node,int start,int end,int l,int r) {
    if(r<start || l>end) {
        return 0;
    } else if (l >= start && r <= end) {
        return tree[node];
    }
    int mid = ( start+end )/2;
    int ebony = query(2*node,start,mid,l,r);
    int ivory = query(2*node+1,mid+1,end,l,r);
    
    return (ebony+ivory);
}

void update(int node,int start,int end,int idx,int val) {
    if(start == end) {
        arr[idx] += val;
        tree[node] += val;
    }
    else {
        int mid = ( start + end )/2;
        //if idx is b/w start and mid transverse left
        //else transsvrse right
        if(start <= idx && idx <= mid) {
            update(2*node,start,mid,idx,val);
        } else {
            update(2*node+1,mid+1,end,idx,val);
        }
        
        tree[node] = tree[2*node] + tree[2*node + 1];
    }
}


int main()
{
    int N,Q;
    cin>>N>>Q;
    int arr[100006];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    build(0,0,N-1);
    while(Q--) {
        char a;
        int b,c;
        cin>>a>>b>>c;
        if(a == 'q') {
            
        } else if(a == 'u') {
            
        }
    }
    return 0;
}