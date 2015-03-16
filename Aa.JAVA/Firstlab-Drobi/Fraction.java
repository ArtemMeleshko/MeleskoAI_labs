import java.math.*;

public class Fraction {
	private BigInteger s ;
    private BigInteger s1 ;


public Fraction(BigInteger s, BigInteger s1)
{
this. s = s;
this. s1 = s1;



}

public Fraction()
{
	s= BigInteger.valueOf(1);
	s1= BigInteger.valueOf(1);
}

public BigInteger s(){
return s;

}
public BigInteger s1(){
return s1;

}


private static Fraction Reduce(Fraction b)
{
	
	
	
	BigInteger i;
	if ((b.s).compareTo(b.s1) < (b.s1).compareTo(b.s))  
		i = b.s;
	else 
		i = b.s1;
    for (; (i).compareTo(BigInteger.valueOf(1)) > (BigInteger.valueOf(1)).compareTo(i) ;)
    {
        if (
        		(
        				((b.s).remainder(i)).compareTo(BigInteger.valueOf(0))   != 
        				((BigInteger.valueOf(0)).compareTo((b.s).remainder(i))
        		)  || 
        		(
        				((b.s1).remainder(i)).compareTo(BigInteger.valueOf(0))   != 
        				((BigInteger.valueOf(0)).compareTo((b.s1).remainder(i))
        		)
        	))) continue;
        	
		        (b.s) = (b.s).divide(i);
		        (b.s1) = (b.s1).divide(i);
		       
		        
		        i = (i).subtract(BigInteger.valueOf(1));
	}
    return new Fraction(b.s,b.s1);
}


public Fraction Mul(Fraction b)
{   Fraction t = Reduce(b);
    Fraction tmp = new Fraction(s.multiply(t.s),s1.multiply(t.s1));
	return  Reduce(tmp);
}

public Fraction Sum(Fraction b)
{
	Fraction t = Reduce(b);
	
	Fraction tmp = new Fraction((s).multiply(t.s1).add((s1).multiply(t.s)), (t.s1).multiply(s1) );
	
	return Reduce(tmp);
}

public Fraction Sub(Fraction b)
{
	Fraction t = Reduce(b);
	Fraction tmp = new Fraction ((s).multiply(t.s1).subtract((s1).multiply(t.s)), (t.s1).multiply(s1));
	return Reduce(tmp);
	
	}
public Fraction Div(Fraction b)
{
	Fraction t = Reduce(b);
	Fraction tmp = new Fraction(s.multiply(t.s1),s1.multiply(t.s));
	return Reduce(tmp);
}

public String toString()
{
    return s + " / " + s1 ;
}



}
