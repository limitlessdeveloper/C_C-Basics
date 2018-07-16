#include<stdio.h>
#include<conio.h>
void main(){
	char a[10];
	int i;
	printf("Enter eqaution: ")
	for(i=0;i<10;i++){
		scanf("%c",&a[i]);
	}
	/*for(i=0;i<10;i++){
		printf("%c",a[i]);
	}*/
	char dt[10];int d=0;
	char vr[10];int v=0;
	char eqt;
	char val[10];int vl=0;
	char term;
	int stop=0;
	for(i=0;i<=10;i++){
		if(a[i]!=' ' && stop==0){
			dt[d]=a[i];
			d++;
			if(a[i+1]==' '){
				stop++;
			}			
		}
		else if((a[i]!=' ' || a[i]!='=')&& stop==1){
			vr[v++]=a[i];
			if(a[i+1]==' ' || a[i+1]=='='|| a[i+1]==';')stop++;
			
		}
		else if(a[i]=='=' && stop ==2){
			eqt=a[i];
			stop++;
		}
		else if(a[i]!=' ' && stop==3){
			val[vl++]=a[i];
			if(a[i+1]==';' || a[i+1]==' '){
				stop++;
		    }
		}
		else if(a[i]==';'  ){
			term=';';
		}
	}
	
	for(i=0;i<d;i++){
		printf("%c",dt[i]);
	}
	printf("\n");
	for(i=0;i<v;i++){
		printf("%c",vr[i]);
	}
	printf("\n");
	printf("%c \n",eqt);
	for(i=0;i<vl;i++){
		printf("%c",val[i]);
	}
	printf("\n");
	printf("%c \n",term);
	
}