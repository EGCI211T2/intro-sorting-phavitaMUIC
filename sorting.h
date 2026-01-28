void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);

void swap(int &a,int &b){
    int c;
    c=b;
    b=a;
    a=c;
}

void sort(int *a, int N){
    int i,j;
    for (j=0;j<N-1;j++){
        for (i=0;i<N-1;i++){
            if (a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }

    }
    
}
void 