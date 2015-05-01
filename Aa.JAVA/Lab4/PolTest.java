import static org.junit.Assert.*;

import org.junit.Test;


public class PolTest {

	@SuppressWarnings("deprecation")
	@Test
	public void testCalories() throws Exception
	{
		
             Pol Cal0 = new Woman(60 , 160 , 20);
	        double n =  Cal0.Calories();
	        assertEquals(1439.6 , n);
		
		
		
	     Pol Cal1 = new Man(80 , 180 , 20);
		 double m = Cal1.Calories();
		 assertEquals(1905.36 , n);
	}


	@SuppressWarnings("deprecation")
	@Test
	public void testCalories1() throws Exception 
	{
	       Pol Calories0 = new Woman(60, 160, 20);
		 double n = Calories0.Calories1(1.0 , 1.2);
		 assertEquals(1727.52 , n);
		
	       Pol Calories01 = new Man(80, 180, 20);
		 double m = Calories01.Calories1(1.0 , 1.5);
		 assertEquals(2858.04 , m);
	}

}
