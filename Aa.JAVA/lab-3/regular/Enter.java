
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.*;
public class Enter {
	public static void main(String[] args)
	{  
		//
		String filename = "calories.ser";
	     if(args.length > 0)
		    {
		      filename = args[0];
		   }          
		    Woman Calories = new Woman(0, 0, 0);
		    // Man Calories = new Man()
		    FileOutputStream fos = null;
		    ObjectOutputStream out = null;
		    try
		    {
		      fos = new FileOutputStream(filename);
		      out = new ObjectOutputStream(fos);
		      out.writeObject(Calories);
		       out.close();
		    }
		    catch(IOException ex)
		    {
		       ex.printStackTrace();
		     }
		//
		    String filename1 = "calories1.ser";     
		         if(args.length > 0)
		         {
		           filename = args[0];
		         }
		       Woman Calories = null;
		       FileInputStream fis = null;
		       ObjectInputStream in = null;
		       try
		       {
		        fis = new FileInputStream(filename);
		         in = new ObjectInputStream(fis);
		         Calories = (Woman)in.readObject();
		         in.close();
		       }
		     catch(IOException ex)
		       {
		        ex.printStackTrace();
		       }
		       catch(ClassNotFoundException ex)
		       {
		         ex.printStackTrace();
		       }
		       
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
		NumberCalories MorW = null;
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
	/*MorW.Norma(t,g);
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
	}}*/
}}
