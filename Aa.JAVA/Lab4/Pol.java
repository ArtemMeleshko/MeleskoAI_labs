import java.util.logging.Logger;

/** class Pol 
 * This class count calories
 * @author Artem
 * 
 *
 */
public  interface  Pol {
	//double Calories();
	public void Norma(double goal , double typelife);
	double Calories1(double goal , double typelife);

	double Calories();
	
	
}

	/**
	 * Calories women
	 * @author Artem
	 *
	 */
class Woman implements Pol {
	private static Logger log = Logger.getLogger(maain.class.getName());
		double weight, height;
		int age;
		Woman ( double weight, double height, int age){
			log.entering(Woman.class.getName(), "Woman ( double weight, double height, int age)");
	        assert weight > 0 : "Invalid weight value";
	        log.finest("assert weight > 0 is validated");
	        assert  height > 0 : "Invalid  height value";
	        log.finest("assert  height > 0 is validated");
	        assert  age > 0 : "Invalid  age value";
	        log.finest("assert  age > 0 is validated");
			this.weight=weight;
			this.height=height;
			this.age=age;
			log.exiting(Woman.class.getName(), "Woman ( double weight, double height, int age)");
			
		}
		
		public double Calories(){
			return 477.6+(9.2*weight)+(3.1*height)-(4.3*age);
		}
	/**
	 * @return the number of calories
	 */
		
	/** Considers normal proteins, carbohydrates, fats  **/
		
		public void Norma(double typelife, double goal){
			System.out.println("Суточная норма каллорий " + Math.rint(this.Calories()*typelife)* goal);
			System.out.println("Белков " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
			System.out.println("Жиров " + Math.rint(((((this.Calories()*typelife)* goal)*0.2)/9)));
			System.out.println("Углеводов " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
		}
		public double Calories1(double goal , double typelife)
		
		{
			return Math.rint(((this.Calories()*goal)* typelife));
		}
/**
 * @return the number of calories norma
 */
		
}
	
/**
 * Calories men
 * @author Artem
 *
 */

class Man implements Pol {
	private static Logger log = Logger.getLogger(maain.class.getName());
	double weight, height;
	int age;
	Man ( double weight, double height, int age){
		log.entering(Man.class.getName(), "Man ( double weight, double height, int age)");
        assert weight > 0 : "Invalid weight value";
        log.finest("assert weight > 0 is validated");
        assert  height > 0 : "Invalid  height value";
        log.finest("assert  height > 0 is validated");
        assert  age > 0 : "Invalid  age value";
		this.weight=weight;
		this.height=height;
		this.age=age;
		log.exiting(Woman.class.getName(), "Man ( double weight, double height, int age)");
	}
	public double Calories(){
		return 88.36+(13.4*weight)+(4.8*height)-(5.7*age);
	}
	/** Considers normal proteins, carbohydrates, fats  **/
	public void Norma(double typelife, double goal){
		System.out.println("Суточная норма каллорий " + Math.rint(this.Calories()*typelife)* goal);
		System.out.println("Белков " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
		System.out.println("Жиров " + Math.rint(((((this.Calories()*typelife)* goal)*0.2)/9)));
		System.out.println("Углеводов " + Math.rint(((((this.Calories()*typelife)* goal)*0.4)/4)));
	}
	public double Calories1(double goal , double typelife)
	
	{
		return Math.rint(((this.Calories()*goal)* typelife));
	}
	/**
	 * @return calories normal
	 */
}
