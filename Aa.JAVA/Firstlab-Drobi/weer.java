import java.util.*;
import java.math.*;


public class weer {
	
	public static void main(String[] args)
	{   BigInteger a,b,c,d;
		System.out.println("Введите числитель 1 дроби");
		a = new Scanner(System.in).nextBigInteger();
		System.out.println("Введите знаменатель 1 дроби");
		b = new Scanner(System.in).nextBigInteger();
		
		System.out.println("Введите числитель 2 дроби");
		c = new Scanner(System.in).nextBigInteger();
		System.out.println("Введите знаменатель 2 дроби");
		d = new Scanner(System.in).nextBigInteger();
		
		BigInteger  s = BigInteger.valueOf(0)  ;
		BigInteger  s1 = BigInteger.valueOf(0)  ;
		
	    BigInteger  m1 = BigInteger.valueOf(0)  ;
		BigInteger  m2 = BigInteger.valueOf(0) ;
		BigInteger  n = BigInteger.valueOf(0)  ;
		BigInteger  m = BigInteger.valueOf(0)  ;
		BigInteger newchisl = BigInteger.valueOf(0) ;
		BigInteger newznamen = BigInteger.valueOf(0);
		BigInteger newchisl1 = BigInteger.valueOf(0) ;
		BigInteger newznamen1 = BigInteger.valueOf(0);
	    BigInteger l = BigInteger.valueOf(0);
		BigInteger  d1 = BigInteger.valueOf(0)  ;
		BigInteger c1 = BigInteger.valueOf(0);
		BigInteger b1 = BigInteger.valueOf(0);
		BigInteger d11 = BigInteger.valueOf(0);
		BigInteger  l1 = BigInteger.valueOf(0);
		BigInteger  a1 = BigInteger.valueOf(0);
		s = d.multiply(b);
		Drob(a,b,d,c,n,newchisl,newznamen,newchisl1,newznamen1,m,b1,a1,c1,d11);
		sum(a,b,c,d,s,s1);
		multi(a,b,c,d,m1,m2);
		sub(a,b,c,d,d1,s);
		div(a,b,c,d,l1,l);
		
	}
	
	
	private static void Drob(BigInteger a,  BigInteger  b,BigInteger  d,BigInteger  c, BigInteger  n, BigInteger  newchisl, BigInteger  newznamen,
			BigInteger newchisl1,BigInteger newznamen1 , BigInteger m ,BigInteger a1 ,BigInteger b1 ,BigInteger c1 ,BigInteger d11 )
	{   
		a1 = a.abs();
		b1 = b.abs();
		if( a1.compareTo(b1) > b1.compareTo(a1))
		
		{
		n = a.divide(b);
		 
		newchisl = a.remainder(b);
        newznamen = b;
        if(newchisl == BigInteger.valueOf(0))
        {System.out.println(n);
        }
        else{
		System.out.println("Смешанная дробь1 "+n+" "+newchisl+"/"+newznamen);
		}}
		else
		{   newchisl = a.remainder(b);
		    newznamen = b ;
			System.out.println("Смешанная дробь1 "+newchisl+" "+"/"+newznamen);}
	   
		c1 = c.abs();
		d11 = d.abs();
		
		if (c1.compareTo(d11) > d11.compareTo(c1))
		
		{
			m = c.divide(d);
			newchisl1 = c.remainder(d);
			newznamen1 = d;
			if(newchisl1 == BigInteger.valueOf(0))
	        {System.out.println(m);
	        }
	        else{
			System.out.println("Смешанная дробь2 "+m+" "+newchisl1+"/"+newznamen1);
			}}
			else
			{   newchisl1 = c.remainder(d);
			    newznamen1 = d ;
				System.out.println("Смешанная дробь2 "+newchisl1+" "+"/"+newznamen1);}
		   
		}
	
		
     

  public static void sum(BigInteger a,  BigInteger  b, BigInteger c,  BigInteger  d , BigInteger s,BigInteger s1)
{   
		s1 = (((s.divide(b)).multiply(a)).add((s.divide(d)).multiply(c)));

        System.out.println("Сумма "+s1+"/"+s);
    
}
  public static void multi(BigInteger a,  BigInteger  b, BigInteger c,  BigInteger  d , BigInteger m1,BigInteger m2)
  {
	  
	  m1 = a.multiply(c);
	  m2 = b.multiply(d);
	  System.out.println("Умнажение "+m1+"/"+ m2);
	  
	    
	  
  }
  public static void sub(BigInteger a,  BigInteger  b, BigInteger c,  BigInteger  d , BigInteger d1, BigInteger s)
  {  
	  d1 = (((s.divide(b)).multiply(a)).subtract((s.divide(d)).multiply(c)));
	  System.out.println("Разность "+d1+"/"+s );
  }
  public static void div(BigInteger a,  BigInteger  b, BigInteger c,  BigInteger  d , BigInteger l1, BigInteger l)
  {   
	  l1 = a.multiply(d);
	  l = b.multiply(c);
	  System.out.println("Деление "+l1+"/"+ l);
	  
	 
	  
	  
	  }}
  

