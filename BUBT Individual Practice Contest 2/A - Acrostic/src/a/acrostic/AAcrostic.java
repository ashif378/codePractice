
package a.acrostic;

import java.util.Scanner;

public class AAcrostic {

    public static void main(String[] args) {
        
        int w, l;
        String s;
        
        Scanner inp = new Scanner(System.in);
        
        s = inp.next();
        w = inp.nextInt();
        
        l = s.length();
        
        char v[] = s.toCharArray();
        
        for(int i=0; ; i++)
        {
            int a;
            a = (i*w);
            if(a < l)
            {
                System.out.print(v[a]);
            }
            else
            {
                break;
            } 
        }
    }
}
