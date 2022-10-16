#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void toplama(char dizi1[],char dizi2[],int dizi3[],int a,int b){
    if(a>=b){
   	  int t,i,k;
   	  int c=a-2;
	  int j=b-1;
    
	for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	}
	  
	  printf("\n");
	
	for(i=0;i<a-b;i++){
  
	  printf(" ");	  	
	}
	for(i=0;i<b;i++){
	  
	  printf("%d",dizi2[i]-48);  
	}
	 
	  printf("\n");
   	
	for(k=0;k<=a-b;k++){
		
   		dizi3[k]=dizi1[k]-48; 		
	 }  

    for(k=a-1;k>=a-b;k--){
			 
	 	dizi3[k]=dizi1[k]+dizi2[j]-96;
	    
		j--;
  	
	   }
   
    for(k=a-1;k>0;k--){	
	   if(dizi3[k]>9){
	   	    t=dizi3[k]-10;
	   	  
		    dizi3[k]=t;
	    
		    dizi3[c]++;	    
	        c--;
	 }  
   } 
    
	for(k=0;k<a;k++){
    	
        printf("%d",dizi3[k]);  
 }
}
 else{
 	int t,i,k;
	
	for(i=0;i<b;i++){
	
	  printf("%d",dizi2[i]-48);
	}
	  
	  printf("\n");

	for(i=0;i<b-a;i++){
	  	
		printf(" ");
	}
	  
	for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	}
	  
	  printf("\n");
   	
	for(k=0;k<=b-a;k++){
   		
		dizi3[k]=dizi2[k]-48;
	}  
	int c=b-2;
	int j=a-1;
    
	for(k=b-1;k>=b-a;k--){		 
	 	
		dizi3[k]=dizi1[j]+dizi2[k]-96;
	    j--;
  	
	}
   
    for(k=b-1;k>0;k--){	
	   
	   if(dizi3[k]>9){
	   	
		  t=dizi3[k]-10;
	   	  dizi3[k]=t;
	      dizi3[c]++;	    
	      c--;
	 }  
   } 
    
	for(k=0;k<b;k++){
       
	   printf("%d",dizi3[k]);
}
   
   }
}
void cikarma(char dizi1[],char dizi2[],int dizi3[],int a,int b){
 if(a>b){
   	  int t,i,k;
   	  int c=a-2;
	  int j=b-1;
    for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	}
	  
	  printf("\n");
	
	for(i=0;i<a-b;i++){
	  
	  printf(" ");
	  	
	}
	
	for(i=0;i<b;i++){
	  
	  printf("%d",dizi2[i]-48);
	  
	}
	  
	  printf("\n");
   	
	for(k=0;k<=a-b;k++){
		
   		dizi3[k]=dizi1[k]-48;
   		
	 }  

    for(k=a-1;k>=a-b;k--){
			 
	 	dizi3[k]=dizi1[k]-dizi2[j];
	    
		j--;
  	
	   }
   
    for(k=a-1;k>0;k--){	
	   if(dizi3[k]<0){
         t=dizi3[k]+10;
	     dizi3[k]=t;
		 dizi3[c]--;
		 c--; 
	 
	 }
   } 
    
	for(k=0;k<a;k++){
    	
      printf("%d",dizi3[k]);
   }
}
if(a<b){
 	int t,i,k;
	for(i=0;i<b;i++){
	
	  printf("%d",dizi2[i]-48);
	  }
	  
	  printf("\n");
	
	for(i=0;i<b-a;i++){
	  	printf(" ");
	  }
	
	for(i=0;i<a;i++){
     
	  printf("%d",dizi1[i]-48);
	 }
	  
	  printf("\n");
   	
	for(k=0;k<=b-a;k++){
   		
		dizi3[k]=dizi2[k]-48;
	 }  
	int c=b-2;
	int j=a-1;
    
	for(k=b-1;k>=b-a;k--){		 
	 	dizi3[k]=dizi2[k]-dizi1[j];
	    j--;
  	
	   }
   
    for(k=b-1;k>0;k--){	
	   if(dizi3[k]<0){
	   	t=dizi3[k]+10;
	   	dizi3[k]=t;
	    dizi3[c]--;	    
	    c--;
	 }  
   } 
    
	for(k=0;k<b;k++){
   
   printf("%d",dizi3[k]);
}
   
   }	

else if(a=b){
   	  int t,i,k;
   	  int c=a-2;
	  int j=b-1;
    if(dizi1[0]>dizi2[0]){

	for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	}
	  
	  printf("\n");
	
	for(i=0;i<a-b;i++){
	  
	  printf(" ");
	  	
	}
	
	for(i=0;i<b;i++){
	  
	  printf("%d",dizi2[i]-48);
	  
	}
	  
	  printf("\n");
   	

    for(k=a-1;k>=0;k--){
			 
	 	dizi3[k]=dizi1[k]-dizi2[j];
	    
		j--;
  	
	   }
   
    for(k=a-1;k>0;k--){	
	   if(dizi3[k]<0){
         t=dizi3[k]+10;
	     dizi3[k]=t;
		 dizi3[c]--;
		 c--; 
	 
	 }
   } 
    
	for(k=0;k<a;k++){
    	
      printf("%d",dizi3[k]);
   }
}
   else{
   		int t,i,k;
	for(i=0;i<b;i++){
	
	  printf("%d",dizi2[i]-48);
	  }
	  
	  printf("\n");
	
	for(i=0;i<b-a;i++){
	  	printf(" ");
	  }
	
	for(i=0;i<a;i++){
     
	  printf("%d",dizi1[i]-48);
	 }
	  
	  printf("\n");
   	

	int c=b-2;
	int j=a-1;
    
	for(k=b-1;k>=0;k--){		 
	 	dizi3[k]=dizi2[k]-dizi1[j];
	    j--;
  	
	   }
   
    for(k=b-1;k>0;k--){	
	   if(dizi3[k]<0){
	   	t=dizi3[k]+10;
	   	dizi3[k]=t;
	    dizi3[c]--;	    
	    c--;
	 }  
   } 
    
	for(k=0;k<b;k++){
   
   printf("%d",dizi3[k]);
}
   }	
}
}


void carpma(char dizi1[],char dizi2[],int dizi3[],int a,int b){
    int x[300],y[300];
    int ans[200];
    int i,j,kalan;
    int l1 = a;
    int l2 = b;
    if(a>=b){
	
	for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	}
	  
	  printf("\n");
	
	for(i=0;i<a-b;i++){
	  
	  printf(" ");  	
	}
	
	for(i=0;i<b;i++){
	  
	  printf("%d",dizi2[i]-48);	    
	}
	  
	  printf("\n");
	
	for(i = l1-1,j=0;i>=0;i--,j++){
       
	    x[j] = dizi1[i]-'0';
    }
    
	for(i = l2-1,j=0;i>=0;i--,j++){
        
		y[j] = dizi2[i]-'0';
    }
    
	for(i = 0;i < l2;i++){
        for(j = 0;j < l1;j++){
           
		    dizi3[i+j] += y[i]*x[j];
        }
    }
    
	for(i = 0;i < l1+l2;i++){
        kalan = dizi3[i]/10;     
        dizi3[i] = dizi3[i]%10;
        dizi3[i+1] = dizi3[i+1] + kalan;
    }
    
	for(i = l1+l2; i>= 0;i--){
        if(dizi3[i] > 0)
            break;
    }
    
    for(;i >= 0;i--){
        printf("%d",dizi3[i]);
    }
  }
    else{
  	int x[300],y[300];
    int i,j,kalan;
    int l1 = a;
    int l2 = b;

	for(i=0;i<b;i++){
	  
	  printf("%d",dizi2[i]-48);
	    
	}

	  printf("\n");
	for(i=0;i<b-a;i++){
	  
	  printf(" ");
	  	
	}
    for(i=0;i<a;i++){
      
	  printf("%d",dizi1[i]-48);
	  
	}
	  
	  printf("\n");
	
	for(i = l1-1,j=0;i>=0;i--,j++){
       
	    x[j] = dizi1[i]-'0';
    }
    
	for(i = l2-1,j=0;i>=0;i--,j++){
        
		y[j] = dizi2[i]-'0';
    }
    
	for(i = 0;i < l2;i++){
        
		for(j = 0;j < l1;j++){
           
		    dizi3[i+j] += y[i]*x[j];
        }
    }
    
	for(i = 0;i < l1+l2;i++){
        kalan = dizi3[i]/10;     
        dizi3[i] = dizi3[i]%10;
        dizi3[i+1] = dizi3[i+1] + kalan;
    }
    for(i = l1+l2; i>= 0;i--){
        
		if(dizi3[i] > 0)
            break;
    }
    
    for(;i >= 0;i--){
        
		printf("%d",dizi3[i]);
    }
  }
}




int main() {  
    int b,a,i,secim;
	char dizi1[3000];
	char dizi2[3000];
	int  dizi3[3000];
	int  dizi4[3000];		
	    
	printf("1.Sayi Kac Basamakli Olsun:");
	scanf("%d",&a);	
	printf("2.Sayi Kac Basamakli Olsun:");
	scanf("%d",&b);

    for(i=0;i<a;i++){
	   printf("Rakam Giriniz:");
	   scanf("%s",&dizi1[i]);

	}
    
	printf("2.Sayiyi Belirleyiniz:\n");
      
	for(i=0;i<b;i++){
	   printf("Rakam Giriniz:");
	   scanf("%s",&dizi2[i]);
    }
do{
	
	printf("\n-------------MENU------------\n");	
	printf("1.TOPLAMA\n");
	printf("2.CIKARMA\n");
	printf("3.CARPMA\n");
    printf("Bir Islem Seciniz:");
		scanf("%d",&secim);
		switch(secim){
			case 1: 
               toplama(dizi1,dizi2,dizi3,a,b);
			
			break;
			
			case 2: 
			   cikarma(dizi1,dizi2,dizi3,a,b);

			break;
			
			case 3: 
				
			   carpma(dizi1,dizi2,dizi3,a,b);
				
			break;
            case -1:
		       printf("Cikis");
			   return;
			default:
			   printf("Hatali Secim");
			   break;

}
}
  while(-1);
}


