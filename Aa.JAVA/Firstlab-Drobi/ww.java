import java.math.BigInteger;
import java.util.Scanner;

public class ww {


	
	public static void main(String[] args){
		 Scanner sc = new Scanner(System.in);
		 Fraction a = inputFraction(sc);
	     Fraction b = inputFraction(sc);	
	    // Fraction c = a.Sum(b);
	     System.out.println(a + " + " + b + " = " + (a.Sum(b)));
	     //System.out.println(c);
	     System.out.println(a + " * " + b + " = " + (a.Mul(b)));
	     System.out.println(a + " - " + b + " = " + (a.Sub(b)));
	     System.out.println(a + " / " + b + " = " + (a.Div(b)));
	}
	
	public static Fraction inputFraction(Scanner sc){
	  System.out.print("Введите числитель  дроби ");
	  BigInteger aa = sc.nextBigInteger();
	  System.out.print("Введите знаменатель  дроби ");
	  BigInteger bb = sc.nextBigInteger();
	  
	  
	  
	  return new Fraction(aa,bb);

	}}

@HaraldZealot

