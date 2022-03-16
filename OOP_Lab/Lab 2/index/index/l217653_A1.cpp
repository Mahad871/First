#include <iostream >
 using namespace std;

 void resize(int*&arr ,int oldSize, int newSize );

 int main(){
     
    int a[3][2];
    int i,j,k;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            a[i][j]=i;
        }
    }

        
        cout<<sizeof(a)/2;
    

return 0;
}
 