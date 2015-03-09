
import java.util.*;
import java.math.*;

public class weer {
	
	public static void main(String[] args)
	{   BigInteger a,b;
		System.out.println("Введите числитель дроби");
		a = new Scanner(System.in).nextBigInteger();
		System.out.println("Введите знаменатель дроби");
		b = new Scanner(System.in).nextBigInteger();
	   
		BigInteger  n = BigInteger.valueOf(0)  ;
		BigInteger newchisl = BigInteger.valueOf(0) ;
		BigInteger newznamen = BigInteger.valueOf(0);
	    Drob(a,b,n,newchisl,newznamen);
		
	}
	
	
	private static void Drob(BigInteger a,  BigInteger  b, BigInteger  n, BigInteger  newchisl, BigInteger  newznamen)
	{
		
		
		n = a.divide(b);
		 
		newchisl = a.remainder(b);
        newznamen = b;
        if(newchisl == BigInteger.valueOf(0))
        {System.out.println(n);
        }
        else{
		//System.out.println(n+" "+newchisl+"/"+newznamen);
		System.out.println("                "+newchisl);
		System.out.println(n+"--------------------------------------------------");
		System.out.println("                "+newznamen);}
	}
		}



