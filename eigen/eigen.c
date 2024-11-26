//only for symmetric matrices
#include<stdio.h>
#include<math.h>
#include"jacobi.h"

int main(){
   int n;
   double tolerance =0.00001;
   int maxpass=100;
   int pass; 
   printf("Enter the order of the matrix:\n");
   scanf("%d",&n);
   double a[n][n],P[n][n];
   printf("Enter the elements of the symmetric matrix:\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    scanf("%lf",&a[i][j]);
    }
   } 
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(a[i][j] != a[j][i]){
        printf("Enter a proper symmetric matrix\n");
        return 0;
       }
      }
     }
     
   for(pass=0;pass<=maxpass;pass++){
     int p=0,q=0;
      findpq(n,a,&p,&q);
      if (fabs(a[p][q]) < tolerance) {
      break;
      }
     jacobi(n,a,P,p,q);
    }

   printf("Eigen values of a are:\n");
     for(int i=0;i<n;i++){
          printf("%.5lf\n",a[i][i]);
   } 
     
     
   
   return 0;
}
