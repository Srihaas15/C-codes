void findpq(int n, double a[n][n], int *p, int *q) {
   *p=-1;
   *q=-1;
    double maxvalue = 0.0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {  
         if (fabs(a[i][j]) > maxvalue) {
             maxvalue = fabs(a[i][j]);
               *p = i;
               *q = j;
            }
        }
    }
}

void jacobi(int n,double a[n][n],double P[n][n],int p,int q){
     double t;
     double temp1[n][n],temp2[n][n];
    t=0.5*atan((2*a[p][q])/(a[p][p]-a[q][q]));     
     double c,s;
     c=cos(t);
     s=sin(t);
      for(int i = 0;i<n;i++){
       for(int j=0;j<n;j++){
        if(i==j){
            P[i][j]=1.0;
            }
         else{
            P[i][j]=0.0;
            }    
     }
    }
     P[p][p]=c;
     P[q][q]=c;
     P[p][q]=-s;
     P[q][p]=s;
   for(int i = 0;i<n;i++){
     for(int j=0;j<n;j++) {
       temp1[i][j] = 0.0;
         for (int k=0;k<n;k++) {
           temp1[i][j]+=P[k][i]*a[k][j];
        }
      }
    }
   for(int i=0;i<n;i++){
     for(int j = 0; j < n;j++){
       temp2[i][j]=0.0;
          for(int k=0;k<n;k++){
            temp2[i][j]+=temp1[i][k]*P[k][j];
      }
     }
    }
   
   for(int i = 0;i<n;i++){
      for(int j=0;j<n;j++){
            a[i][j]=temp2[i][j];
     }
    }
   
 
}
 
