
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;
    int arr_write[] = {1,2,3};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    //int arr_read[];
    
    //if ((fp = fopen("a.bin", "wb+")) == NULL){
      //  printf("Cannot open ")
        
    fp = fopen("a.bin","wb+");
    fwrite(arr_write,sizeof(int),1,fp);
    fread(arr_write,sizeof(int),1,fp);
    for(int i=0;i<=2;i++){
        printf("%d",arr_write[i]);
    }
    fclose(fp);
    return 0;
}    
        
        
        
        
        
        
        
