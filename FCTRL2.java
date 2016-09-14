import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class small
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int t,a[];
	    Scanner sc = new Scanner(System.in);
	    t=sc.nextInt();
	    a=new int[t];
	    for(int i=0;i<t;i++)
	    {
	        a[i]=sc.nextInt();
	       }

            BigInteger gt= BigInteger.ONE;
            for(int j=0;j<t  ;j++)
            {
                gt= BigInteger.ONE;
            for (int i = 2; i <= a[j]; i++)
               {

                    gt = gt.multiply(new BigInteger(String.valueOf(i)));
            }
             System.out.println(gt);
           }


         }
}
