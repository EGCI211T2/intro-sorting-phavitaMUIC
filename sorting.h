void swap(int &a,int &b);
void bubblesort(int *a,int N);
void selectionsort(int *a,int N);
void display(int *a,int N);

void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void bubblesort(int *a, int N){
    int i,j;
    int sorted;
    for (j=0;j<N-1;j++){
        sorted =0;
        for (i=0;i<N-1;i++){
            if (a[i]>a[i+1])
            swap(a[i],a[i+1]);
        sorted = 1;
        }
        if (sorted == 0) 
        break;
    cout<<endl;

    }
    
}

void display (int *a, int N){
    int i;
    for (i=0; i<N;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}

void selectionsort(int *a,int N){
    int i,mi,j;
    int min=a[0];
    int *p;
    //mi=0;
    for(j=0;j<N-1;j++){
        //mi=j;
        p=&a[j];
         for(i=j+1;i<N;i++){
            if(*p>a[i]){
                p = &a[i];
                //mi=i;
            }
        }
        swap (a[j],*p);
    }
}

