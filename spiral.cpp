/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* spiralOrder(const int** A, int n11, int n12, int *len1) {
    int l=0,r=n12-1,t=0,b=n11-1,dir=0,i;
    *len1=0;
    int a[n11*n12];
    while((l<=r)&&(t<=b))
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            a[*len1++]=A[t][i];
            t++;
            dir=1;
        }
        else if(dir==1)
        {
            for(i=t;i<=b;i++)
            a[*len1++]=A[i][r];
            r--;
            dir=2;
        }
        else if(dir==2)
        {
            for(i=r;i>=l;i--)
            a[*len1++]=A[b][i];
            b--;
            dir=3;
        }
        else if(dir==3)
        {
            for(i=b;i>=t;i--)
            a[*len1++]=A[i][l];
            l++;
            dir=0;
        }
    }
        return a;
}

