Я змяшчаю адную і тую ж заўвагу вам абодвум (Арцёму і Алексею).

Вы малайцы, што імкнецеся і змагаецеся, але маё ураджанне, што вы яшчэ не ўспрынялі ААП канцэптуальна.
Вось вам прыклад як павінна выглядаць падобная лаба (камплексныя лікі, рэалізаваны не ўсе аперацыі).

Test.java
```java
import java.util.*;

public class Test
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		Complex a = inputComplex(sc);
		Complex b = inputComplex(sc);
		System.out.println(a + " + " + b + " = " + (a.sum(b)));
		System.out.println(a + " * " + b + " = " + (a.mul(b)));
	}

	public static Complex inputComplex(Scanner sc)
	{
		System.out.print("Enter real part: ");
		double x = sc.nextDouble();
		System.out.print("Enter imaginaire part: ");
		double y = sc.nextDouble();
		return new Complex(x, y);
	}
}
```

Complex.java
```java
public class Complex
{
	private double re;
	private double im;

	public Complex(double re, double im)
	{
		this.re = re;
		this.im = im;
	}

	public double re()
	{
		return re;
	}

	public double im()
	{
		return im;
	}

	public Complex sum(Complex b)
	{
		return new Complex(re + b.re, im + b.im);
	}

	public Complex mul(Complex b)
	{
		return new Complex(re*b.re - im*b.im, re*b.im + im*b.re);
	}

	public String toString()
	{
		return re + " + " + im + "i";
	}
}
```