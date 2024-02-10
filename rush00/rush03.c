#include <unistd.h>
#include <stdio.h>

void rush(int x, int y){
    int count = 1;
    int width = 2;
    int height = 2;
    
    if(x == 1 && y == 1){
        write(1,"A",1);
    }else if(x != 1 && y != 1){
        while(count <= y){
            if(count == 1){
                write(1,"A",1);
                while(width != x){
                    write(1,"B",1);
                    width++;
            
                    if(width == x){
                    write(1,"C",1); 
                    }
                }
            }
            if(count < y){
                if(width != x){
                    write(1,"\nB",2);
                    while(width != x){
                        write(1," ",1);
                        width++;
            
                        if(width == x){
                            write(1,"B",1); 
                        }
                    }
                }
            }
            if(count == y){
                write(1,"\nA",2);
                while(width != x){
                    write(1,"B",1);
                    width++;
            
                    if(width == x){
                    write(1,"C",1); 
                    }
                }
            }   
            width = 2;
            height = 2;
            count++;
        }  
    }
}


// int main(){
//     rush(42,42);
//     return 0;
// }

 