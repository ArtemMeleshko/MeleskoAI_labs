import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class Stroka {
	
	public static void main (String args[])
	{   
		String text = " Read only media enable the user to both read data from and write data to the media." +
				" Read and write media can only be used for reading data i.e. the stored data cannot be changed in any way.";
        String word[] = {"Read" ,"media" , "user" , "data" , "way" };
        int count[] = { 0, 0, 0, 0, 0};
		for (int i = 0; i < word.length; i++) {
			count[i] = check(text, word[i]);
		}
		for(int i = count.length-1 ; i > 0 ; i--){
	        for(int j = 0 ; j < i ; j++){
	           
	            if( count[j] > count[j+1] ){
	                int tmp = count[j];
	                count[j] = count[j+1];
	                count[j+1] = tmp;
	            }
	        }}
		output(word, count );
        
	}

	public static int check(String text , String word )
	{   int counts = 0;
		
	String regex = word;    
	Pattern p = Pattern.compile(regex);
	Matcher m = p.matcher(text);
	    while(m.find())
	    {
	    	counts ++;
	    }
	   return counts;
	
	}
	public static void output(String word[] , int count[]  )
	{
		
		for(int i = 0 ; i < word.length ; i++)
		{
			System.out.println(word[i] + " " + count[i]);
		}
	}
}
