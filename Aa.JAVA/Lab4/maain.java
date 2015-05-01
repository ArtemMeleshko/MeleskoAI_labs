
import java.io.IOException;
import java.util.*;
import java.util.logging.LogManager;
import java.util.logging.Logger;

/** class maain
 * class maain is used to input our data , weight, age , goals and lifestyle.
 * Logging used
 * @author Artem
 * 
 *
 */

public class maain {
	private static Logger log = Logger.getLogger(maain.class.getName());
	
	public static void main(String[] args)
	{   
		try
		{ 
			LogManager.getLogManager().readConfiguration( maain.class.getResourceAsStream("/logging.properties"));
		}
		    catch(IOException e){
		    	 System.err.println("Could not setup logger configuration: " + e.toString());
		    }
		Pol person1 = new Woman(55 , 173 , 20 );
		assert person1.Calories1(1.0 , 1.2) == 1700;
	    
		Pol person2 = new Man(80 , 184 , 19 );
		assert person1.Calories1(1.0 , 1.5) == 2300;
		
		Scanner sr = new Scanner(System.in);
		double weight,height, t = 0 , g = 0;
		int age, person, typelife, goal,p;
		System.out.println("Введите ваш вес ");
		weight = sr.nextDouble();
		System.out.println("Введите ваш рост ");
		height = sr.nextDouble();
		System.out.println("Введите ваш возвраст ");
		age = sr.nextInt();
		System.out.println("Кто вы? М или Ж"+ " ||"+" 1 - Ж " + " 2 - M");
		person = sr.nextInt();
		Pol MorW = null;
		switch(person)
		{
		case 1: { MorW = new Woman(weight,height,age);} break;
		case 2: { MorW = new Man(weight,height,age);} break;
		}
		System.out.println("Ваш тип Жизни ? ");
		System.out.println(" 1 - Минимальные нагрузки (сидячая работа)");
		System.out.println(" 2 - Немного дневной активности и легкие упражнения 1-3 раза в неделю");
		System.out.println(" 3 - Тренировки 4-5 раз в неделю (или работа средней тяжести) ");
		System.out.println(" 4 - Интенсивные тренировки 4-5 раз в неделю");
		System.out.println(" 5 - Ежедневные тренировки");
		System.out.println(" 6 - Тяжелая физическая работа или интенсивные тренировки 2 раза в день");
		
		
		typelife=sr.nextInt();
		switch(typelife){
		case 1:
		     t=1.2;
		     break;
		case 2:
		     t=1.375;
		     break;
		case 3:
		     t=1.4625;
		     break;
		case 4:
		     t=1.550;
		     break;
		case 5:
		     t=1.6375;
		     break;
		case 6:
		     t=1.9;
		     break;
		}
		System.out.println(" Ваша цель ");
		System.out.println(" 1 Похудение ");
		System.out.println(" 2 Набор веса ");
		System.out.println(" 3 Поддержка текущего веса ");
		goal = sr.nextInt();
		switch(goal){
		case 1: 
		    g = 0.8; 
		    break;
		case 2: g = 1.2;
		
		break;
		case 3: g = 1.0;
		break;
		
	}
	MorW.Norma(t,g);
	System.out.println("План питания");
	System.out.println("1 - Натуральный.");
	System.out.println("2 - Используя химию.");
	
	p=sr.nextInt();
	aim plan = null;
	switch(p){
	case 1:{plan=new Natural();}break;
	case 2:{plan=new Usingchemistry();}break;
	
	}
	System.out.println("Получить нужный результат вам помогут");
	switch(goal){
	case 1:{plan.Loss();}break;
	case 2:{plan.Gain();}break;
	case 3:{plan.Maintenance();}break;
	}}
	
	
}
