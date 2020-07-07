
package day.pkg10.binary.numbers;

import java.util.ArrayList;
import java.util.Scanner;


public class Day10BinaryNumbers {

    public static void main(String[] args) {
        
        int a, rem, k = 0, b = 0;
        
        ArrayList lt = new ArrayList();
        
        Scanner inp = new Scanner(System.in);
        
        a = inp.nextInt();
        
        while(a != 0)
        {
        rem = a%2;
        a = a/2;
        
        lt.add(rem);
        }
        
        for(Object i : lt)
        {
            int x;
            x = (int)i;
            
            if(x == 1)
            {
                k++;
                if(k > b)
                {
                    b = k;
                }
            }
            else
            {
                k = 0;
            }
            
            //System.out.println(x+' ');
            
        }
        
        System.out.println(b);
        
        
        
    }
    
}
