#include<iostream>
#include<ctime>

using namespace std;

int main(){

    int n,i,s,sum=0,j,count=0;

	cout<<"Enter any integer: ";
	cin>>n;


	for(i=1;i<=n;i++){

		if(n%i==0){
			//cout<<i<<" ";
			count++;
		}

	}

	int* Factor_Array= new int[count];

	for(i=1,j=0;i<=n;i++){

		if(n%i==0){
			Factor_Array[j]=i;
			j++;
		}

	}

	cout<<"\nNumber of Factors of "<<n<<" are: "<<count;
	cout<<"\nFactors of "<<n<<" are: ";
	for(i=0;i<count;i++){

		cout<<Factor_Array[i]<<"  ";
	}

	srand(time(0));

	int* Random_Array= new int [n];

	for(i=0;i<=n;i++){

		Random_Array[i]=0+ (rand() % 100);

	}
	cout<<"\nRandom array of Size "<<n<<" is: ";

	for(i=0;i<n;i++){

		cout<<Random_Array[i]<<"   ";
	}

	int a,b=0;
	bool flag=1;

	for(i=0+ (rand() % count),j=0+ (rand() % count);flag=1;i=0+ (rand() % count),j=0+ (rand() % count)){

		if(Factor_Array[i] * Factor_Array[j]==n){
				flag=0;
				a=Factor_Array[i];
				b=Factor_Array[j];
				break;
			}	
		
	}

	int *rsum= new int [a];
	int *csum= new int [b];

	cout<<"\n__________________________________________________________\n\nOriginal 2D Array ["<<a<<" by "<<b<<"]\n__________________________________________________________\n";
	cout<<"\n[";

	for(s=-1,i=0;i<n;i++){

		if(i%b==0){
			cout<<""<<endl<<"";
			s++;
			sum=0;
		}
		cout<<Random_Array[i]<<" ";
		sum=sum+Random_Array[i];
		rsum[s]=sum;

	}
	cout<<"]\n";

	cout<<"\n__________________________________________________________\n\nTranspose 2D Array ["<<b<<" by "<<a<<"]\n__________________________________________________________\n";
	cout<<"\n[";
	j=0;
	int z=b;
	for(sum=0,s=0,i=0;i<b;i++){

		b=z;
		for(j=0;j<a;j++){
		
			cout<<Random_Array[i+(j*b)]<<".";
			sum+=Random_Array[i+(j*b)];
			csum[s]=sum;
		}
			s++;
			sum=0;
		cout<<endl;
		
	}
	cout<<"]";
	cout<<"\n________________________\n";
	for(i=0;i<a;i++){
		
		cout<<"\nSum of row "<<i+1<<" is: "<<rsum[i];
		
	}

	cout<<"\n________________________\n";

	for(i=0;i<b;i++){		
		cout<<"\nSum of Col "<<i+1<<" is: "<<csum[i];
				
	}
	cout<<"\n________________________\n";
    return 0;
}