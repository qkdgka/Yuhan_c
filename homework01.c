#include <stdio.h>
int main()
{
	char screen[465];/*가로: 30 세로: 15 */

	int i = 0;
	#include <stdio.h>
#include <string.h>

int main() {
    
   
const int ROWS = 30;
    
   
const int COLS = 15;
    
   
const int NUM_SCREENS = 3;

    

   


char screens[NUM_SCREENS][ROWS][COLS];

    

   


// 첫 번째 화면
    
   
strcpy(screens[0][0], "  Screen 1");
    
   
for (int i = 1; i < ROWS; i++) {
        
       
for (int j = 0; j < COLS; j++) {
            screens[
            screens[

            screens

           
0][i][j] = '0';
        }
    }

    
        }
    }

   

        }
    }


        }
   

        }

		// 두 번째 화면
    
   
strcpy(screens[1][0], "  Screen 2");
    
   
for (int i = 1; i < ROWS; i++) {
        
       
for (int j = 0; j < COLS; j++) {
            screens[
            screens[

            screens

           
1][i][j] = '0';
        }
    }

    
        }
    }

   

        }
    }


        }
   

        }
		// 세 번째 화면
    
   
strcpy(screens[2][0], "  Screen 3");
    
   
for (int i = 1; i < ROWS; i++) {
        
       
for (int j = 0; j < COLS; j++) {
            screens[
            screens[

           
2][i][j] = '0';
        }
    }

    
        }
    }

   

        }
    }


       
	while(i<465)
	{
        if(i%31==30)
        {
		screen[i]='\n';
	}
	else if(i/31==1){

		screen[i]=' ';}
	else{
			screen[i]='0';
	}
		i=i+1;
	}
	

// 각 화면 출력
    
   
for (int k = 0; k < NUM_SCREENS; k++) {
        
       
printf("Screen %d\n", k+1);
        
       
for (int i = 0; i < ROWS; i++) {
            
           
printf("%s\n", screens[k][i]);
        }
        
        }
       

        }












	printf("%s\ndone.",screen);



	return 0;
}
